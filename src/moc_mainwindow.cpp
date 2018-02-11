/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "connectToDS"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "disconnectFromDS"
QT_MOC_LITERAL(4, 41, 10), // "ntrCommand"
QT_MOC_LITERAL(5, 52, 12), // "Ntr::Command"
QT_MOC_LITERAL(6, 65, 17), // "QVector<uint32_t>"
QT_MOC_LITERAL(7, 83, 1), // "a"
QT_MOC_LITERAL(8, 85, 8), // "uint32_t"
QT_MOC_LITERAL(9, 94, 10), // "stopStream"
QT_MOC_LITERAL(10, 105, 12), // "sendNfcPatch"
QT_MOC_LITERAL(11, 118, 18), // "topSettingsChanged"
QT_MOC_LITERAL(12, 137, 18), // "botSettingsChanged"
QT_MOC_LITERAL(13, 156, 21), // "handleNtrStateChanged"
QT_MOC_LITERAL(14, 178, 10), // "Ntr::State"
QT_MOC_LITERAL(15, 189, 5), // "state"
QT_MOC_LITERAL(16, 195, 24), // "handleStreamStateChanged"
QT_MOC_LITERAL(17, 220, 19), // "StreamWorker::State"
QT_MOC_LITERAL(18, 240, 24), // "on_connectButton_clicked"
QT_MOC_LITERAL(19, 265, 23), // "on_streamButton_clicked"
QT_MOC_LITERAL(20, 289, 21), // "on_dsIP_returnPressed"
QT_MOC_LITERAL(21, 311, 22), // "on_tScale_valueChanged"
QT_MOC_LITERAL(22, 334, 5), // "scale"
QT_MOC_LITERAL(23, 340, 22), // "on_bScale_valueChanged"
QT_MOC_LITERAL(24, 363, 22), // "on_smooth_stateChanged"
QT_MOC_LITERAL(25, 386, 23) // "on_sendNfcPatch_clicked"

    },
    "MainWindow\0connectToDS\0\0disconnectFromDS\0"
    "ntrCommand\0Ntr::Command\0QVector<uint32_t>\0"
    "a\0uint32_t\0stopStream\0sendNfcPatch\0"
    "topSettingsChanged\0botSettingsChanged\0"
    "handleNtrStateChanged\0Ntr::State\0state\0"
    "handleStreamStateChanged\0StreamWorker::State\0"
    "on_connectButton_clicked\0"
    "on_streamButton_clicked\0on_dsIP_returnPressed\0"
    "on_tScale_valueChanged\0scale\0"
    "on_bScale_valueChanged\0on_smooth_stateChanged\0"
    "on_sendNfcPatch_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    4,  111,    2, 0x06 /* Public */,
       4,    3,  120,    2, 0x26 /* Public | MethodCloned */,
       4,    2,  127,    2, 0x26 /* Public | MethodCloned */,
       4,    1,  132,    2, 0x26 /* Public | MethodCloned */,
       9,    0,  135,    2, 0x06 /* Public */,
      10,    1,  136,    2, 0x06 /* Public */,
      11,    0,  139,    2, 0x06 /* Public */,
      12,    0,  140,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  141,    2, 0x0a /* Public */,
      16,    1,  144,    2, 0x0a /* Public */,
      18,    0,  147,    2, 0x08 /* Private */,
      19,    0,  148,    2, 0x08 /* Private */,
      20,    0,  149,    2, 0x08 /* Private */,
      21,    1,  150,    2, 0x08 /* Private */,
      23,    1,  153,    2, 0x08 /* Private */,
      24,    1,  156,    2, 0x08 /* Private */,
      25,    0,  159,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6, 0x80000000 | 8, QMetaType::QByteArray,    2,    7,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6, 0x80000000 | 8,    2,    7,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6,    2,    7,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectToDS(); break;
        case 1: _t->disconnectFromDS(); break;
        case 2: _t->ntrCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1])),(*reinterpret_cast< QVector<uint32_t>(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 3: _t->ntrCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1])),(*reinterpret_cast< QVector<uint32_t>(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3]))); break;
        case 4: _t->ntrCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1])),(*reinterpret_cast< QVector<uint32_t>(*)>(_a[2]))); break;
        case 5: _t->ntrCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1]))); break;
        case 6: _t->stopStream(); break;
        case 7: _t->sendNfcPatch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->topSettingsChanged(); break;
        case 9: _t->botSettingsChanged(); break;
        case 10: _t->handleNtrStateChanged((*reinterpret_cast< Ntr::State(*)>(_a[1]))); break;
        case 11: _t->handleStreamStateChanged((*reinterpret_cast< StreamWorker::State(*)>(_a[1]))); break;
        case 12: _t->on_connectButton_clicked(); break;
        case 13: _t->on_streamButton_clicked(); break;
        case 14: _t->on_dsIP_returnPressed(); break;
        case 15: _t->on_tScale_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->on_bScale_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->on_smooth_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_sendNfcPatch_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::connectToDS)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::disconnectFromDS)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(Ntr::Command , QVector<uint32_t> , uint32_t , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::ntrCommand)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stopStream)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendNfcPatch)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::topSettingsChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::botSettingsChanged)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::connectToDS()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::disconnectFromDS()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::ntrCommand(Ntr::Command _t1, QVector<uint32_t> _t2, uint32_t _t3, QByteArray _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 6
void MainWindow::stopStream()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainWindow::sendNfcPatch(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::topSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainWindow::botSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
