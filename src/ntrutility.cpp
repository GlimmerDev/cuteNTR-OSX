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
#include "ntrutility.h"
#include "ntr.h"
#include <QMessageBox>

NtrUtility::NtrUtility(QObject *parent) : QObject(parent)
{
    qRegisterMetaType<Ntr::Command>("Ntr::Command");
    qRegisterMetaType<uint32_t>("uint32_t");
    qRegisterMetaType<QVector<uint32_t>>("QVector<uint32_t>");
}

uint32_t NtrUtility::getPid(QString pname)
{
    emit ntrCommand(Ntr::PidList);
    QString line;
    foreach (const QString &str, pidlist) {
        if (str.contains(pname)) {
            line = str;
            break;
        }
    }
    if (line.isEmpty()) {
        qWarning() << "Process" << pname << "not running";
        return 0;
    }
    bool ok;
    uint32_t pid = line.midRef(5,10).toUInt(&ok, 16);
    if (!ok) {
        qWarning() << "String conversion for pid failed";
        return 0;
    }
    return pid;

}

void NtrUtility::writeNfcPatch(int type)
{
    uint32_t pid = 0;
    uint32_t offset;
    uint32_t len;
    QByteArray patch;
    switch (type) {
    case 1: // Pokemon SM 1.1
        pid = getPid("niji_loc");
        offset = 0x3e14c0;
        patch.append("\xe3\xa0\x10\x00", 4);
        break;
    default: // Universal
        pid = 0x1a;
        offset = 0x105ae4;
        patch.append("\x70\x47", 2);
        break;
    }
    len = patch.length();
    if (pid != 0) {
        emit ntrCommand(Ntr::WriteMem, {pid, offset, len}, len, patch);
    } else {
        QString msg("Can't find pid. Make sure the title is running, then");
        msg += " wait and try again";
        QMessageBox::warning(0, "Warning", msg);
    }
}

void NtrUtility::handleInfo(QByteArray info)
{
    if (info.left(3) == QByteArray("pid")) {
        pidlist = QString(info).split("\n");
        qDebug() << "Updated pid list:" << pidlist.length() << "entries";
    } else {
        lastmessage = QString(info);
    }
}
