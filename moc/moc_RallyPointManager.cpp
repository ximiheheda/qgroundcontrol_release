/****************************************************************************
** Meta object code from reading C++ file 'RallyPointManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/MissionManager/RallyPointManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RallyPointManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RallyPointManager_t {
    QByteArrayData data[13];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RallyPointManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RallyPointManager_t qt_meta_stringdata_RallyPointManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "RallyPointManager"
QT_MOC_LITERAL(1, 18, 12), // "loadComplete"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "inProgressChanged"
QT_MOC_LITERAL(4, 50, 10), // "inProgress"
QT_MOC_LITERAL(5, 61, 5), // "error"
QT_MOC_LITERAL(6, 67, 9), // "errorCode"
QT_MOC_LITERAL(7, 77, 8), // "errorMsg"
QT_MOC_LITERAL(8, 86, 17), // "removeAllComplete"
QT_MOC_LITERAL(9, 104, 12), // "sendComplete"
QT_MOC_LITERAL(10, 117, 13), // "_sendComplete"
QT_MOC_LITERAL(11, 131, 24), // "_planManagerLoadComplete"
QT_MOC_LITERAL(12, 156, 18) // "removeAllRequested"

    },
    "RallyPointManager\0loadComplete\0\0"
    "inProgressChanged\0inProgress\0error\0"
    "errorCode\0errorMsg\0removeAllComplete\0"
    "sendComplete\0_sendComplete\0"
    "_planManagerLoadComplete\0removeAllRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RallyPointManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    2,   53,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,
       9,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   64,    2, 0x08 /* Private */,
      11,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void RallyPointManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RallyPointManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadComplete(); break;
        case 1: _t->inProgressChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->removeAllComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sendComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->_sendComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->_planManagerLoadComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RallyPointManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RallyPointManager::loadComplete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RallyPointManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RallyPointManager::inProgressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RallyPointManager::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RallyPointManager::error)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RallyPointManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RallyPointManager::removeAllComplete)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RallyPointManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RallyPointManager::sendComplete)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RallyPointManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RallyPointManager.data,
    qt_meta_data_RallyPointManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RallyPointManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RallyPointManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RallyPointManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RallyPointManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void RallyPointManager::loadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RallyPointManager::inProgressChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RallyPointManager::error(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RallyPointManager::removeAllComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RallyPointManager::sendComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
