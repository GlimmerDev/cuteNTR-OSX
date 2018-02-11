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
#ifndef NTR_H
#define NTR_H

#include <QObject>
#include <QSettings>
#include <QTimer>
#include <QtNetwork>
#include <stdint.h>

#if QT_VERSION < 0x050500
#define Q_ENUM Q_ENUMS
#endif

class Ntr : public QObject
{
    Q_OBJECT
public:
    explicit Ntr(QObject *parent = 0);
    ~Ntr();

    enum Command {
        Empty,
        WriteSave,
        Hello,
        Reload,
        PidList,
        AttachProc,
        ThreadList,
        MemLayout,
        ReadMem,
        WriteMem,
        Resume,
        QueryHandle,
        RemotePlay
    };
    Q_ENUM(Command)

    enum State { Disconnected, Connected };
    Q_ENUM(State)


signals:
    void stateChanged(Ntr::State);
    void bufferFilled(QByteArray);
    void streamReady();

public slots:
    void connectToDS();
    void disconnectFromDS();
    void sendCommand(Ntr::Command command, QVector<uint32_t> args={},
                     uint32_t len=0, QByteArray data="");
#if QT_VERSION < 0x050400
    void getPidList() { sendCommand(Ntr::PidList); }
#endif

private slots:
    void sendHeartbeat();
    void readStream();
    void handleSockStateChanged(QAbstractSocket::SocketState state);

private:
    void sendPacket(uint32_t type, uint32_t cmd, QVector<uint32_t> args,
                    uint32_t len);
    void remotePlay();
    void readPacket();
    void readToBuf();

    QTcpSocket *sock;
    QTimer *heartbeat;
    QSettings config;

    bool connected;
    uint32_t sequence;
    qint64 bufferlen;
    uint32_t recievedcmd;
    QByteArray buffer;
};

#if QT_VERSION < 0x050500
#undef Q_ENUM
#endif

#endif // NTR_H
