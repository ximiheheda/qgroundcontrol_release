/****************************************************************************
** Meta object code from reading C++ file 'SimpleMissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/MissionManager/SimpleMissionItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimpleMissionItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimpleMissionItem_t {
    QByteArrayData data[42];
    char stringdata0[741];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimpleMissionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimpleMissionItem_t qt_meta_stringdata_SimpleMissionItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SimpleMissionItem"
QT_MOC_LITERAL(1, 18, 14), // "commandChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "command"
QT_MOC_LITERAL(4, 42, 26), // "friendlyEditAllowedChanged"
QT_MOC_LITERAL(5, 69, 19), // "friendlyEditAllowed"
QT_MOC_LITERAL(6, 89, 21), // "headingDegreesChanged"
QT_MOC_LITERAL(7, 111, 7), // "heading"
QT_MOC_LITERAL(8, 119, 14), // "rawEditChanged"
QT_MOC_LITERAL(9, 134, 7), // "rawEdit"
QT_MOC_LITERAL(10, 142, 20), // "cameraSectionChanged"
QT_MOC_LITERAL(11, 163, 13), // "cameraSection"
QT_MOC_LITERAL(12, 177, 19), // "speedSectionChanged"
QT_MOC_LITERAL(13, 197, 19), // "altitudeModeChanged"
QT_MOC_LITERAL(14, 217, 27), // "supportsTerrainFrameChanged"
QT_MOC_LITERAL(15, 245, 9), // "_setDirty"
QT_MOC_LITERAL(16, 255, 20), // "_sectionDirtyChanged"
QT_MOC_LITERAL(17, 276, 5), // "dirty"
QT_MOC_LITERAL(18, 282, 19), // "_sendCommandChanged"
QT_MOC_LITERAL(19, 302, 22), // "_sendCoordinateChanged"
QT_MOC_LITERAL(20, 325, 31), // "_sendFriendlyEditAllowedChanged"
QT_MOC_LITERAL(21, 357, 16), // "_altitudeChanged"
QT_MOC_LITERAL(22, 374, 20), // "_altitudeModeChanged"
QT_MOC_LITERAL(23, 395, 18), // "_terrainAltChanged"
QT_MOC_LITERAL(24, 414, 25), // "_updateLastSequenceNumber"
QT_MOC_LITERAL(25, 440, 13), // "_rebuildFacts"
QT_MOC_LITERAL(26, 454, 22), // "_rebuildTextFieldFacts"
QT_MOC_LITERAL(27, 477, 35), // "_possibleAdditionalTimeDelayC..."
QT_MOC_LITERAL(28, 513, 22), // "_setDefaultsForCommand"
QT_MOC_LITERAL(29, 536, 8), // "category"
QT_MOC_LITERAL(30, 545, 17), // "specifiesAltitude"
QT_MOC_LITERAL(31, 563, 8), // "altitude"
QT_MOC_LITERAL(32, 572, 5), // "Fact*"
QT_MOC_LITERAL(33, 578, 12), // "altitudeMode"
QT_MOC_LITERAL(34, 591, 37), // "QGroundControlQmlGlobal::Alti..."
QT_MOC_LITERAL(35, 629, 19), // "amslAltAboveTerrain"
QT_MOC_LITERAL(36, 649, 20), // "supportsTerrainFrame"
QT_MOC_LITERAL(37, 670, 12), // "speedSection"
QT_MOC_LITERAL(38, 683, 13), // "comboboxFacts"
QT_MOC_LITERAL(39, 697, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(40, 717, 14), // "textFieldFacts"
QT_MOC_LITERAL(41, 732, 8) // "nanFacts"

    },
    "SimpleMissionItem\0commandChanged\0\0"
    "command\0friendlyEditAllowedChanged\0"
    "friendlyEditAllowed\0headingDegreesChanged\0"
    "heading\0rawEditChanged\0rawEdit\0"
    "cameraSectionChanged\0cameraSection\0"
    "speedSectionChanged\0altitudeModeChanged\0"
    "supportsTerrainFrameChanged\0_setDirty\0"
    "_sectionDirtyChanged\0dirty\0"
    "_sendCommandChanged\0_sendCoordinateChanged\0"
    "_sendFriendlyEditAllowedChanged\0"
    "_altitudeChanged\0_altitudeModeChanged\0"
    "_terrainAltChanged\0_updateLastSequenceNumber\0"
    "_rebuildFacts\0_rebuildTextFieldFacts\0"
    "_possibleAdditionalTimeDelayChanged\0"
    "_setDefaultsForCommand\0category\0"
    "specifiesAltitude\0altitude\0Fact*\0"
    "altitudeMode\0QGroundControlQmlGlobal::AltitudeMode\0"
    "amslAltAboveTerrain\0supportsTerrainFrame\0"
    "speedSection\0comboboxFacts\0"
    "QmlObjectListModel*\0textFieldFacts\0"
    "nanFacts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimpleMissionItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
      14,  154, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       6,    1,  125,    2, 0x06 /* Public */,
       8,    1,  128,    2, 0x06 /* Public */,
      10,    1,  131,    2, 0x06 /* Public */,
      12,    1,  134,    2, 0x06 /* Public */,
      13,    0,  137,    2, 0x06 /* Public */,
      14,    0,  138,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  139,    2, 0x08 /* Private */,
      16,    1,  140,    2, 0x08 /* Private */,
      18,    0,  143,    2, 0x08 /* Private */,
      19,    0,  144,    2, 0x08 /* Private */,
      20,    0,  145,    2, 0x08 /* Private */,
      21,    0,  146,    2, 0x08 /* Private */,
      22,    0,  147,    2, 0x08 /* Private */,
      23,    0,  148,    2, 0x08 /* Private */,
      24,    0,  149,    2, 0x08 /* Private */,
      25,    0,  150,    2, 0x08 /* Private */,
      26,    0,  151,    2, 0x08 /* Private */,
      27,    0,  152,    2, 0x08 /* Private */,
      28,    0,  153,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QObjectStar,   11,
    QMetaType::Void, QMetaType::QObjectStar,   11,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      29, QMetaType::QString, 0x00495001,
       5, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495103,
      30, QMetaType::Bool, 0x00495001,
      31, 0x80000000 | 32, 0x00095409,
      33, 0x80000000 | 34, 0x0049510b,
      35, 0x80000000 | 32, 0x00095409,
       3, QMetaType::Int, 0x00495103,
      36, QMetaType::Bool, 0x00495001,
      37, QMetaType::QObjectStar, 0x00495001,
      11, QMetaType::QObjectStar, 0x00495001,
      38, 0x80000000 | 39, 0x00095409,
      40, 0x80000000 | 39, 0x00095409,
      41, 0x80000000 | 39, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       3,
       0,
       0,
       6,
       0,
       0,
       7,
       5,
       4,
       0,
       0,
       0,

       0        // eod
};

void SimpleMissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimpleMissionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commandChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->friendlyEditAllowedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->headingDegreesChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->rawEditChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->cameraSectionChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->speedSectionChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->altitudeModeChanged(); break;
        case 7: _t->supportsTerrainFrameChanged(); break;
        case 8: _t->_setDirty(); break;
        case 9: _t->_sectionDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->_sendCommandChanged(); break;
        case 11: _t->_sendCoordinateChanged(); break;
        case 12: _t->_sendFriendlyEditAllowedChanged(); break;
        case 13: _t->_altitudeChanged(); break;
        case 14: _t->_altitudeModeChanged(); break;
        case 15: _t->_terrainAltChanged(); break;
        case 16: _t->_updateLastSequenceNumber(); break;
        case 17: _t->_rebuildFacts(); break;
        case 18: _t->_rebuildTextFieldFacts(); break;
        case 19: _t->_possibleAdditionalTimeDelayChanged(); break;
        case 20: _t->_setDefaultsForCommand(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimpleMissionItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleMissionItem::commandChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleMissionItem::friendlyEditAllowedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleMissionItem::headingDegreesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleMissionItem::rawEditChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleMissionItem::cameraSectionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleMissionItem::speedSectionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleMissionItem::altitudeModeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleMissionItem::supportsTerrainFrameChanged)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 13:
        case 12:
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SimpleMissionItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->friendlyEditAllowed(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->rawEdit(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->specifiesAltitude(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->altitude(); break;
        case 5: *reinterpret_cast< QGroundControlQmlGlobal::AltitudeMode*>(_v) = _t->altitudeMode(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->amslAltAboveTerrain(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->command(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->supportsTerrainFrame(); break;
        case 9: *reinterpret_cast< QObject**>(_v) = _t->speedSection(); break;
        case 10: *reinterpret_cast< QObject**>(_v) = _t->cameraSection(); break;
        case 11: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->comboboxFacts(); break;
        case 12: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->textFieldFacts(); break;
        case 13: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->nanFacts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SimpleMissionItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setRawEdit(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setAltitudeMode(*reinterpret_cast< QGroundControlQmlGlobal::AltitudeMode*>(_v)); break;
        case 7: _t->setCommand(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_SimpleMissionItem[] = {
        &QGroundControlQmlGlobal::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject SimpleMissionItem::staticMetaObject = { {
    &VisualMissionItem::staticMetaObject,
    qt_meta_stringdata_SimpleMissionItem.data,
    qt_meta_data_SimpleMissionItem,
    qt_static_metacall,
    qt_meta_extradata_SimpleMissionItem,
    nullptr
} };


const QMetaObject *SimpleMissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleMissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleMissionItem.stringdata0))
        return static_cast<void*>(this);
    return VisualMissionItem::qt_metacast(_clname);
}

int SimpleMissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VisualMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SimpleMissionItem::commandChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimpleMissionItem::friendlyEditAllowedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SimpleMissionItem::headingDegreesChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SimpleMissionItem::rawEditChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SimpleMissionItem::cameraSectionChanged(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SimpleMissionItem::speedSectionChanged(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SimpleMissionItem::altitudeModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SimpleMissionItem::supportsTerrainFrameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
