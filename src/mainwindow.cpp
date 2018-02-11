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
#include "mainwindow.h"
#include "ui_mainwindow.h"

namespace {
const char*  CFG_IP      = "ipAddress";
const char*  DEF_IP      = "255.255.255.255";
const char*  CFG_JPGQUAL = "jpegQuality";
const int    DEF_JPGQUAL = 80;
const char*  CFG_PRIFACT = "priorityFactor";
const int    DEF_PRIFACT = 5;
const char*  CFG_PRIMODE = "priorityMode";
const int    DEF_PRIMODE = 1;
const char*  CFG_QOSVAL  = "qosValue";
const int    DEF_QOSVAL  = 105;
const char*  CFG_TSCALE  = "topScale";
const double DEF_TSCALE  = 1;
const char*  CFG_BSCALE  = "botScale";
const double DEF_BSCALE  = 1;
const char*  CFG_SMOOTH  = "smoothing";
const bool   DEF_SMOOTH  = false;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    config(qApp->applicationName()),
    debugging(false),
    streaming(false)
{
    ui->setupUi(this);

    // Initialize Options
    ui->dsIP->setText(config.value(CFG_IP, DEF_IP).toString());
    ui->qosValue->setValue(config.value(CFG_QOSVAL, DEF_QOSVAL).toInt());
    ui->priMode->setCurrentIndex(
            config.value(CFG_PRIMODE, DEF_PRIMODE).toInt());
    ui->priFact->setValue(config.value(CFG_PRIFACT, DEF_PRIFACT).toInt());
    ui->jpegQuality->setValue(config.value(CFG_JPGQUAL, DEF_JPGQUAL).toInt());
    ui->tScale->setValue(config.value(CFG_TSCALE, DEF_TSCALE).toFloat());
    ui->bScale->setValue(config.value(CFG_BSCALE, DEF_BSCALE).toFloat());
    ui->smooth->setChecked(config.value(CFG_SMOOTH, DEF_SMOOTH).toBool());

    // Fix window size
    setMaximumSize(minimumSize());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent*)
{
    emit disconnectFromDS();
    emit stopStream();
    qApp->quit();
}

void MainWindow::handleNtrStateChanged(Ntr::State state)
{
    switch (state) {
    case Ntr::Connected:
        debugging = true;
        ui->connectButton->setText("Disconnect");
        ui->dsIP->setEnabled(false);
        break;
    case Ntr::Disconnected:
        debugging = false;
        if (!streaming)
            ui->dsIP->setEnabled(true);
        ui->connectButton->setText("Connect");
        break;
    }
    ui->connectButton->setEnabled(true);
}

void MainWindow::handleStreamStateChanged(StreamWorker::State state)
{
    switch (state) {
    case StreamWorker::Disconnected:
        streaming = false;
        if (!debugging)
            ui->dsIP->setEnabled(true);
        ui->jpegQuality->setEnabled(true);
        ui->priFact->setEnabled(true);
        ui->priMode->setEnabled(true);
        ui->qosValue->setEnabled(true);
        ui->streamButton->setText("Stream");
        break;
    case StreamWorker::Connected:
        streaming = true;
        ui->dsIP->setEnabled(false);
        ui->jpegQuality->setEnabled(false);
        ui->priFact->setEnabled(false);
        ui->priMode->setEnabled(false);
        ui->qosValue->setEnabled(false);
        ui->streamButton->setText("Stop");
        break;
    }
    ui->streamButton->setEnabled(true);
}

void MainWindow::on_connectButton_clicked()
{
    ui->connectButton->setEnabled(false);
    if (!debugging) {
        config.setValue(CFG_IP, ui->dsIP->text());
        emit connectToDS();
    } else {
        emit disconnectFromDS();
    }
}

void MainWindow::on_streamButton_clicked()
{
    ui->streamButton->setEnabled(false);
    if (!streaming) {
        config.setValue(CFG_IP, ui->dsIP->text());
        if (!debugging) emit connectToDS();
        ui->centralWidget->repaint();

        // Save options
        config.setValue(CFG_JPGQUAL, ui->jpegQuality->value());
        config.setValue(CFG_PRIFACT, ui->priFact->value());
        config.setValue(CFG_PRIMODE, ui->priMode->currentIndex());
        config.setValue(CFG_QOSVAL, ui->qosValue->value());

        emit ntrCommand(Ntr::RemotePlay);
    } else {
        emit stopStream();
    }
}

void MainWindow::on_dsIP_returnPressed()
{
    on_streamButton_clicked();
}

void MainWindow::on_sendNfcPatch_clicked()
{
    emit sendNfcPatch(ui->nfcPatchType->currentIndex());
}

void MainWindow::on_tScale_valueChanged(double scale)
{
    config.setValue(CFG_TSCALE, scale);
    emit topSettingsChanged();
}

void MainWindow::on_bScale_valueChanged(double scale)
{
    config.setValue(CFG_BSCALE, scale);
    emit botSettingsChanged();
}

void MainWindow::on_smooth_stateChanged(int state)
{
    config.setValue(CFG_SMOOTH, state != 0);
    emit topSettingsChanged();
    emit botSettingsChanged();
}
