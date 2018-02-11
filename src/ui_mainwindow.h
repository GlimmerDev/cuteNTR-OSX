/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *dsIP;
    QPushButton *streamButton;
    QFrame *line_1;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *l_priFact;
    QSpinBox *priFact;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *l_priMode;
    QComboBox *priMode;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *l_jpeg;
    QSpinBox *jpegQuality;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *l_qos;
    QSpinBox *qosValue;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *l_tScale;
    QDoubleSpinBox *tScale;
    QLabel *l_bScale;
    QDoubleSpinBox *bScale;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *smooth;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label;
    QPushButton *connectButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *l_nfc;
    QComboBox *nfcPatchType;
    QPushButton *sendNfcPatch;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(356, 368);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dsIP = new QLineEdit(centralWidget);
        dsIP->setObjectName(QStringLiteral("dsIP"));

        horizontalLayout_2->addWidget(dsIP);

        streamButton = new QPushButton(centralWidget);
        streamButton->setObjectName(QStringLiteral("streamButton"));

        horizontalLayout_2->addWidget(streamButton);


        verticalLayout->addLayout(horizontalLayout_2);

        line_1 = new QFrame(centralWidget);
        line_1->setObjectName(QStringLiteral("line_1"));
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        l_priFact = new QLabel(centralWidget);
        l_priFact->setObjectName(QStringLiteral("l_priFact"));

        horizontalLayout_3->addWidget(l_priFact);

        priFact = new QSpinBox(centralWidget);
        priFact->setObjectName(QStringLiteral("priFact"));
        priFact->setMaximum(30);

        horizontalLayout_3->addWidget(priFact);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        l_priMode = new QLabel(centralWidget);
        l_priMode->setObjectName(QStringLiteral("l_priMode"));

        horizontalLayout_4->addWidget(l_priMode);

        priMode = new QComboBox(centralWidget);
        priMode->addItem(QString());
        priMode->addItem(QString());
        priMode->setObjectName(QStringLiteral("priMode"));

        horizontalLayout_4->addWidget(priMode);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        l_jpeg = new QLabel(centralWidget);
        l_jpeg->setObjectName(QStringLiteral("l_jpeg"));

        horizontalLayout_5->addWidget(l_jpeg);

        jpegQuality = new QSpinBox(centralWidget);
        jpegQuality->setObjectName(QStringLiteral("jpegQuality"));
        jpegQuality->setMaximum(100);
        jpegQuality->setMinimum(10);

        horizontalLayout_5->addWidget(jpegQuality);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        l_qos = new QLabel(centralWidget);
        l_qos->setObjectName(QStringLiteral("l_qos"));

        horizontalLayout_6->addWidget(l_qos);

        qosValue = new QSpinBox(centralWidget);
        qosValue->setObjectName(QStringLiteral("qosValue"));
        qosValue->setMaximum(105);

        horizontalLayout_6->addWidget(qosValue);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        l_tScale = new QLabel(centralWidget);
        l_tScale->setObjectName(QStringLiteral("l_tScale"));

        horizontalLayout_7->addWidget(l_tScale);

        tScale = new QDoubleSpinBox(centralWidget);
        tScale->setObjectName(QStringLiteral("tScale"));
        tScale->setSingleStep(0.1);

        horizontalLayout_7->addWidget(tScale);

        l_bScale = new QLabel(centralWidget);
        l_bScale->setObjectName(QStringLiteral("l_bScale"));

        horizontalLayout_7->addWidget(l_bScale);

        bScale = new QDoubleSpinBox(centralWidget);
        bScale->setObjectName(QStringLiteral("bScale"));
        bScale->setSingleStep(0.1);

        horizontalLayout_7->addWidget(bScale);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        smooth = new QCheckBox(centralWidget);
        smooth->setObjectName(QStringLiteral("smooth"));
        smooth->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_8->addWidget(smooth);


        verticalLayout->addLayout(horizontalLayout_8);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_9->addWidget(label);

        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_9->addWidget(connectButton);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        l_nfc = new QLabel(centralWidget);
        l_nfc->setObjectName(QStringLiteral("l_nfc"));

        horizontalLayout->addWidget(l_nfc);

        nfcPatchType = new QComboBox(centralWidget);
        nfcPatchType->addItem(QString());
        nfcPatchType->addItem(QString());
        nfcPatchType->setObjectName(QStringLiteral("nfcPatchType"));

        horizontalLayout->addWidget(nfcPatchType);

        sendNfcPatch = new QPushButton(centralWidget);
        sendNfcPatch->setObjectName(QStringLiteral("sendNfcPatch"));

        horizontalLayout->addWidget(sendNfcPatch);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "cuteNTR", nullptr));
        dsIP->setText(QApplication::translate("MainWindow", "255.255.255.255", nullptr));
        streamButton->setText(QApplication::translate("MainWindow", "Stream", nullptr));
        l_priFact->setText(QApplication::translate("MainWindow", "Priority Factor", nullptr));
        priFact->setSuffix(QString());
        l_priMode->setText(QApplication::translate("MainWindow", "Screen Priority", nullptr));
        priMode->setItemText(0, QApplication::translate("MainWindow", "Bottom Screen", nullptr));
        priMode->setItemText(1, QApplication::translate("MainWindow", "Top Screen", nullptr));

        l_jpeg->setText(QApplication::translate("MainWindow", "JPEG Quality", nullptr));
        jpegQuality->setSuffix(QApplication::translate("MainWindow", "%", nullptr));
        l_qos->setText(QApplication::translate("MainWindow", "QoS Value", nullptr));
        l_tScale->setText(QApplication::translate("MainWindow", "Top Scale", nullptr));
        l_bScale->setText(QApplication::translate("MainWindow", "Bot Scale", nullptr));
        smooth->setText(QApplication::translate("MainWindow", "Bilinear Filtering", nullptr));
        label->setText(QApplication::translate("MainWindow", "Debugger", nullptr));
        connectButton->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        l_nfc->setText(QApplication::translate("MainWindow", "NFC Patch", nullptr));
        nfcPatchType->setItemText(0, QApplication::translate("MainWindow", "Universal", nullptr));
        nfcPatchType->setItemText(1, QApplication::translate("MainWindow", "Pokemon SM", nullptr));

        sendNfcPatch->setText(QApplication::translate("MainWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
