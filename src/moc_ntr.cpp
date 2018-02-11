/****************************************************************************
** Meta object code from reading C++ file 'ntr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ntr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ntr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ntr_t {
    QByteArrayData data[38];
    char stringdata0[393];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ntr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ntr_t qt_meta_stringdata_Ntr = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Ntr"
QT_MOC_LITERAL(1, 4, 12), // "stateChanged"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "Ntr::State"
QT_MOC_LITERAL(4, 29, 12), // "bufferFilled"
QT_MOC_LITERAL(5, 42, 11), // "streamReady"
QT_MOC_LITERAL(6, 54, 11), // "connectToDS"
QT_MOC_LITERAL(7, 66, 16), // "disconnectFromDS"
QT_MOC_LITERAL(8, 83, 11), // "sendCommand"
QT_MOC_LITERAL(9, 95, 12), // "Ntr::Command"
QT_MOC_LITERAL(10, 108, 7), // "command"
QT_MOC_LITERAL(11, 116, 17), // "QVector<uint32_t>"
QT_MOC_LITERAL(12, 134, 4), // "args"
QT_MOC_LITERAL(13, 139, 8), // "uint32_t"
QT_MOC_LITERAL(14, 148, 3), // "len"
QT_MOC_LITERAL(15, 152, 4), // "data"
QT_MOC_LITERAL(16, 157, 13), // "sendHeartbeat"
QT_MOC_LITERAL(17, 171, 10), // "readStream"
QT_MOC_LITERAL(18, 182, 22), // "handleSockStateChanged"
QT_MOC_LITERAL(19, 205, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(20, 234, 5), // "state"
QT_MOC_LITERAL(21, 240, 7), // "Command"
QT_MOC_LITERAL(22, 248, 5), // "Empty"
QT_MOC_LITERAL(23, 254, 9), // "WriteSave"
QT_MOC_LITERAL(24, 264, 5), // "Hello"
QT_MOC_LITERAL(25, 270, 6), // "Reload"
QT_MOC_LITERAL(26, 277, 7), // "PidList"
QT_MOC_LITERAL(27, 285, 10), // "AttachProc"
QT_MOC_LITERAL(28, 296, 10), // "ThreadList"
QT_MOC_LITERAL(29, 307, 9), // "MemLayout"
QT_MOC_LITERAL(30, 317, 7), // "ReadMem"
QT_MOC_LITERAL(31, 325, 8), // "WriteMem"
QT_MOC_LITERAL(32, 334, 6), // "Resume"
QT_MOC_LITERAL(33, 341, 11), // "QueryHandle"
QT_MOC_LITERAL(34, 353, 10), // "RemotePlay"
QT_MOC_LITERAL(35, 364, 5), // "State"
QT_MOC_LITERAL(36, 370, 12), // "Disconnected"
QT_MOC_LITERAL(37, 383, 9) // "Connected"

    },
    "Ntr\0stateChanged\0\0Ntr::State\0bufferFilled\0"
    "streamReady\0connectToDS\0disconnectFromDS\0"
    "sendCommand\0Ntr::Command\0command\0"
    "QVector<uint32_t>\0args\0uint32_t\0len\0"
    "data\0sendHeartbeat\0readStream\0"
    "handleSockStateChanged\0"
    "QAbstractSocket::SocketState\0state\0"
    "Command\0Empty\0WriteSave\0Hello\0Reload\0"
    "PidList\0AttachProc\0ThreadList\0MemLayout\0"
    "ReadMem\0WriteMem\0Resume\0QueryHandle\0"
    "RemotePlay\0State\0Disconnected\0Connected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ntr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       2,  112, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   81,    2, 0x0a /* Public */,
       7,    0,   82,    2, 0x0a /* Public */,
       8,    4,   83,    2, 0x0a /* Public */,
       8,    3,   92,    2, 0x2a /* Public | MethodCloned */,
       8,    2,   99,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  104,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13, QMetaType::QByteArray,   10,   12,   14,   15,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13,   10,   12,   14,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,

 // enums: name, flags, count, data
      21, 0x0,   13,  120,
      35, 0x0,    2,  146,

 // enum data: key, value
      22, uint(Ntr::Empty),
      23, uint(Ntr::WriteSave),
      24, uint(Ntr::Hello),
      25, uint(Ntr::Reload),
      26, uint(Ntr::PidList),
      27, uint(Ntr::AttachProc),
      28, uint(Ntr::ThreadList),
      29, uint(Ntr::MemLayout),
      30, uint(Ntr::ReadMem),
      31, uint(Ntr::WriteMem),
      32, uint(Ntr::Resume),
      33, uint(Ntr::QueryHandle),
      34, uint(Ntr::RemotePlay),
      36, uint(Ntr::Disconnected),
      37, uint(Ntr::Connected),

       0        // eod
};

void Ntr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ntr *_t = static_cast<Ntr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< Ntr::State(*)>(_a[1]))); break;
        case 1: _t->bufferFilled((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->streamReady(); break;
        case 3: _t->connectToDS(); break;
        case 4: _t->disconnectFromDS(); break;
        case 5: _t->sendCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1])),(*reinterpret_cast< QVector<uint32_t>(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 6: _t->sendCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1])),(*reinterpret_cast< QVector<uint32_t>(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3]))); break;
        case 7: _t->sendCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1])),(*reinterpret_cast< QVector<uint32_t>(*)>(_a[2]))); break;
        case 8: _t->sendCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1]))); break;
        case 9: _t->sendHeartbeat(); break;
        case 10: _t->readStream(); break;
        case 11: _t->handleSockStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Ntr::*_t)(Ntr::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ntr::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Ntr::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ntr::bufferFilled)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Ntr::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ntr::streamReady)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Ntr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ntr.data,
      qt_meta_data_Ntr,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Ntr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ntr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ntr.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Ntr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Ntr::stateChanged(Ntr::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Ntr::bufferFilled(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Ntr::streamReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
