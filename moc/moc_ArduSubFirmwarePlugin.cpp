/****************************************************************************
** Meta object code from reading C++ file 'ArduSubFirmwarePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/FirmwarePlugin/APM/ArduSubFirmwarePlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArduSubFirmwarePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_APMSubmarineFactGroup_t {
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMSubmarineFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMSubmarineFactGroup_t qt_meta_stringdata_APMSubmarineFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 21), // "APMSubmarineFactGroup"
QT_MOC_LITERAL(1, 22, 7), // "camTilt"
QT_MOC_LITERAL(2, 30, 5), // "Fact*"
QT_MOC_LITERAL(3, 36, 11), // "tetherTurns"
QT_MOC_LITERAL(4, 48, 12), // "lightsLevel1"
QT_MOC_LITERAL(5, 61, 12), // "lightsLevel2"
QT_MOC_LITERAL(6, 74, 9), // "pilotGain"
QT_MOC_LITERAL(7, 84, 9), // "inputHold"
QT_MOC_LITERAL(8, 94, 19) // "rangefinderDistance"

    },
    "APMSubmarineFactGroup\0camTilt\0Fact*\0"
    "tetherTurns\0lightsLevel1\0lightsLevel2\0"
    "pilotGain\0inputHold\0rangefinderDistance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMSubmarineFactGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,
       4, 0x80000000 | 2, 0x00095409,
       5, 0x80000000 | 2, 0x00095409,
       6, 0x80000000 | 2, 0x00095409,
       7, 0x80000000 | 2, 0x00095409,
       8, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void APMSubmarineFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMSubmarineFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->camTilt(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->tetherTurns(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->lightsLevel1(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->lightsLevel2(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->pilotGain(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->inputHold(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->rangefinderDistance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject APMSubmarineFactGroup::staticMetaObject = { {
    &FactGroup::staticMetaObject,
    qt_meta_stringdata_APMSubmarineFactGroup.data,
    qt_meta_data_APMSubmarineFactGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *APMSubmarineFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMSubmarineFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMSubmarineFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int APMSubmarineFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_ArduSubFirmwarePlugin_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArduSubFirmwarePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArduSubFirmwarePlugin_t qt_meta_stringdata_ArduSubFirmwarePlugin = {
    {
QT_MOC_LITERAL(0, 0, 21) // "ArduSubFirmwarePlugin"

    },
    "ArduSubFirmwarePlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArduSubFirmwarePlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ArduSubFirmwarePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ArduSubFirmwarePlugin::staticMetaObject = { {
    &APMFirmwarePlugin::staticMetaObject,
    qt_meta_stringdata_ArduSubFirmwarePlugin.data,
    qt_meta_data_ArduSubFirmwarePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ArduSubFirmwarePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArduSubFirmwarePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArduSubFirmwarePlugin.stringdata0))
        return static_cast<void*>(this);
    return APMFirmwarePlugin::qt_metacast(_clname);
}

int ArduSubFirmwarePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = APMFirmwarePlugin::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
