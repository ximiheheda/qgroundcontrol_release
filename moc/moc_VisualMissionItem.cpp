/****************************************************************************
** Meta object code from reading C++ file 'VisualMissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/MissionManager/VisualMissionItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisualMissionItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisualMissionItem_t {
    QByteArrayData data[75];
    char stringdata0[1444];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisualMissionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisualMissionItem_t qt_meta_stringdata_VisualMissionItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VisualMissionItem"
QT_MOC_LITERAL(1, 18, 20), // "altDifferenceChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "altDifference"
QT_MOC_LITERAL(4, 54, 17), // "altPercentChanged"
QT_MOC_LITERAL(5, 72, 10), // "altPercent"
QT_MOC_LITERAL(6, 83, 21), // "terrainPercentChanged"
QT_MOC_LITERAL(7, 105, 14), // "terrainPercent"
QT_MOC_LITERAL(8, 120, 23), // "terrainCollisionChanged"
QT_MOC_LITERAL(9, 144, 16), // "terrainCollision"
QT_MOC_LITERAL(10, 161, 14), // "azimuthChanged"
QT_MOC_LITERAL(11, 176, 7), // "azimuth"
QT_MOC_LITERAL(12, 184, 25), // "commandDescriptionChanged"
QT_MOC_LITERAL(13, 210, 18), // "commandNameChanged"
QT_MOC_LITERAL(14, 229, 19), // "abbreviationChanged"
QT_MOC_LITERAL(15, 249, 17), // "coordinateChanged"
QT_MOC_LITERAL(16, 267, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(17, 282, 10), // "coordinate"
QT_MOC_LITERAL(18, 293, 21), // "exitCoordinateChanged"
QT_MOC_LITERAL(19, 315, 14), // "exitCoordinate"
QT_MOC_LITERAL(20, 330, 12), // "dirtyChanged"
QT_MOC_LITERAL(21, 343, 5), // "dirty"
QT_MOC_LITERAL(22, 349, 15), // "distanceChanged"
QT_MOC_LITERAL(23, 365, 8), // "distance"
QT_MOC_LITERAL(24, 374, 20), // "isCurrentItemChanged"
QT_MOC_LITERAL(25, 395, 13), // "isCurrentItem"
QT_MOC_LITERAL(26, 409, 21), // "sequenceNumberChanged"
QT_MOC_LITERAL(27, 431, 14), // "sequenceNumber"
QT_MOC_LITERAL(28, 446, 19), // "isSimpleItemChanged"
QT_MOC_LITERAL(29, 466, 12), // "isSimpleItem"
QT_MOC_LITERAL(30, 479, 26), // "specifiesCoordinateChanged"
QT_MOC_LITERAL(31, 506, 29), // "isStandaloneCoordinateChanged"
QT_MOC_LITERAL(32, 536, 28), // "specifiesAltitudeOnlyChanged"
QT_MOC_LITERAL(33, 565, 27), // "specifiedFlightSpeedChanged"
QT_MOC_LITERAL(34, 593, 25), // "specifiedGimbalYawChanged"
QT_MOC_LITERAL(35, 619, 27), // "specifiedGimbalPitchChanged"
QT_MOC_LITERAL(36, 647, 25), // "lastSequenceNumberChanged"
QT_MOC_LITERAL(37, 673, 23), // "missionGimbalYawChanged"
QT_MOC_LITERAL(38, 697, 16), // "missionGimbalYaw"
QT_MOC_LITERAL(39, 714, 24), // "missionVehicleYawChanged"
QT_MOC_LITERAL(40, 739, 17), // "missionVehicleYaw"
QT_MOC_LITERAL(41, 757, 22), // "terrainAltitudeChanged"
QT_MOC_LITERAL(42, 780, 15), // "terrainAltitude"
QT_MOC_LITERAL(43, 796, 26), // "additionalTimeDelayChanged"
QT_MOC_LITERAL(44, 823, 19), // "boundingCubeChanged"
QT_MOC_LITERAL(45, 843, 36), // "coordinateHasRelativeAltitude..."
QT_MOC_LITERAL(46, 880, 29), // "coordinateHasRelativeAltitude"
QT_MOC_LITERAL(47, 910, 40), // "exitCoordinateHasRelativeAlti..."
QT_MOC_LITERAL(48, 951, 33), // "exitCoordinateHasRelativeAlti..."
QT_MOC_LITERAL(49, 985, 32), // "exitCoordinateSameAsEntryChanged"
QT_MOC_LITERAL(50, 1018, 25), // "exitCoordinateSameAsEntry"
QT_MOC_LITERAL(51, 1044, 22), // "_updateTerrainAltitude"
QT_MOC_LITERAL(52, 1067, 28), // "_reallyUpdateTerrainAltitude"
QT_MOC_LITERAL(53, 1096, 20), // "_terrainDataReceived"
QT_MOC_LITERAL(54, 1117, 7), // "success"
QT_MOC_LITERAL(55, 1125, 13), // "QList<double>"
QT_MOC_LITERAL(56, 1139, 7), // "heights"
QT_MOC_LITERAL(57, 1147, 12), // "homePosition"
QT_MOC_LITERAL(58, 1160, 18), // "commandDescription"
QT_MOC_LITERAL(59, 1179, 11), // "commandName"
QT_MOC_LITERAL(60, 1191, 12), // "abbreviation"
QT_MOC_LITERAL(61, 1204, 18), // "lastSequenceNumber"
QT_MOC_LITERAL(62, 1223, 19), // "specifiesCoordinate"
QT_MOC_LITERAL(63, 1243, 22), // "isStandaloneCoordinate"
QT_MOC_LITERAL(64, 1266, 21), // "specifiesAltitudeOnly"
QT_MOC_LITERAL(65, 1288, 9), // "editorQml"
QT_MOC_LITERAL(66, 1298, 12), // "mapVisualQML"
QT_MOC_LITERAL(67, 1311, 10), // "childItems"
QT_MOC_LITERAL(68, 1322, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(69, 1342, 20), // "specifiedFlightSpeed"
QT_MOC_LITERAL(70, 1363, 18), // "specifiedGimbalYaw"
QT_MOC_LITERAL(71, 1382, 20), // "specifiedGimbalPitch"
QT_MOC_LITERAL(72, 1403, 7), // "flyView"
QT_MOC_LITERAL(73, 1411, 12), // "boundingCube"
QT_MOC_LITERAL(74, 1424, 19) // "QGCGeoBoundingCube*"

    },
    "VisualMissionItem\0altDifferenceChanged\0"
    "\0altDifference\0altPercentChanged\0"
    "altPercent\0terrainPercentChanged\0"
    "terrainPercent\0terrainCollisionChanged\0"
    "terrainCollision\0azimuthChanged\0azimuth\0"
    "commandDescriptionChanged\0commandNameChanged\0"
    "abbreviationChanged\0coordinateChanged\0"
    "QGeoCoordinate\0coordinate\0"
    "exitCoordinateChanged\0exitCoordinate\0"
    "dirtyChanged\0dirty\0distanceChanged\0"
    "distance\0isCurrentItemChanged\0"
    "isCurrentItem\0sequenceNumberChanged\0"
    "sequenceNumber\0isSimpleItemChanged\0"
    "isSimpleItem\0specifiesCoordinateChanged\0"
    "isStandaloneCoordinateChanged\0"
    "specifiesAltitudeOnlyChanged\0"
    "specifiedFlightSpeedChanged\0"
    "specifiedGimbalYawChanged\0"
    "specifiedGimbalPitchChanged\0"
    "lastSequenceNumberChanged\0"
    "missionGimbalYawChanged\0missionGimbalYaw\0"
    "missionVehicleYawChanged\0missionVehicleYaw\0"
    "terrainAltitudeChanged\0terrainAltitude\0"
    "additionalTimeDelayChanged\0"
    "boundingCubeChanged\0"
    "coordinateHasRelativeAltitudeChanged\0"
    "coordinateHasRelativeAltitude\0"
    "exitCoordinateHasRelativeAltitudeChanged\0"
    "exitCoordinateHasRelativeAltitude\0"
    "exitCoordinateSameAsEntryChanged\0"
    "exitCoordinateSameAsEntry\0"
    "_updateTerrainAltitude\0"
    "_reallyUpdateTerrainAltitude\0"
    "_terrainDataReceived\0success\0QList<double>\0"
    "heights\0homePosition\0commandDescription\0"
    "commandName\0abbreviation\0lastSequenceNumber\0"
    "specifiesCoordinate\0isStandaloneCoordinate\0"
    "specifiesAltitudeOnly\0editorQml\0"
    "mapVisualQML\0childItems\0QmlObjectListModel*\0"
    "specifiedFlightSpeed\0specifiedGimbalYaw\0"
    "specifiedGimbalPitch\0flyView\0boundingCube\0"
    "QGCGeoBoundingCube*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisualMissionItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
      34,  254, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  179,    2, 0x06 /* Public */,
       4,    1,  182,    2, 0x06 /* Public */,
       6,    1,  185,    2, 0x06 /* Public */,
       8,    1,  188,    2, 0x06 /* Public */,
      10,    1,  191,    2, 0x06 /* Public */,
      12,    0,  194,    2, 0x06 /* Public */,
      13,    0,  195,    2, 0x06 /* Public */,
      14,    0,  196,    2, 0x06 /* Public */,
      15,    1,  197,    2, 0x06 /* Public */,
      18,    1,  200,    2, 0x06 /* Public */,
      20,    1,  203,    2, 0x06 /* Public */,
      22,    1,  206,    2, 0x06 /* Public */,
      24,    1,  209,    2, 0x06 /* Public */,
      26,    1,  212,    2, 0x06 /* Public */,
      28,    1,  215,    2, 0x06 /* Public */,
      30,    0,  218,    2, 0x06 /* Public */,
      31,    0,  219,    2, 0x06 /* Public */,
      32,    0,  220,    2, 0x06 /* Public */,
      33,    0,  221,    2, 0x06 /* Public */,
      34,    0,  222,    2, 0x06 /* Public */,
      35,    0,  223,    2, 0x06 /* Public */,
      36,    1,  224,    2, 0x06 /* Public */,
      37,    1,  227,    2, 0x06 /* Public */,
      39,    1,  230,    2, 0x06 /* Public */,
      41,    1,  233,    2, 0x06 /* Public */,
      43,    0,  236,    2, 0x06 /* Public */,
      44,    0,  237,    2, 0x06 /* Public */,
      45,    1,  238,    2, 0x06 /* Public */,
      47,    1,  241,    2, 0x06 /* Public */,
      49,    1,  244,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      51,    0,  247,    2, 0x08 /* Private */,
      52,    0,  248,    2, 0x08 /* Private */,
      53,    2,  249,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Double,   38,
    QMetaType::Void, QMetaType::Double,   40,
    QMetaType::Void, QMetaType::Double,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   50,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 55,   54,   56,

 // properties: name, type, flags
      57, QMetaType::Bool, 0x00095401,
      17, 0x80000000 | 16, 0x0049510b,
      42, QMetaType::Double, 0x00495001,
      46, QMetaType::Bool, 0x00495001,
      19, 0x80000000 | 16, 0x00495009,
      48, QMetaType::Bool, 0x00495001,
      50, QMetaType::Bool, 0x00495001,
      58, QMetaType::QString, 0x00495001,
      59, QMetaType::QString, 0x00495001,
      60, QMetaType::QString, 0x00495001,
      21, QMetaType::Bool, 0x00495103,
      25, QMetaType::Bool, 0x00495103,
      27, QMetaType::Int, 0x00495103,
      61, QMetaType::Int, 0x00495001,
      62, QMetaType::Bool, 0x00495001,
      63, QMetaType::Bool, 0x00495001,
      64, QMetaType::Bool, 0x00495001,
      29, QMetaType::Bool, 0x00495001,
      65, QMetaType::QString, 0x00095401,
      66, QMetaType::QString, 0x00095401,
      67, 0x80000000 | 68, 0x00095409,
      69, QMetaType::Double, 0x00495001,
      70, QMetaType::Double, 0x00495001,
      71, QMetaType::Double, 0x00495001,
      38, QMetaType::Double, 0x00495001,
      40, QMetaType::Double, 0x00495001,
      72, QMetaType::Bool, 0x00095401,
      73, 0x80000000 | 74, 0x00495009,
       3, QMetaType::Double, 0x00495103,
       5, QMetaType::Double, 0x00495103,
       7, QMetaType::Double, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      11, QMetaType::Double, 0x00495103,
      23, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       8,
      24,
      27,
       9,
      28,
      29,
       5,
       6,
       7,
      10,
      12,
      13,
      21,
      15,
      16,
      17,
      14,
       0,
       0,
       0,
      18,
      19,
      20,
      22,
      23,
       0,
      26,
       0,
       1,
       2,
       3,
       4,
      11,

       0        // eod
};

void VisualMissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualMissionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->altDifferenceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->altPercentChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->terrainPercentChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->terrainCollisionChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->azimuthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->commandDescriptionChanged(); break;
        case 6: _t->commandNameChanged(); break;
        case 7: _t->abbreviationChanged(); break;
        case 8: _t->coordinateChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 9: _t->exitCoordinateChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 10: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->distanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->isCurrentItemChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->sequenceNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->isSimpleItemChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->specifiesCoordinateChanged(); break;
        case 16: _t->isStandaloneCoordinateChanged(); break;
        case 17: _t->specifiesAltitudeOnlyChanged(); break;
        case 18: _t->specifiedFlightSpeedChanged(); break;
        case 19: _t->specifiedGimbalYawChanged(); break;
        case 20: _t->specifiedGimbalPitchChanged(); break;
        case 21: _t->lastSequenceNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->missionGimbalYawChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->missionVehicleYawChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->terrainAltitudeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->additionalTimeDelayChanged(); break;
        case 26: _t->boundingCubeChanged(); break;
        case 27: _t->coordinateHasRelativeAltitudeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->exitCoordinateHasRelativeAltitudeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->exitCoordinateSameAsEntryChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->_updateTerrainAltitude(); break;
        case 31: _t->_reallyUpdateTerrainAltitude(); break;
        case 32: _t->_terrainDataReceived((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::altDifferenceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::altPercentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::terrainPercentChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::terrainCollisionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::azimuthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::commandDescriptionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::commandNameChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::abbreviationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::coordinateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::exitCoordinateChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::dirtyChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::distanceChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::isCurrentItemChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::sequenceNumberChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::isSimpleItemChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiesCoordinateChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::isStandaloneCoordinateChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiesAltitudeOnlyChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiedFlightSpeedChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiedGimbalYawChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::specifiedGimbalPitchChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::lastSequenceNumberChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::missionGimbalYawChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::missionVehicleYawChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::terrainAltitudeChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::additionalTimeDelayChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::boundingCubeChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::coordinateHasRelativeAltitudeChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::exitCoordinateHasRelativeAltitudeChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualMissionItem::exitCoordinateSameAsEntryChanged)) {
                *result = 29;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 27:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCGeoBoundingCube* >(); break;
        case 4:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 20:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VisualMissionItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->homePosition(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->terrainAltitude(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->coordinateHasRelativeAltitude(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->exitCoordinate(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->exitCoordinateHasRelativeAltitude(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->exitCoordinateSameAsEntry(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->commandDescription(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->commandName(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->abbreviation(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isCurrentItem(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->sequenceNumber(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->lastSequenceNumber(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->specifiesCoordinate(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->isStandaloneCoordinate(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->specifiesAltitudeOnly(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->isSimpleItem(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->_editorQml; break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->mapVisualQML(); break;
        case 20: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->childItems(); break;
        case 21: *reinterpret_cast< double*>(_v) = _t->specifiedFlightSpeed(); break;
        case 22: *reinterpret_cast< double*>(_v) = _t->specifiedGimbalYaw(); break;
        case 23: *reinterpret_cast< double*>(_v) = _t->specifiedGimbalPitch(); break;
        case 24: *reinterpret_cast< double*>(_v) = _t->missionGimbalYaw(); break;
        case 25: *reinterpret_cast< double*>(_v) = _t->missionVehicleYaw(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->flyView(); break;
        case 27: *reinterpret_cast< QGCGeoBoundingCube**>(_v) = _t->boundingCube(); break;
        case 28: *reinterpret_cast< double*>(_v) = _t->altDifference(); break;
        case 29: *reinterpret_cast< double*>(_v) = _t->altPercent(); break;
        case 30: *reinterpret_cast< double*>(_v) = _t->terrainPercent(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->terrainCollision(); break;
        case 32: *reinterpret_cast< double*>(_v) = _t->azimuth(); break;
        case 33: *reinterpret_cast< double*>(_v) = _t->distance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VisualMissionItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 10: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setIsCurrentItem(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setSequenceNumber(*reinterpret_cast< int*>(_v)); break;
        case 28: _t->setAltDifference(*reinterpret_cast< double*>(_v)); break;
        case 29: _t->setAltPercent(*reinterpret_cast< double*>(_v)); break;
        case 30: _t->setTerrainPercent(*reinterpret_cast< double*>(_v)); break;
        case 31: _t->setTerrainCollision(*reinterpret_cast< bool*>(_v)); break;
        case 32: _t->setAzimuth(*reinterpret_cast< double*>(_v)); break;
        case 33: _t->setDistance(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VisualMissionItem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VisualMissionItem.data,
    qt_meta_data_VisualMissionItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VisualMissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisualMissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VisualMissionItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VisualMissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 34;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 34;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 34;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 34;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 34;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VisualMissionItem::altDifferenceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VisualMissionItem::altPercentChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VisualMissionItem::terrainPercentChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VisualMissionItem::terrainCollisionChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VisualMissionItem::azimuthChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VisualMissionItem::commandDescriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VisualMissionItem::commandNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void VisualMissionItem::abbreviationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void VisualMissionItem::coordinateChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void VisualMissionItem::exitCoordinateChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void VisualMissionItem::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void VisualMissionItem::distanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void VisualMissionItem::isCurrentItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void VisualMissionItem::sequenceNumberChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void VisualMissionItem::isSimpleItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void VisualMissionItem::specifiesCoordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void VisualMissionItem::isStandaloneCoordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void VisualMissionItem::specifiesAltitudeOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void VisualMissionItem::specifiedFlightSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void VisualMissionItem::specifiedGimbalYawChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void VisualMissionItem::specifiedGimbalPitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void VisualMissionItem::lastSequenceNumberChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void VisualMissionItem::missionGimbalYawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void VisualMissionItem::missionVehicleYawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void VisualMissionItem::terrainAltitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void VisualMissionItem::additionalTimeDelayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void VisualMissionItem::boundingCubeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void VisualMissionItem::coordinateHasRelativeAltitudeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void VisualMissionItem::exitCoordinateHasRelativeAltitudeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void VisualMissionItem::exitCoordinateSameAsEntryChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
