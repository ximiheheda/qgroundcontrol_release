/****************************************************************************
** Meta object code from reading C++ file 'RallyPointController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/MissionManager/RallyPointController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RallyPointController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RallyPointController_t {
    QByteArrayData data[19];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RallyPointController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RallyPointController_t qt_meta_stringdata_RallyPointController = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RallyPointController"
QT_MOC_LITERAL(1, 21, 24), // "currentRallyPointChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 10), // "rallyPoint"
QT_MOC_LITERAL(4, 58, 12), // "loadComplete"
QT_MOC_LITERAL(5, 71, 20), // "_managerLoadComplete"
QT_MOC_LITERAL(6, 92, 20), // "_managerSendComplete"
QT_MOC_LITERAL(7, 113, 5), // "error"
QT_MOC_LITERAL(8, 119, 25), // "_managerRemoveAllComplete"
QT_MOC_LITERAL(9, 145, 21), // "_setFirstPointCurrent"
QT_MOC_LITERAL(10, 167, 20), // "_updateContainsItems"
QT_MOC_LITERAL(11, 188, 8), // "addPoint"
QT_MOC_LITERAL(12, 197, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(13, 212, 5), // "point"
QT_MOC_LITERAL(14, 218, 11), // "removePoint"
QT_MOC_LITERAL(15, 230, 6), // "points"
QT_MOC_LITERAL(16, 237, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(17, 257, 9), // "editorQml"
QT_MOC_LITERAL(18, 267, 17) // "currentRallyPoint"

    },
    "RallyPointController\0currentRallyPointChanged\0"
    "\0rallyPoint\0loadComplete\0_managerLoadComplete\0"
    "_managerSendComplete\0error\0"
    "_managerRemoveAllComplete\0"
    "_setFirstPointCurrent\0_updateContainsItems\0"
    "addPoint\0QGeoCoordinate\0point\0removePoint\0"
    "points\0QmlObjectListModel*\0editorQml\0"
    "currentRallyPoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RallyPointController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   63,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   72,    2, 0x02 /* Public */,
      14,    1,   75,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QObjectStar,    3,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x00095409,
      17, QMetaType::QString, 0x00095401,
      18, QMetaType::QObjectStar, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void RallyPointController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RallyPointController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentRallyPointChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->loadComplete(); break;
        case 2: _t->_managerLoadComplete(); break;
        case 3: _t->_managerSendComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->_managerRemoveAllComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->_setFirstPointCurrent(); break;
        case 6: _t->_updateContainsItems(); break;
        case 7: _t->addPoint((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 8: _t->removePoint((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RallyPointController::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RallyPointController::currentRallyPointChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RallyPointController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RallyPointController::loadComplete)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RallyPointController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->points(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->editorQml(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->currentRallyPoint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RallyPointController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCurrentRallyPoint(*reinterpret_cast< QObject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RallyPointController::staticMetaObject = { {
    &PlanElementController::staticMetaObject,
    qt_meta_stringdata_RallyPointController.data,
    qt_meta_data_RallyPointController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RallyPointController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RallyPointController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RallyPointController.stringdata0))
        return static_cast<void*>(this);
    return PlanElementController::qt_metacast(_clname);
}

int RallyPointController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanElementController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RallyPointController::currentRallyPointChanged(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RallyPointController::loadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
