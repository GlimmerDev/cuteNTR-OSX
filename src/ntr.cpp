/* Copyright (C) 2017  Joseph R. Nosie

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "ntr.h"

namespace {
const char* CFG_IP      = "ipAddress";
const char* CFG_PRIMODE = "priorityMode";
const int   DEF_PRIMODE = 1;
const char* CFG_PRIFACT = "priorityFactor";
const int   DEF_PRIFACT = 5;
const char* CFG_JPGQUAL = "jpegQuality";
const int   DEF_JPGQUAL = 80;
const char* CFG_QOSVAL  = "qosValue";
const int   DEF_QOSVAL  = 105;
}

Ntr::Ntr(QObject *parent) :
    QObject(parent),
    config(qApp->applicationName()),
    connected(false),
    sequence(0),
    bufferlen(0)
{
    sock = new QTcpSocket(this);
    heartbeat = new QTimer(this);

    qRegisterMetaType<QAbstractSocket::SocketState>();
    connect(sock, SIGNAL(readyRead()), this, SLOT(readStream()));
    connect(sock, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(handleSockStateChanged(QAbstractSocket::SocketState)));
    connect(heartbeat, SIGNAL(timeout()), this, SLOT(sendHeartbeat()));
}

Ntr::~Ntr()
{
    sock->abort();
    heartbeat->stop();
    delete sock;
    delete heartbeat;
}

void Ntr::connectToDS()
{
    if (connected)
        disconnectFromDS();
    qDebug() << "Starting connection";
    QHostAddress dsIP(config.value(CFG_IP).toString());
    sock->connectToHost(dsIP, 8000);
    if (!sock->waitForConnected()) {
        qCritical() << "Connection failed!";
        return;
    }
    heartbeat->start(1000);
    connected = true;
    emit stateChanged(Ntr::Connected);
    qDebug() << "Connection established";
}

void Ntr::sendHeartbeat()
{
    sendPacket(0, 0, {}, 0);
}

void Ntr::disconnectFromDS()
{
    connected = false;
    heartbeat->stop();
    sock->flush();
    sock->disconnectFromHost();
    emit stateChanged(Ntr::Disconnected);
    qDebug() << "Disconnected";
}

void Ntr::remotePlay()
{
    int mode = config.value(CFG_PRIMODE, DEF_PRIMODE).toInt();
    int prifact = config.value(CFG_PRIFACT, DEF_PRIFACT).toInt();
    uint32_t pri = (mode<<8)|prifact;
    uint32_t jpegq = config.value(CFG_JPGQUAL, DEF_JPGQUAL).toInt();
    uint32_t qosvalue = config.value(CFG_QOSVAL, DEF_QOSVAL).toInt() << 17;
    qDebug() << "Sending remote play command";
    sendPacket(0, 901, {pri, jpegq, qosvalue, 0}, 0);
    disconnectFromDS();
    QThread::sleep(3);
    connectToDS();
    qDebug() << "Remote play started. Disconnecting to save bandwidth";
    disconnectFromDS();
    emit streamReady();
}

void Ntr::sendCommand(Ntr::Command command, QVector<uint32_t> args,
                      uint32_t len, QByteArray data)
{
    if (!connected) {
        qWarning() << "Not connected, can't send command";
        return;
    }
    switch (command) {
    case Ntr::Empty:
        sendHeartbeat();
        break;
    case Ntr::WriteSave:
        sendPacket(1, 1, args, len);
        sock->write(data);
        break;
    case Ntr::Hello:
        sendPacket(0, 3, args, len);
        break;
    case Ntr::Reload:
        sendPacket(0, 4, args, len);
        break;
    case Ntr::PidList:
        sendPacket(0, 5, args, len);
        break;
    case Ntr::AttachProc:
        sendPacket(0, 6, args, len);
        break;
    case Ntr::ThreadList:
        sendPacket(0, 7, args, len);
        break;
    case Ntr::MemLayout:
        sendPacket(0, 8, args, len);
        break;
    case Ntr::ReadMem:
        sendPacket(1, 9, args, len);
        break;
    case Ntr::WriteMem:
        sendPacket(1, 10, args, len);
        sock->write(data);
        break;
    case Ntr::QueryHandle:
        break;
    case Ntr::RemotePlay:
        remotePlay();
        break;
    default:
        break;
    }
}

void Ntr::readStream()
{
    if (bufferlen == 0)
        readPacket();
    else
        readToBuf();
}

void Ntr::sendPacket(uint32_t type, uint32_t cmd, QVector<uint32_t> args,
        uint32_t len)
{
    sequence += 1000;
    uint32_t pkt[21];
    memset((void*)pkt, 0, sizeof(pkt));
    pkt[0] = 0x12345678;
    pkt[1] = sequence;
    pkt[2] = type;
    pkt[3] = cmd;
    for (int i = 0; i < args.length(); ++i)
        pkt[i+4] = args.at(i);
    pkt[20] = len;
    sock->write((char*)pkt, sizeof(pkt));
}

void Ntr::readPacket()
{
    uint32_t pkt[21];
    memset((void*)pkt, 0, sizeof(pkt));
    sock->read((char*)pkt, sizeof(pkt));
    if (pkt[0] != 0x12345678) {
        qWarning() << "Bad magic number, discarding packet";
        return;
    }
    bufferlen = pkt[20];
    recievedcmd = pkt[3];
}

void Ntr::readToBuf()
{
    uint32_t len = sock->bytesAvailable();
    char bytes[len];
    sock->read(bytes, len);
    buffer.append(bytes, len);
    if (buffer.length() >= bufferlen) {
        emit bufferFilled(buffer);
        bufferlen = 0;
        qDebug() << buffer.length() << "bytes read";
        buffer.clear();
    }
}

void Ntr::handleSockStateChanged(QAbstractSocket::SocketState state) {
    switch (state) {
    case QAbstractSocket::UnconnectedState:
        if (connected)
            qDebug() << "Connection lost";
        heartbeat->stop();
        connected = false;
        emit stateChanged(Ntr::Disconnected);
        break;
    case QAbstractSocket::ConnectedState:
#if QT_VERSION >= 0x050400
        QTimer::singleShot(2500, [=]{ sendCommand(Ntr::PidList); });
#else
        QTimer::singleShot(2500, this, SLOT(getPidList()));
#endif
        break;
    default:
        break;
    }
}
