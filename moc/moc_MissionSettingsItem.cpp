/****************************************************************************
** Meta object code from reading C++ file 'MissionSettingsItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/MissionManager/MissionSettingsItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionSettingsItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionSettingsItem_t {
    QByteArrayData data[18];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionSettingsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionSettingsItem_t qt_meta_stringdata_MissionSettingsItem = {
    {
QT_MOC_LITERAL(0, 0, 19), // "MissionSettingsItem"
QT_MOC_LITERAL(1, 20, 32), // "specifyMissionFlightSpeedChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 25), // "specifyMissionFlightSpeed"
QT_MOC_LITERAL(4, 80, 20), // "missionEndRTLChanged"
QT_MOC_LITERAL(5, 101, 13), // "missionEndRTL"
QT_MOC_LITERAL(6, 115, 36), // "_setDirtyAndUpdateLastSequenc..."
QT_MOC_LITERAL(7, 152, 9), // "_setDirty"
QT_MOC_LITERAL(8, 162, 20), // "_sectionDirtyChanged"
QT_MOC_LITERAL(9, 183, 5), // "dirty"
QT_MOC_LITERAL(10, 189, 27), // "_updateAltitudeInCoordinate"
QT_MOC_LITERAL(11, 217, 5), // "value"
QT_MOC_LITERAL(12, 223, 22), // "_setHomeAltFromTerrain"
QT_MOC_LITERAL(13, 246, 15), // "terrainAltitude"
QT_MOC_LITERAL(14, 262, 27), // "plannedHomePositionAltitude"
QT_MOC_LITERAL(15, 290, 5), // "Fact*"
QT_MOC_LITERAL(16, 296, 13), // "cameraSection"
QT_MOC_LITERAL(17, 310, 12) // "speedSection"

    },
    "MissionSettingsItem\0"
    "specifyMissionFlightSpeedChanged\0\0"
    "specifyMissionFlightSpeed\0"
    "missionEndRTLChanged\0missionEndRTL\0"
    "_setDirtyAndUpdateLastSequenceNumber\0"
    "_setDirty\0_sectionDirtyChanged\0dirty\0"
    "_updateAltitudeInCoordinate\0value\0"
    "_setHomeAltFromTerrain\0terrainAltitude\0"
    "plannedHomePositionAltitude\0Fact*\0"
    "cameraSection\0speedSection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionSettingsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
      10,    1,   60,    2, 0x08 /* Private */,
      12,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QVariant,   11,
    QMetaType::Void, QMetaType::Double,   13,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x00095409,
       5, QMetaType::Bool, 0x00495103,
      16, QMetaType::QObjectStar, 0x00095401,
      17, QMetaType::QObjectStar, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,

       0        // eod
};

void MissionSettingsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MissionSettingsItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->specifyMissionFlightSpeedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->missionEndRTLChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->_setDirtyAndUpdateLastSequenceNumber(); break;
        case 3: _t->_setDirty(); break;
        case 4: _t->_sectionDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->_updateAltitudeInCoordinate((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->_setHomeAltFromTerrain((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MissionSettingsItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionSettingsItem::specifyMissionFlightSpeedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MissionSettingsItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionSettingsItem::missionEndRTLChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MissionSettingsItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->plannedHomePositionAltitude(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->missionEndRTL(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->cameraSection(); break;
        case 3: *reinterpret_cast< QObject**>(_v) = _t->speedSection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MissionSettingsItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setMissionEndRTL(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MissionSettingsItem::staticMetaObject = { {
    &ComplexMissionItem::staticMetaObject,
    qt_meta_stringdata_MissionSettingsItem.data,
    qt_meta_data_MissionSettingsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MissionSettingsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionSettingsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionSettingsItem.stringdata0))
        return static_cast<void*>(this);
    return ComplexMissionItem::qt_metacast(_clname);
}

int MissionSettingsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComplexMissionItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MissionSettingsItem::specifyMissionFlightSpeedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MissionSettingsItem::missionEndRTLChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
