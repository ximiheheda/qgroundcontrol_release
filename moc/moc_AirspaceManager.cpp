/****************************************************************************
** Meta object code from reading C++ file 'AirspaceManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/Airmap/dummy/AirspaceManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AirspaceManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AirspaceManager_t {
    QByteArrayData data[16];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspaceManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspaceManager_t qt_meta_stringdata_AirspaceManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AirspaceManager"
QT_MOC_LITERAL(1, 16, 22), // "airspaceVisibleChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "setROI"
QT_MOC_LITERAL(4, 47, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(5, 62, 7), // "pointNW"
QT_MOC_LITERAL(6, 70, 7), // "pointSE"
QT_MOC_LITERAL(7, 78, 8), // "planView"
QT_MOC_LITERAL(8, 87, 5), // "reset"
QT_MOC_LITERAL(9, 93, 12), // "providerName"
QT_MOC_LITERAL(10, 106, 11), // "weatherInfo"
QT_MOC_LITERAL(11, 118, 10), // "advisories"
QT_MOC_LITERAL(12, 129, 8), // "ruleSets"
QT_MOC_LITERAL(13, 138, 9), // "airspaces"
QT_MOC_LITERAL(14, 148, 10), // "flightPlan"
QT_MOC_LITERAL(15, 159, 15) // "airspaceVisible"

    },
    "AirspaceManager\0airspaceVisibleChanged\0"
    "\0setROI\0QGeoCoordinate\0pointNW\0pointSE\0"
    "planView\0reset\0providerName\0weatherInfo\0"
    "advisories\0ruleSets\0airspaces\0flightPlan\0"
    "airspaceVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspaceManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       7,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    4,   30,    2, 0x02 /* Public */,
       3,    3,   39,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, QMetaType::Bool,    5,    6,    7,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00095401,
      10, QMetaType::QObjectStar, 0x00095401,
      11, QMetaType::QObjectStar, 0x00095401,
      12, QMetaType::QObjectStar, 0x00095401,
      13, QMetaType::QObjectStar, 0x00095401,
      14, QMetaType::QObjectStar, 0x00095401,
      15, QMetaType::Bool, 0x00095401,

       0        // eod
};

void AirspaceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AirspaceManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->airspaceVisibleChanged(); break;
        case 1: _t->setROI((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->setROI((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AirspaceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirspaceManager::airspaceVisibleChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AirspaceManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->providerName(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->weatherInfo(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->advisories(); break;
        case 3: *reinterpret_cast< QObject**>(_v) = _t->ruleSets(); break;
        case 4: *reinterpret_cast< QObject**>(_v) = _t->airspaces(); break;
        case 5: *reinterpret_cast< QObject**>(_v) = _t->flightPlan(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->airspaceVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AirspaceManager::staticMetaObject = { {
    &QGCTool::staticMetaObject,
    qt_meta_stringdata_AirspaceManager.data,
    qt_meta_data_AirspaceManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirspaceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspaceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspaceManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int AirspaceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AirspaceManager::airspaceVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
