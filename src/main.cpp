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
#include <QApplication>
#include <QFile>
#include <QThread>
#include "mainwindow.h"
#include "ntr.h"
#include "ntrutility.h"
#include "streamwindow.h"
#include "streamworker.h"

void messageHandler(QtMsgType t, const QMessageLogContext &c, const QString &m);

const QString logfile = QStandardPaths::writableLocation(
            QStandardPaths::CacheLocation)+"/cutentr.log";

int main(int argc, char *argv[])
{
    QFile file(logfile);
    file.open(QIODevice::WriteOnly);
    QTextStream(&file) << "-- " << QDateTime::currentDateTime().toString()
        << " --\n";
    file.close();

    qDebug() << "Logfile:" << logfile;

    qInstallMessageHandler(messageHandler);

    QApplication a(argc, argv);
    a.setApplicationName("cutentr");
    a.setApplicationDisplayName("cuteNTR");
    a.setApplicationVersion("v0.3.1");

    MainWindow w;
    StreamWindow top(true);
    StreamWindow bot(false);

    top.setTitle("Top screen - cuteNTR");
    bot.setTitle("Bottom screen - cuteNTR");

    QThread *t_ntr = new QThread;
    Ntr ntr;
    ntr.moveToThread(t_ntr);

    NtrUtility helper;

    QThread *t_stream = new QThread;
    StreamWorker stream;
    stream.moveToThread(t_stream);

    qRegisterMetaType<Ntr::Command>("Ntr::Command");
    qRegisterMetaType<Ntr::State>("Ntr::State");
    qRegisterMetaType<uint32_t>("uint32_t");
    qRegisterMetaType<QVector<uint32_t>>("QVector<uint32_t>");
    qRegisterMetaType<StreamWorker::State>("StreamWorker::State");

    /* Connect MainWindow signals */
    QObject::connect(&w, SIGNAL(ntrCommand(Ntr::Command,QVector<uint32_t>,
                    uint32_t,QByteArray)),
            &ntr, SLOT(sendCommand(Ntr::Command,QVector<uint32_t>,
                    uint32_t,QByteArray)));
    QObject::connect(&w, SIGNAL(connectToDS()),
            &ntr, SLOT(connectToDS()));
    QObject::connect(&w, SIGNAL(disconnectFromDS()),
            &ntr, SLOT(disconnectFromDS()));
    QObject::connect(&w, SIGNAL(sendNfcPatch(int)),
            &helper, SLOT(writeNfcPatch(int)));
    QObject::connect(&w, SIGNAL(stopStream()),
            &stream, SLOT(stopStream()), Qt::DirectConnection);
    QObject::connect(&w, SIGNAL(topSettingsChanged()),
            &top, SLOT(updateSettings()));
    QObject::connect(&w, SIGNAL(botSettingsChanged()),
            &bot, SLOT(updateSettings()));

    /* Connect Ntr signals */
    QObject::connect(&ntr, SIGNAL(streamReady()),
            &stream, SLOT(stream()));
    QObject::connect(&ntr, SIGNAL(stateChanged(Ntr::State)),
            &w, SLOT(handleNtrStateChanged(Ntr::State)));
    QObject::connect(&ntr, SIGNAL(bufferFilled(QByteArray)),
            &helper, SLOT(handleInfo(QByteArray)));

    QObject::connect(t_ntr, SIGNAL(finished()),
            &ntr, SLOT(deleteLater()));

    /* Connect NtrUtility signals */
    QObject::connect(&helper, SIGNAL(ntrCommand(Ntr::Command,
                    QVector<uint32_t>,uint32_t,QByteArray)),
            &ntr, SLOT(sendCommand(Ntr::Command,QVector<uint32_t>,
                    uint32_t,QByteArray)));

    /* Connect Stream signals */
    QObject::connect(&stream, SIGNAL(topImageReady(QPixmap)),
            &top, SLOT(renderPixmap(QPixmap)));
    QObject::connect(&stream, SIGNAL(botImageReady(QPixmap)),
            &bot, SLOT(renderPixmap(QPixmap)));
    QObject::connect(&stream, SIGNAL(stateChanged(StreamWorker::State)),
            &w, SLOT(handleStreamStateChanged(StreamWorker::State)));
    QObject::connect(&stream, SIGNAL(stateChanged(StreamWorker::State)),
            &top, SLOT(handleStreamStateChanged(StreamWorker::State)));
    QObject::connect(&stream, SIGNAL(stateChanged(StreamWorker::State)),
            &bot, SLOT(handleStreamStateChanged(StreamWorker::State)));

    w.show();
    t_ntr->start();
    t_stream->start();
    return a.exec();
}

void messageHandler(QtMsgType t, const QMessageLogContext &c, const QString &m)
{
    QString suff;
    QFile file(logfile);
    file.open(QIODevice::WriteOnly|QIODevice::Append);
    QTextStream log(&file);
    if (c.function)
        suff = QString(" - [%1]").arg(c.function);
    switch(t) {
#if QT_VERSION >= 0x050500
    case QtInfoMsg:
#endif
    case QtDebugMsg:
        log << "[INFO] " << m << '\n';
        break;
    case QtWarningMsg:
        log << "[WARN] " << m << suff << '\n';
        break;
    case QtCriticalMsg:
        log << "[CRIT] " << m << suff << '\n';
        break;
    case QtFatalMsg:
        log << "[CRIT] " << m << suff << '\n';
        exit(1);
        break;
    }
    file.close();
}
