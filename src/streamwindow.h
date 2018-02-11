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
#ifndef STREAMWINDOW_H
#define STREAMWINDOW_H

#include <QtGui>
#include "streamworker.h"

class StreamWindow : public QWindow
{
    Q_OBJECT
public:
    explicit StreamWindow(bool top, QWindow *parent = 0);

    virtual void render(QPainter *painter);

signals:

public slots:
    void renderLater();
    void renderNow();
    void renderPixmap(QPixmap pixmap);
    void updateSettings();
    void handleStreamStateChanged(StreamWorker::State state);

protected:
    bool event(QEvent *event) Q_DECL_OVERRIDE;

    void resizeEvent(QResizeEvent *event) Q_DECL_OVERRIDE;
    void exposeEvent(QExposeEvent *event) Q_DECL_OVERRIDE;

private:
    QBackingStore *m_backingStore;
    bool m_update_pending;
    QPixmap pixmap;
    QSize b_size;
    bool istop;
    bool active;
    QSettings config;
    double scale;
    bool smooth;
};

#endif // STREAMWINDOW_H
