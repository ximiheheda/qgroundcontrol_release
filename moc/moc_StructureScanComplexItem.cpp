/****************************************************************************
** Meta object code from reading C++ file 'StructureScanComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/MissionManager/StructureScanComplexItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StructureScanComplexItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StructureScanComplexItem_t {
    QByteArrayData data[30];
    char stringdata0[476];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StructureScanComplexItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StructureScanComplexItem_t qt_meta_stringdata_StructureScanComplexItem = {
    {
QT_MOC_LITERAL(0, 0, 24), // "StructureScanComplexItem"
QT_MOC_LITERAL(1, 25, 18), // "cameraShotsChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "cameraShots"
QT_MOC_LITERAL(4, 57, 23), // "timeBetweenShotsChanged"
QT_MOC_LITERAL(5, 81, 23), // "altitudeRelativeChanged"
QT_MOC_LITERAL(6, 105, 16), // "altitudeRelative"
QT_MOC_LITERAL(7, 122, 9), // "_setDirty"
QT_MOC_LITERAL(8, 132, 20), // "_polygonDirtyChanged"
QT_MOC_LITERAL(9, 153, 5), // "dirty"
QT_MOC_LITERAL(10, 159, 18), // "_flightPathChanged"
QT_MOC_LITERAL(11, 178, 14), // "_clearInternal"
QT_MOC_LITERAL(12, 193, 26), // "_updateCoordinateAltitudes"
QT_MOC_LITERAL(13, 220, 21), // "_rebuildFlightPolygon"
QT_MOC_LITERAL(14, 242, 18), // "_recalcCameraShots"
QT_MOC_LITERAL(15, 261, 16), // "_recalcLayerInfo"
QT_MOC_LITERAL(16, 278, 25), // "_updateLastSequenceNumber"
QT_MOC_LITERAL(17, 304, 18), // "_updateGimbalPitch"
QT_MOC_LITERAL(18, 323, 16), // "rotateEntryPoint"
QT_MOC_LITERAL(19, 340, 10), // "cameraCalc"
QT_MOC_LITERAL(20, 351, 11), // "CameraCalc*"
QT_MOC_LITERAL(21, 363, 8), // "altitude"
QT_MOC_LITERAL(22, 372, 5), // "Fact*"
QT_MOC_LITERAL(23, 378, 15), // "structureHeight"
QT_MOC_LITERAL(24, 394, 6), // "layers"
QT_MOC_LITERAL(25, 401, 11), // "gimbalPitch"
QT_MOC_LITERAL(26, 413, 16), // "timeBetweenShots"
QT_MOC_LITERAL(27, 430, 16), // "structurePolygon"
QT_MOC_LITERAL(28, 447, 14), // "QGCMapPolygon*"
QT_MOC_LITERAL(29, 462, 13) // "flightPolygon"

    },
    "StructureScanComplexItem\0cameraShotsChanged\0"
    "\0cameraShots\0timeBetweenShotsChanged\0"
    "altitudeRelativeChanged\0altitudeRelative\0"
    "_setDirty\0_polygonDirtyChanged\0dirty\0"
    "_flightPathChanged\0_clearInternal\0"
    "_updateCoordinateAltitudes\0"
    "_rebuildFlightPolygon\0_recalcCameraShots\0"
    "_recalcLayerInfo\0_updateLastSequenceNumber\0"
    "_updateGimbalPitch\0rotateEntryPoint\0"
    "cameraCalc\0CameraCalc*\0altitude\0Fact*\0"
    "structureHeight\0layers\0gimbalPitch\0"
    "timeBetweenShots\0structurePolygon\0"
    "QGCMapPolygon*\0flightPolygon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StructureScanComplexItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      10,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,
       5,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   91,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
      10,    0,   95,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      18,    0,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      19, 0x80000000 | 20, 0x00095409,
      21, 0x80000000 | 22, 0x00095409,
      23, 0x80000000 | 22, 0x00095409,
      24, 0x80000000 | 22, 0x00095409,
      25, 0x80000000 | 22, 0x00095409,
       6, QMetaType::Bool, 0x00495103,
       3, QMetaType::Int, 0x00495001,
      26, QMetaType::Double, 0x00495001,
      27, 0x80000000 | 28, 0x00095409,
      29, 0x80000000 | 28, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       2,
       0,
       1,
       0,
       0,

       0        // eod
};

void StructureScanComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StructureScanComplexItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cameraShotsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->timeBetweenShotsChanged(); break;
        case 2: _t->altitudeRelativeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->_setDirty(); break;
        case 4: _t->_polygonDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->_flightPathChanged(); break;
        case 6: _t->_clearInternal(); break;
        case 7: _t->_updateCoordinateAltitudes(); break;
        case 8: _t->_rebuildFlightPolygon(); break;
        case 9: _t->_recalcCameraShots(); break;
        case 10: _t->_recalcLayerInfo(); break;
        case 11: _t->_updateLastSequenceNumber(); break;
        case 12: _t->_updateGimbalPitch(); break;
        case 13: _t->rotateEntryPoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StructureScanComplexItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StructureScanComplexItem::cameraShotsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StructureScanComplexItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StructureScanComplexItem::timeBetweenShotsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StructureScanComplexItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StructureScanComplexItem::altitudeRelativeChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CameraCalc* >(); break;
        case 4:
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 9:
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMapPolygon* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StructureScanComplexItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CameraCalc**>(_v) = _t->cameraCalc(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->altitude(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->structureHeight(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->layers(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->gimbalPitch(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->altitudeRelative(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->cameraShots(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->timeBetweenShots(); break;
        case 8: *reinterpret_cast< QGCMapPolygon**>(_v) = _t->structurePolygon(); break;
        case 9: *reinterpret_cast< QGCMapPolygon**>(_v) = _t->flightPolygon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StructureScanComplexItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setAltitudeRelative(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject StructureScanComplexItem::staticMetaObject = { {
    &ComplexMissionItem::staticMetaObject,
    qt_meta_stringdata_StructureScanComplexItem.data,
    qt_meta_data_StructureScanComplexItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StructureScanComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StructureScanComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StructureScanComplexItem.stringdata0))
        return static_cast<void*>(this);
    return ComplexMissionItem::qt_metacast(_clname);
}

int StructureScanComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComplexMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StructureScanComplexItem::cameraShotsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StructureScanComplexItem::timeBetweenShotsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void StructureScanComplexItem::altitudeRelativeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
