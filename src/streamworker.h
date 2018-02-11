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
#ifndef STREAMWORKER_H
#define STREAMWORKER_H

#include <QObject>
#include <QPixmap>
#include <QtNetwork>

#if QT_VERSION < 0x050500
#define Q_ENUM Q_ENUMS
#endif

class StreamWorker : public QObject
{
    Q_OBJECT
public:
    StreamWorker();
    ~StreamWorker();

    enum State { Disconnected, Connected };
    Q_ENUM(State)

signals:
    void topImageReady(QPixmap img);
    void botImageReady(QPixmap img);
    void stateChanged(StreamWorker::State);
    void streamFailed();

public slots:
    void stream();
    void stopStream();

private:
    int readJPEG(QByteArray &jpeg);

    QUdpSocket *rcv_sock;
    QSettings config;

    bool abort = false;
};

#if QT_VERSION < 0x050500
#undef Q_ENUM
#endif

#endif // STREAMWORKER_H
