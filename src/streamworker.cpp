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
#include "streamworker.h"

namespace {
const char* CFG_IP = "ipAddress";
}

StreamWorker::StreamWorker() :
    config(qApp->applicationName())
{
    rcv_sock = new QUdpSocket(this);
}

StreamWorker::~StreamWorker()
{
    if (rcv_sock != nullptr) {
        rcv_sock->abort();
        delete rcv_sock;
    }
}

void StreamWorker::stream()
{
    if (!rcv_sock->bind(QHostAddress::Any, 8001)) {
        qWarning() << "Couldn't bind stream socket";
        return;
    }
    emit stateChanged(StreamWorker::Connected);
    abort = false;
    forever {
        QByteArray data;
        int ret = -1;
        while (ret == -1) {
            data.clear();
            ret = readJPEG(data);
        }
        QPixmap pixmap;
        pixmap.loadFromData(data);
        if (ret == 1) {
            emit topImageReady(pixmap);
        } else if (ret == 0) {
            emit botImageReady(pixmap);
        } else {
            break;
        }
        if (abort) break;
    }
    rcv_sock->abort();
    qWarning() << "Stream disconnected";
    emit stateChanged(StreamWorker::Disconnected);
}

void StreamWorker::stopStream()
{
    abort = true;
}

int StreamWorker::readJPEG(QByteArray &jpeg)
{
    QHostAddress dsIP(config.value(CFG_IP).toString());
    quint16 dsPort = 8000;
    QByteArray buf(2000, '\0');
    int r;

    int cur_id, expkt = 0;
    if (!rcv_sock->waitForReadyRead(5000)) {
        qWarning() << "Remote play socket timeout";
        return -2;
    }
    r = rcv_sock->readDatagram(buf.data(), 2000, &dsIP, &dsPort);
    if (r < 0) return -2;
    buf.truncate(r);
    cur_id = buf.at(0);
    do {
        jpeg.append(buf.right(r-4));
        if ((buf.at(1)&0xf0)==0x10) {
            break;
        }
        if (!rcv_sock->waitForReadyRead(5000)) {
            qWarning() << "Remote play socket timeout";
            return -2;
        }
        buf.resize(2000);
        r = rcv_sock->readDatagram(buf.data(), 2000, &dsIP, &dsPort);
        if (r < 0) return -2;
        buf.truncate(r);
        ++expkt;
        if (expkt != buf.at(3)) {
            return -1;
        }
    } while (buf.at(0) == cur_id);

    if (jpeg.left(2) != QByteArray("\xff\xd8") ||
            jpeg.right(2) != QByteArray("\xff\xd9")) {
        return -1;
    }

    return (buf.at(1)&0x0f);
}
