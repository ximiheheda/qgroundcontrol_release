/****************************************************************************
** Meta object code from reading C++ file 'Joystick.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/Joystick/Joystick.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Joystick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Joystick_t {
    QByteArrayData data[51];
    char stringdata0[654];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Joystick_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Joystick_t qt_meta_stringdata_Joystick = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Joystick"
QT_MOC_LITERAL(1, 9, 17), // "calibratedChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "calibrated"
QT_MOC_LITERAL(4, 39, 19), // "rawAxisValueChanged"
QT_MOC_LITERAL(5, 59, 5), // "index"
QT_MOC_LITERAL(6, 65, 5), // "value"
QT_MOC_LITERAL(7, 71, 23), // "rawButtonPressedChanged"
QT_MOC_LITERAL(8, 95, 7), // "pressed"
QT_MOC_LITERAL(9, 103, 20), // "buttonActionsChanged"
QT_MOC_LITERAL(10, 124, 7), // "actions"
QT_MOC_LITERAL(11, 132, 19), // "throttleModeChanged"
QT_MOC_LITERAL(12, 152, 4), // "mode"
QT_MOC_LITERAL(13, 157, 21), // "negativeThrustChanged"
QT_MOC_LITERAL(14, 179, 13), // "allowNegative"
QT_MOC_LITERAL(15, 193, 18), // "exponentialChanged"
QT_MOC_LITERAL(16, 212, 11), // "exponential"
QT_MOC_LITERAL(17, 224, 18), // "accumulatorChanged"
QT_MOC_LITERAL(18, 243, 11), // "accumulator"
QT_MOC_LITERAL(19, 255, 14), // "enabledChanged"
QT_MOC_LITERAL(20, 270, 7), // "enabled"
QT_MOC_LITERAL(21, 278, 23), // "circleCorrectionChanged"
QT_MOC_LITERAL(22, 302, 16), // "circleCorrection"
QT_MOC_LITERAL(23, 319, 13), // "manualControl"
QT_MOC_LITERAL(24, 333, 4), // "roll"
QT_MOC_LITERAL(25, 338, 5), // "pitch"
QT_MOC_LITERAL(26, 344, 3), // "yaw"
QT_MOC_LITERAL(27, 348, 8), // "throttle"
QT_MOC_LITERAL(28, 357, 7), // "buttons"
QT_MOC_LITERAL(29, 365, 13), // "joystickMmode"
QT_MOC_LITERAL(30, 379, 21), // "buttonActionTriggered"
QT_MOC_LITERAL(31, 401, 6), // "action"
QT_MOC_LITERAL(32, 408, 16), // "frequencyChanged"
QT_MOC_LITERAL(33, 425, 8), // "stepZoom"
QT_MOC_LITERAL(34, 434, 9), // "direction"
QT_MOC_LITERAL(35, 444, 10), // "stepCamera"
QT_MOC_LITERAL(36, 455, 10), // "stepStream"
QT_MOC_LITERAL(37, 466, 21), // "_activeVehicleChanged"
QT_MOC_LITERAL(38, 488, 8), // "Vehicle*"
QT_MOC_LITERAL(39, 497, 13), // "activeVehicle"
QT_MOC_LITERAL(40, 511, 15), // "setButtonAction"
QT_MOC_LITERAL(41, 527, 6), // "button"
QT_MOC_LITERAL(42, 534, 15), // "getButtonAction"
QT_MOC_LITERAL(43, 550, 4), // "name"
QT_MOC_LITERAL(44, 555, 16), // "totalButtonCount"
QT_MOC_LITERAL(45, 572, 9), // "axisCount"
QT_MOC_LITERAL(46, 582, 13), // "buttonActions"
QT_MOC_LITERAL(47, 596, 12), // "throttleMode"
QT_MOC_LITERAL(48, 609, 14), // "negativeThrust"
QT_MOC_LITERAL(49, 624, 19), // "requiresCalibration"
QT_MOC_LITERAL(50, 644, 9) // "frequency"

    },
    "Joystick\0calibratedChanged\0\0calibrated\0"
    "rawAxisValueChanged\0index\0value\0"
    "rawButtonPressedChanged\0pressed\0"
    "buttonActionsChanged\0actions\0"
    "throttleModeChanged\0mode\0negativeThrustChanged\0"
    "allowNegative\0exponentialChanged\0"
    "exponential\0accumulatorChanged\0"
    "accumulator\0enabledChanged\0enabled\0"
    "circleCorrectionChanged\0circleCorrection\0"
    "manualControl\0roll\0pitch\0yaw\0throttle\0"
    "buttons\0joystickMmode\0buttonActionTriggered\0"
    "action\0frequencyChanged\0stepZoom\0"
    "direction\0stepCamera\0stepStream\0"
    "_activeVehicleChanged\0Vehicle*\0"
    "activeVehicle\0setButtonAction\0button\0"
    "getButtonAction\0name\0totalButtonCount\0"
    "axisCount\0buttonActions\0throttleMode\0"
    "negativeThrust\0requiresCalibration\0"
    "frequency"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Joystick[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      13,  180, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    2,  112,    2, 0x06 /* Public */,
       7,    2,  117,    2, 0x06 /* Public */,
       9,    1,  122,    2, 0x06 /* Public */,
      11,    1,  125,    2, 0x06 /* Public */,
      13,    1,  128,    2, 0x06 /* Public */,
      15,    1,  131,    2, 0x06 /* Public */,
      17,    1,  134,    2, 0x06 /* Public */,
      19,    1,  137,    2, 0x06 /* Public */,
      21,    1,  140,    2, 0x06 /* Public */,
      23,    6,  143,    2, 0x06 /* Public */,
      30,    1,  156,    2, 0x06 /* Public */,
      32,    0,  159,    2, 0x06 /* Public */,
      33,    1,  160,    2, 0x06 /* Public */,
      35,    1,  163,    2, 0x06 /* Public */,
      36,    1,  166,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      37,    1,  169,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      40,    2,  172,    2, 0x02 /* Public */,
      42,    1,  177,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    8,
    QMetaType::Void, QMetaType::QVariantList,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UShort, QMetaType::Int,   24,   25,   26,   27,   28,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int,   34,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 38,   39,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   41,   31,
    QMetaType::QString, QMetaType::Int,   41,

 // properties: name, type, flags
      43, QMetaType::QString, 0x00095401,
       3, QMetaType::Bool, 0x00495003,
      44, QMetaType::Int, 0x00095401,
      45, QMetaType::Int, 0x00095401,
      10, QMetaType::QStringList, 0x00095401,
      46, QMetaType::QVariantList, 0x00495001,
      47, QMetaType::Int, 0x00495103,
      48, QMetaType::Bool, 0x00495103,
      16, QMetaType::Float, 0x00495103,
      18, QMetaType::Bool, 0x00495103,
      49, QMetaType::Bool, 0x00095401,
      22, QMetaType::Bool, 0x00495103,
      50, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       3,
       4,
       5,
       6,
       7,
       0,
       9,
      12,

       0        // eod
};

