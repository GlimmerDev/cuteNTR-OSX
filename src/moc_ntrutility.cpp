/****************************************************************************
** Meta object code from reading C++ file 'ntrutility.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ntrutility.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ntrutility.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NtrUtility_t {
    QByteArrayData data[14];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NtrUtility_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NtrUtility_t qt_meta_stringdata_NtrUtility = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NtrUtility"
QT_MOC_LITERAL(1, 11, 10), // "ntrCommand"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "Ntr::Command"
QT_MOC_LITERAL(4, 36, 1), // "c"
QT_MOC_LITERAL(5, 38, 17), // "QVector<uint32_t>"
QT_MOC_LITERAL(6, 56, 1), // "a"
QT_MOC_LITERAL(7, 58, 8), // "uint32_t"
QT_MOC_LITERAL(8, 67, 1), // "l"
QT_MOC_LITERAL(9, 69, 1), // "d"
QT_MOC_LITERAL(10, 71, 13), // "writeNfcPatch"
QT_MOC_LITERAL(11, 85, 4), // "type"
QT_MOC_LITERAL(12, 90, 10), // "handleInfo"
QT_MOC_LITERAL(13, 101, 4) // "info"

    },
    "NtrUtility\0ntrCommand\0\0Ntr::Command\0"
    "c\0QVector<uint32_t>\0a\0uint32_t\0l\0d\0"
    "writeNfcPatch\0type\0handleInfo\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NtrUtility[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   44,    2, 0x06 /* Public */,
       1,    3,   53,    2, 0x26 /* Public | MethodCloned */,
       1,    2,   60,    2, 0x26 /* Public | MethodCloned */,
       1,    1,   65,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   68,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, QMetaType::QByteArray,    4,    6,    8,    9,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QByteArray,   13,

       0        // eod
};

void NtrUtility::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NtrUtility *_t = static_cast<NtrUtility *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ntrCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1])),(*reinterpret_cast< QVector<uint32_t>(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 1: _t->ntrCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1])),(*reinterpret_cast< QVector<uint32_t>(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3]))); break;
        case 2: _t->ntrCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1])),(*reinterpret_cast< QVector<uint32_t>(*)>(_a[2]))); break;
        case 3: _t->ntrCommand((*reinterpret_cast< Ntr::Command(*)>(_a[1]))); break;
        case 4: _t->writeNfcPatch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->handleInfo((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NtrUtility::*_t)(Ntr::Command , QVector<uint32_t> , uint32_t , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NtrUtility::ntrCommand)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject NtrUtility::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NtrUtility.data,
      qt_meta_data_NtrUtility,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NtrUtility::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NtrUtility::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NtrUtility.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NtrUtility::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NtrUtility::ntrCommand(Ntr::Command _t1, QVector<uint32_t> _t2, uint32_t _t3, QByteArray _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
