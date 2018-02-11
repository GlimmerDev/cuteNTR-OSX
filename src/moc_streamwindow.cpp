/****************************************************************************
** Meta object code from reading C++ file 'streamwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "streamwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StreamWindow_t {
    QByteArrayData data[10];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamWindow_t qt_meta_stringdata_StreamWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "StreamWindow"
QT_MOC_LITERAL(1, 13, 11), // "renderLater"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "renderNow"
QT_MOC_LITERAL(4, 36, 12), // "renderPixmap"
QT_MOC_LITERAL(5, 49, 6), // "pixmap"
QT_MOC_LITERAL(6, 56, 14), // "updateSettings"
QT_MOC_LITERAL(7, 71, 24), // "handleStreamStateChanged"
QT_MOC_LITERAL(8, 96, 19), // "StreamWorker::State"
QT_MOC_LITERAL(9, 116, 5) // "state"

    },
    "StreamWindow\0renderLater\0\0renderNow\0"
    "renderPixmap\0pixmap\0updateSettings\0"
    "handleStreamStateChanged\0StreamWorker::State\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void StreamWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StreamWindow *_t = static_cast<StreamWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->renderLater(); break;
        case 1: _t->renderNow(); break;
        case 2: _t->renderPixmap((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 3: _t->updateSettings(); break;
        case 4: _t->handleStreamStateChanged((*reinterpret_cast< StreamWorker::State(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject StreamWindow::staticMetaObject = {
    { &QWindow::staticMetaObject, qt_meta_stringdata_StreamWindow.data,
      qt_meta_data_StreamWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StreamWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StreamWindow.stringdata0))
        return static_cast<void*>(this);
    return QWindow::qt_metacast(_clname);
}

int StreamWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
