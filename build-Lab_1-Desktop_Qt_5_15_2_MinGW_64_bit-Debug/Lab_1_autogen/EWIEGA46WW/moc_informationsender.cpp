/****************************************************************************
** Meta object code from reading C++ file 'informationsender.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Lab_1/informationsender.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'informationsender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_informationSender_t {
    QByteArrayData data[10];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_informationSender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_informationSender_t qt_meta_stringdata_informationSender = {
    {
QT_MOC_LITERAL(0, 0, 17), // "informationSender"
QT_MOC_LITERAL(1, 18, 17), // "sizeChangedSignal"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "name"
QT_MOC_LITERAL(4, 42, 6), // "size_t"
QT_MOC_LITERAL(5, 49, 4), // "size"
QT_MOC_LITERAL(6, 54, 18), // "existChangedSignal"
QT_MOC_LITERAL(7, 73, 5), // "exist"
QT_MOC_LITERAL(8, 79, 11), // "sizeChanged"
QT_MOC_LITERAL(9, 91, 12) // "existChanged"

    },
    "informationSender\0sizeChangedSignal\0"
    "\0name\0size_t\0size\0existChangedSignal\0"
    "exist\0sizeChanged\0existChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_informationSender[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       6,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   44,    2, 0x0a /* Public */,
       9,    2,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    7,

       0        // eod
};

void informationSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<informationSender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChangedSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 1: _t->existChangedSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->sizeChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 3: _t->existChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (informationSender::*)(const QString , size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&informationSender::sizeChangedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (informationSender::*)(const QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&informationSender::existChangedSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject informationSender::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_informationSender.data,
    qt_meta_data_informationSender,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *informationSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *informationSender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_informationSender.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int informationSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void informationSender::sizeChangedSignal(const QString _t1, size_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void informationSender::existChangedSignal(const QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
