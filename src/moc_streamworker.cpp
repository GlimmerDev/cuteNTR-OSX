/****************************************************************************
** Meta object code from reading C++ file 'streamworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "streamworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StreamWorker_t {
    QByteArrayData data[13];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamWorker_t qt_meta_stringdata_StreamWorker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "StreamWorker"
QT_MOC_LITERAL(1, 13, 13), // "topImageReady"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "img"
QT_MOC_LITERAL(4, 32, 13), // "botImageReady"
QT_MOC_LITERAL(5, 46, 12), // "stateChanged"
QT_MOC_LITERAL(6, 59, 19), // "StreamWorker::State"
QT_MOC_LITERAL(7, 79, 12), // "streamFailed"
QT_MOC_LITERAL(8, 92, 6), // "stream"
QT_MOC_LITERAL(9, 99, 10), // "stopStream"
QT_MOC_LITERAL(10, 110, 5), // "State"
QT_MOC_LITERAL(11, 116, 12), // "Disconnected"
QT_MOC_LITERAL(12, 129, 9) // "Connected"

    },
    "StreamWorker\0topImageReady\0\0img\0"
    "botImageReady\0stateChanged\0"
    "StreamWorker::State\0streamFailed\0"
    "stream\0stopStream\0State\0Disconnected\0"
    "Connected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       7,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   54,    2, 0x0a /* Public */,
       9,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,
    QMetaType::Void, QMetaType::QPixmap,    3,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      10, 0x0,    2,   60,

 // enum data: key, value
      11, uint(StreamWorker::Disconnected),
      12, uint(StreamWorker::Connected),

       0        // eod
};

void StreamWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StreamWorker *_t = static_cast<StreamWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->topImageReady((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 1: _t->botImageReady((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< StreamWorker::State(*)>(_a[1]))); break;
        case 3: _t->streamFailed(); break;
        case 4: _t->stream(); break;
        case 5: _t->stopStream(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (StreamWorker::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamWorker::topImageReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StreamWorker::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamWorker::botImageReady)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StreamWorker::*_t)(StreamWorker::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamWorker::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (StreamWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamWorker::streamFailed)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject StreamWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StreamWorker.data,
      qt_meta_data_StreamWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StreamWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StreamWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StreamWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void StreamWorker::topImageReady(QPixmap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StreamWorker::botImageReady(QPixmap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StreamWorker::stateChanged(StreamWorker::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StreamWorker::streamFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
