/****************************************************************************
** Meta object code from reading C++ file 'QGCHilLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/comm/QGCHilLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCHilLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCHilLink_t {
    QByteArrayData data[93];
    char stringdata0[957];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCHilLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCHilLink_t qt_meta_stringdata_QGCHilLink = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QGCHilLink"
QT_MOC_LITERAL(1, 11, 19), // "simulationConnected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 22), // "simulationDisconnected"
QT_MOC_LITERAL(4, 55, 13), // "disconnectSim"
QT_MOC_LITERAL(5, 69, 9), // "connected"
QT_MOC_LITERAL(6, 79, 15), // "hilStateChanged"
QT_MOC_LITERAL(7, 95, 7), // "time_us"
QT_MOC_LITERAL(8, 103, 4), // "roll"
QT_MOC_LITERAL(9, 108, 5), // "pitch"
QT_MOC_LITERAL(10, 114, 3), // "yaw"
QT_MOC_LITERAL(11, 118, 9), // "rollspeed"
QT_MOC_LITERAL(12, 128, 10), // "pitchspeed"
QT_MOC_LITERAL(13, 139, 8), // "yawspeed"
QT_MOC_LITERAL(14, 148, 3), // "lat"
QT_MOC_LITERAL(15, 152, 3), // "lon"
QT_MOC_LITERAL(16, 156, 3), // "alt"
QT_MOC_LITERAL(17, 160, 2), // "vx"
QT_MOC_LITERAL(18, 163, 2), // "vy"
QT_MOC_LITERAL(19, 166, 2), // "vz"
QT_MOC_LITERAL(20, 169, 12), // "ind_airspeed"
QT_MOC_LITERAL(21, 182, 13), // "true_airspeed"
QT_MOC_LITERAL(22, 196, 4), // "xacc"
QT_MOC_LITERAL(23, 201, 4), // "yacc"
QT_MOC_LITERAL(24, 206, 4), // "zacc"
QT_MOC_LITERAL(25, 211, 21), // "hilGroundTruthChanged"
QT_MOC_LITERAL(26, 233, 19), // "sensorHilGpsChanged"
QT_MOC_LITERAL(27, 253, 8), // "fix_type"
QT_MOC_LITERAL(28, 262, 3), // "eph"
QT_MOC_LITERAL(29, 266, 3), // "epv"
QT_MOC_LITERAL(30, 270, 3), // "vel"
QT_MOC_LITERAL(31, 274, 2), // "vn"
QT_MOC_LITERAL(32, 277, 2), // "ve"
QT_MOC_LITERAL(33, 280, 2), // "vd"
QT_MOC_LITERAL(34, 283, 3), // "cog"
QT_MOC_LITERAL(35, 287, 10), // "satellites"
QT_MOC_LITERAL(36, 298, 22), // "sensorHilRawImuChanged"
QT_MOC_LITERAL(37, 321, 5), // "xgyro"
QT_MOC_LITERAL(38, 327, 5), // "ygyro"
QT_MOC_LITERAL(39, 333, 5), // "zgyro"
QT_MOC_LITERAL(40, 339, 4), // "xmag"
QT_MOC_LITERAL(41, 344, 4), // "ymag"
QT_MOC_LITERAL(42, 349, 4), // "zmag"
QT_MOC_LITERAL(43, 354, 12), // "abs_pressure"
QT_MOC_LITERAL(44, 367, 13), // "diff_pressure"
QT_MOC_LITERAL(45, 381, 12), // "pressure_alt"
QT_MOC_LITERAL(46, 394, 11), // "temperature"
QT_MOC_LITERAL(47, 406, 14), // "fields_updated"
QT_MOC_LITERAL(48, 421, 27), // "sensorHilOpticalFlowChanged"
QT_MOC_LITERAL(49, 449, 6), // "flow_x"
QT_MOC_LITERAL(50, 456, 6), // "flow_y"
QT_MOC_LITERAL(51, 463, 13), // "flow_comp_m_x"
QT_MOC_LITERAL(52, 477, 13), // "flow_comp_m_y"
QT_MOC_LITERAL(53, 491, 7), // "quality"
QT_MOC_LITERAL(54, 499, 15), // "ground_distance"
QT_MOC_LITERAL(55, 515, 13), // "remoteChanged"
QT_MOC_LITERAL(56, 529, 8), // "hostPort"
QT_MOC_LITERAL(57, 538, 13), // "statusMessage"
QT_MOC_LITERAL(58, 552, 7), // "message"
QT_MOC_LITERAL(59, 560, 15), // "airframeChanged"
QT_MOC_LITERAL(60, 576, 8), // "airframe"
QT_MOC_LITERAL(61, 585, 14), // "versionChanged"
QT_MOC_LITERAL(62, 600, 7), // "version"
QT_MOC_LITERAL(63, 608, 16), // "sensorHilChanged"
QT_MOC_LITERAL(64, 625, 7), // "enabled"
QT_MOC_LITERAL(65, 633, 17), // "_invokeWriteBytes"
QT_MOC_LITERAL(66, 651, 7), // "setPort"
QT_MOC_LITERAL(67, 659, 4), // "port"
QT_MOC_LITERAL(68, 664, 13), // "setRemoteHost"
QT_MOC_LITERAL(69, 678, 4), // "host"
QT_MOC_LITERAL(70, 683, 14), // "updateControls"
QT_MOC_LITERAL(71, 698, 4), // "time"
QT_MOC_LITERAL(72, 703, 12), // "rollAilerons"
QT_MOC_LITERAL(73, 716, 13), // "pitchElevator"
QT_MOC_LITERAL(74, 730, 9), // "yawRudder"
QT_MOC_LITERAL(75, 740, 8), // "throttle"
QT_MOC_LITERAL(76, 749, 10), // "systemMode"
QT_MOC_LITERAL(77, 760, 7), // "navMode"
QT_MOC_LITERAL(78, 768, 12), // "processError"
QT_MOC_LITERAL(79, 781, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(80, 804, 3), // "err"
QT_MOC_LITERAL(81, 808, 10), // "setVersion"
QT_MOC_LITERAL(82, 819, 15), // "enableSensorHIL"
QT_MOC_LITERAL(83, 835, 6), // "enable"
QT_MOC_LITERAL(84, 842, 14), // "selectAirframe"
QT_MOC_LITERAL(85, 857, 9), // "readBytes"
QT_MOC_LITERAL(86, 867, 14), // "writeBytesSafe"
QT_MOC_LITERAL(87, 882, 11), // "const char*"
QT_MOC_LITERAL(88, 894, 4), // "data"
QT_MOC_LITERAL(89, 899, 6), // "length"
QT_MOC_LITERAL(90, 906, 17), // "connectSimulation"
QT_MOC_LITERAL(91, 924, 20), // "disconnectSimulation"
QT_MOC_LITERAL(92, 945, 11) // "_writeBytes"

    },
    "QGCHilLink\0simulationConnected\0\0"
    "simulationDisconnected\0disconnectSim\0"
    "connected\0hilStateChanged\0time_us\0"
    "roll\0pitch\0yaw\0rollspeed\0pitchspeed\0"
    "yawspeed\0lat\0lon\0alt\0vx\0vy\0vz\0"
    "ind_airspeed\0true_airspeed\0xacc\0yacc\0"
    "zacc\0hilGroundTruthChanged\0"
    "sensorHilGpsChanged\0fix_type\0eph\0epv\0"
    "vel\0vn\0ve\0vd\0cog\0satellites\0"
    "sensorHilRawImuChanged\0xgyro\0ygyro\0"
    "zgyro\0xmag\0ymag\0zmag\0abs_pressure\0"
    "diff_pressure\0pressure_alt\0temperature\0"
    "fields_updated\0sensorHilOpticalFlowChanged\0"
    "flow_x\0flow_y\0flow_comp_m_x\0flow_comp_m_y\0"
    "quality\0ground_distance\0remoteChanged\0"
    "hostPort\0statusMessage\0message\0"
    "airframeChanged\0airframe\0versionChanged\0"
    "version\0sensorHilChanged\0enabled\0"
    "_invokeWriteBytes\0setPort\0port\0"
    "setRemoteHost\0host\0updateControls\0"
    "time\0rollAilerons\0pitchElevator\0"
    "yawRudder\0throttle\0systemMode\0navMode\0"
    "processError\0QProcess::ProcessError\0"
    "err\0setVersion\0enableSensorHIL\0enable\0"
    "selectAirframe\0readBytes\0writeBytesSafe\0"
    "const char*\0data\0length\0connectSimulation\0"
    "disconnectSimulation\0_writeBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCHilLink[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x06 /* Public */,
       3,    0,  155,    2, 0x06 /* Public */,
       4,    0,  156,    2, 0x06 /* Public */,
       1,    1,  157,    2, 0x06 /* Public */,
       6,   18,  160,    2, 0x06 /* Public */,
      25,   18,  197,    2, 0x06 /* Public */,
      26,   13,  234,    2, 0x06 /* Public */,
      36,   15,  261,    2, 0x06 /* Public */,
      48,    7,  292,    2, 0x06 /* Public */,
      55,    1,  307,    2, 0x06 /* Public */,
      57,    1,  310,    2, 0x06 /* Public */,
      59,    1,  313,    2, 0x06 /* Public */,
      61,    1,  316,    2, 0x06 /* Public */,
      61,    1,  319,    2, 0x06 /* Public */,
      63,    1,  322,    2, 0x06 /* Public */,
      65,    1,  325,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      66,    1,  328,    2, 0x0a /* Public */,
      68,    1,  331,    2, 0x0a /* Public */,
      70,    7,  334,    2, 0x0a /* Public */,
      78,    1,  349,    2, 0x0a /* Public */,
      81,    1,  352,    2, 0x0a /* Public */,
      82,    1,  355,    2, 0x0a /* Public */,
      84,    1,  358,    2, 0x0a /* Public */,
      85,    0,  361,    2, 0x0a /* Public */,
      86,    2,  362,    2, 0x0a /* Public */,
      90,    0,  367,    2, 0x0a /* Public */,
      91,    0,  368,    2, 0x0a /* Public */,
      92,    1,  369,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,   23,   24,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,   23,   24,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,    7,   14,   15,   16,   27,   28,   29,   30,   31,   32,   33,   34,   35,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt,    7,   22,   23,   24,   37,   38,   39,   40,   41,   42,   43,   44,   45,   46,   47,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Short, QMetaType::Short, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float,    7,   49,   50,   51,   52,   53,   54,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::QString,   60,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void, QMetaType::Int,   62,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::QString,   69,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::UChar,   71,   72,   73,   74,   75,   76,   77,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void, QMetaType::Bool,   83,
    QMetaType::Void, QMetaType::QString,   60,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 87, QMetaType::Int,   88,   89,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QByteArray,    2,

       0        // eod
};

void QGCHilLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCHilLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->simulationConnected(); break;
        case 1: _t->simulationDisconnected(); break;
        case 2: _t->disconnectSim(); break;
        case 3: _t->simulationConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->hilStateChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 5: _t->hilGroundTruthChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 6: _t->sensorHilGpsChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< int(*)>(_a[13]))); break;
        case 7: _t->sensorHilRawImuChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< quint32(*)>(_a[15]))); break;
        case 8: _t->sensorHilOpticalFlowChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 9: _t->remoteChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->airframeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->versionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->versionChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 14: _t->sensorHilChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->_invokeWriteBytes((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 16: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setRemoteHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->updateControls((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< quint8(*)>(_a[7]))); break;
        case 19: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 20: _t->setVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->enableSensorHIL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->selectAirframe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->readBytes(); break;
        case 24: _t->writeBytesSafe((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: { bool _r = _t->connectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->disconnectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCHilLink::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::simulationConnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::simulationDisconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::disconnectSim)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::simulationConnected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(quint64 , float , float , float , float , float , float , double , double , double , float , float , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::hilStateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(quint64 , float , float , float , float , float , float , double , double , double , float , float , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::hilGroundTruthChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(quint64 , double , double , double , int , float , float , float , float , float , float , float , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::sensorHilGpsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(quint64 , float , float , float , float , float , float , float , float , float , float , float , float , float , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::sensorHilRawImuChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(quint64 , qint16 , qint16 , float , float , quint8 , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::sensorHilOpticalFlowChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::remoteChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::statusMessage)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::airframeChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::versionChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::versionChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::sensorHilChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QGCHilLink::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilLink::_invokeWriteBytes)) {
                *result = 15;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QGCHilLink::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_QGCHilLink.data,
    qt_meta_data_QGCHilLink,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCHilLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCHilLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCHilLink.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QGCHilLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void QGCHilLink::simulationConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCHilLink::simulationDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCHilLink::disconnectSim()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCHilLink::simulationConnected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGCHilLink::hilStateChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, double _t8, double _t9, double _t10, float _t11, float _t12, float _t13, float _t14, float _t15, float _t16, float _t17, float _t18)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)), const_cast<void*>(reinterpret_cast<const void*>(&_t16)), const_cast<void*>(reinterpret_cast<const void*>(&_t17)), const_cast<void*>(reinterpret_cast<const void*>(&_t18)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGCHilLink::hilGroundTruthChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, double _t8, double _t9, double _t10, float _t11, float _t12, float _t13, float _t14, float _t15, float _t16, float _t17, float _t18)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)), const_cast<void*>(reinterpret_cast<const void*>(&_t16)), const_cast<void*>(reinterpret_cast<const void*>(&_t17)), const_cast<void*>(reinterpret_cast<const void*>(&_t18)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGCHilLink::sensorHilGpsChanged(quint64 _t1, double _t2, double _t3, double _t4, int _t5, float _t6, float _t7, float _t8, float _t9, float _t10, float _t11, float _t12, int _t13)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGCHilLink::sensorHilRawImuChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, float _t9, float _t10, float _t11, float _t12, float _t13, float _t14, quint32 _t15)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGCHilLink::sensorHilOpticalFlowChanged(quint64 _t1, qint16 _t2, qint16 _t3, float _t4, float _t5, quint8 _t6, float _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QGCHilLink::remoteChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QGCHilLink::statusMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QGCHilLink::airframeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QGCHilLink::versionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QGCHilLink::versionChanged(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QGCHilLink::sensorHilChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QGCHilLink::_invokeWriteBytes(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