void Joystick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Joystick *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calibratedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->rawAxisValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->rawButtonPressedChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->buttonActionsChanged((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        case 4: _t->throttleModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->negativeThrustChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->exponentialChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->accumulatorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->circleCorrectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->manualControl((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< quint16(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 11: _t->buttonActionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->frequencyChanged(); break;
        case 13: _t->stepZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->stepCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->stepStream((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->_activeVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 17: _t->setButtonAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: { QString _r = _t->getButtonAction((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::calibratedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::rawAxisValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::rawButtonPressedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(QVariantList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::buttonActionsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::throttleModeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::negativeThrustChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::exponentialChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::accumulatorChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::enabledChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::circleCorrectionChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(float , float , float , float , quint16 , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::manualControl)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::buttonActionTriggered)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::frequencyChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stepZoom)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stepCamera)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Joystick::stepStream)) {
                *result = 15;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Joystick *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->_calibrated; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->totalButtonCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->axisCount(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->actions(); break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->buttonActions(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->throttleMode(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->negativeThrust(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->exponential(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->accumulator(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->requiresCalibration(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->circleCorrection(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->frequency(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Joystick *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1:
            if (_t->_calibrated != *reinterpret_cast< bool*>(_v)) {
                _t->_calibrated = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->calibratedChanged(_t->_calibrated);
            }
            break;
        case 6: _t->setThrottleMode(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setNegativeThrust(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setExponential(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setAccumulator(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setCircleCorrection(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setFrequency(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Joystick::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_Joystick.data,
    qt_meta_data_Joystick,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Joystick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Joystick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Joystick.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Joystick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Joystick::calibratedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Joystick::rawAxisValueChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Joystick::rawButtonPressedChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Joystick::buttonActionsChanged(QVariantList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Joystick::throttleModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Joystick::negativeThrustChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Joystick::exponentialChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Joystick::accumulatorChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Joystick::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Joystick::circleCorrectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Joystick::manualControl(float _t1, float _t2, float _t3, float _t4, quint16 _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Joystick::buttonActionTriggered(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Joystick::frequencyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Joystick::stepZoom(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Joystick::stepCamera(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Joystick::stepStream(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
