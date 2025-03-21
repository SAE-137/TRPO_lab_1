/****************************************************************************
** Meta object code from reading C++ file 'consoleinteraction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Lab_1/consoleinteraction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consoleinteraction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_consoleInteraction_t {
    QByteArrayData data[8];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_consoleInteraction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_consoleInteraction_t qt_meta_stringdata_consoleInteraction = {
    {
QT_MOC_LITERAL(0, 0, 18), // "consoleInteraction"
QT_MOC_LITERAL(1, 19, 10), // "sizeChange"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "name"
QT_MOC_LITERAL(4, 36, 6), // "size_t"
QT_MOC_LITERAL(5, 43, 4), // "size"
QT_MOC_LITERAL(6, 48, 11), // "existChange"
QT_MOC_LITERAL(7, 60, 5) // "exist"

    },
    "consoleInteraction\0sizeChange\0\0name\0"
    "size_t\0size\0existChange\0exist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_consoleInteraction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       6,    2,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    7,

       0        // eod
};

void consoleInteraction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<consoleInteraction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChange((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 1: _t->existChange((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject consoleInteraction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_consoleInteraction.data,
    qt_meta_data_consoleInteraction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *consoleInteraction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *consoleInteraction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_consoleInteraction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int consoleInteraction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
