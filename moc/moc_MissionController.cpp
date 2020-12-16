/****************************************************************************
** Meta object code from reading C++ file 'MissionController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/MissionManager/MissionController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionController_t {
    QByteArrayData data[91];
    char stringdata0[1816];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionController_t qt_meta_stringdata_MissionController = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MissionController"
QT_MOC_LITERAL(1, 18, 18), // "visualItemsChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "waypointLinesChanged"
QT_MOC_LITERAL(4, 59, 19), // "waypointPathChanged"
QT_MOC_LITERAL(5, 79, 19), // "newItemsFromVehicle"
QT_MOC_LITERAL(6, 99, 22), // "missionDistanceChanged"
QT_MOC_LITERAL(7, 122, 15), // "missionDistance"
QT_MOC_LITERAL(8, 138, 18), // "missionTimeChanged"
QT_MOC_LITERAL(9, 157, 27), // "missionHoverDistanceChanged"
QT_MOC_LITERAL(10, 185, 20), // "missionHoverDistance"
QT_MOC_LITERAL(11, 206, 23), // "missionHoverTimeChanged"
QT_MOC_LITERAL(12, 230, 28), // "missionCruiseDistanceChanged"
QT_MOC_LITERAL(13, 259, 21), // "missionCruiseDistance"
QT_MOC_LITERAL(14, 281, 24), // "missionCruiseTimeChanged"
QT_MOC_LITERAL(15, 306, 26), // "missionMaxTelemetryChanged"
QT_MOC_LITERAL(16, 333, 19), // "missionMaxTelemetry"
QT_MOC_LITERAL(17, 353, 30), // "complexMissionItemNamesChanged"
QT_MOC_LITERAL(18, 384, 25), // "resumeMissionIndexChanged"
QT_MOC_LITERAL(19, 410, 18), // "resumeMissionReady"
QT_MOC_LITERAL(20, 429, 23), // "resumeMissionUploadFail"
QT_MOC_LITERAL(21, 453, 25), // "batteryChangePointChanged"
QT_MOC_LITERAL(22, 479, 18), // "batteryChangePoint"
QT_MOC_LITERAL(23, 498, 24), // "batteriesRequiredChanged"
QT_MOC_LITERAL(24, 523, 17), // "batteriesRequired"
QT_MOC_LITERAL(25, 541, 26), // "plannedHomePositionChanged"
QT_MOC_LITERAL(26, 568, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(27, 583, 19), // "plannedHomePosition"
QT_MOC_LITERAL(28, 603, 18), // "progressPctChanged"
QT_MOC_LITERAL(29, 622, 11), // "progressPct"
QT_MOC_LITERAL(30, 634, 26), // "currentMissionIndexChanged"
QT_MOC_LITERAL(31, 661, 19), // "currentMissionIndex"
QT_MOC_LITERAL(32, 681, 27), // "currentPlanViewIndexChanged"
QT_MOC_LITERAL(33, 709, 26), // "currentPlanViewItemChanged"
QT_MOC_LITERAL(34, 736, 26), // "missionBoundingCubeChanged"
QT_MOC_LITERAL(35, 763, 23), // "missionItemCountChanged"
QT_MOC_LITERAL(36, 787, 16), // "missionItemCount"
QT_MOC_LITERAL(37, 804, 36), // "_newMissionItemsAvailableFrom..."
QT_MOC_LITERAL(38, 841, 18), // "removeAllRequested"
QT_MOC_LITERAL(39, 860, 19), // "_itemCommandChanged"
QT_MOC_LITERAL(40, 880, 34), // "_managerVehicleHomePositionCh..."
QT_MOC_LITERAL(41, 915, 12), // "homePosition"
QT_MOC_LITERAL(42, 928, 18), // "_inProgressChanged"
QT_MOC_LITERAL(43, 947, 10), // "inProgress"
QT_MOC_LITERAL(44, 958, 27), // "_currentMissionIndexChanged"
QT_MOC_LITERAL(45, 986, 14), // "sequenceNumber"
QT_MOC_LITERAL(46, 1001, 20), // "_recalcWaypointLines"
QT_MOC_LITERAL(47, 1022, 26), // "_recalcMissionFlightStatus"
QT_MOC_LITERAL(48, 1049, 20), // "_updateContainsItems"
QT_MOC_LITERAL(49, 1070, 19), // "_progressPctChanged"
QT_MOC_LITERAL(50, 1090, 24), // "_visualItemsDirtyChanged"
QT_MOC_LITERAL(51, 1115, 5), // "dirty"
QT_MOC_LITERAL(52, 1121, 20), // "_managerSendComplete"
QT_MOC_LITERAL(53, 1142, 5), // "error"
QT_MOC_LITERAL(54, 1148, 25), // "_managerRemoveAllComplete"
QT_MOC_LITERAL(55, 1174, 14), // "_updateTimeout"
QT_MOC_LITERAL(56, 1189, 26), // "_complexBoundingBoxChanged"
QT_MOC_LITERAL(57, 1216, 10), // "_recalcAll"
QT_MOC_LITERAL(58, 1227, 17), // "removeMissionItem"
QT_MOC_LITERAL(59, 1245, 5), // "index"
QT_MOC_LITERAL(60, 1251, 23), // "insertSimpleMissionItem"
QT_MOC_LITERAL(61, 1275, 10), // "coordinate"
QT_MOC_LITERAL(62, 1286, 1), // "i"
QT_MOC_LITERAL(63, 1288, 20), // "insertROIMissionItem"
QT_MOC_LITERAL(64, 1309, 24), // "insertComplexMissionItem"
QT_MOC_LITERAL(65, 1334, 8), // "itemName"
QT_MOC_LITERAL(66, 1343, 19), // "mapCenterCoordinate"
QT_MOC_LITERAL(67, 1363, 36), // "insertComplexMissionItemFromK..."
QT_MOC_LITERAL(68, 1400, 4), // "file"
QT_MOC_LITERAL(69, 1405, 13), // "resumeMission"
QT_MOC_LITERAL(70, 1419, 11), // "resumeIndex"
QT_MOC_LITERAL(71, 1431, 27), // "applyDefaultMissionAltitude"
QT_MOC_LITERAL(72, 1459, 23), // "setCurrentPlanViewIndex"
QT_MOC_LITERAL(73, 1483, 5), // "force"
QT_MOC_LITERAL(74, 1489, 11), // "visualItems"
QT_MOC_LITERAL(75, 1501, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(76, 1521, 13), // "waypointLines"
QT_MOC_LITERAL(77, 1535, 12), // "waypointPath"
QT_MOC_LITERAL(78, 1548, 23), // "complexMissionItemNames"
QT_MOC_LITERAL(79, 1572, 18), // "resumeMissionIndex"
QT_MOC_LITERAL(80, 1591, 20), // "currentPlanViewIndex"
QT_MOC_LITERAL(81, 1612, 19), // "currentPlanViewItem"
QT_MOC_LITERAL(82, 1632, 18), // "VisualMissionItem*"
QT_MOC_LITERAL(83, 1651, 11), // "missionTime"
QT_MOC_LITERAL(84, 1663, 16), // "missionHoverTime"
QT_MOC_LITERAL(85, 1680, 17), // "missionCruiseTime"
QT_MOC_LITERAL(86, 1698, 18), // "travelBoundingCube"
QT_MOC_LITERAL(87, 1717, 19), // "QGCGeoBoundingCube*"
QT_MOC_LITERAL(88, 1737, 21), // "surveyComplexItemName"
QT_MOC_LITERAL(89, 1759, 27), // "corridorScanComplexItemName"
QT_MOC_LITERAL(90, 1787, 28) // "structureScanComplexItemName"

    },
    "MissionController\0visualItemsChanged\0"
    "\0waypointLinesChanged\0waypointPathChanged\0"
    "newItemsFromVehicle\0missionDistanceChanged\0"
    "missionDistance\0missionTimeChanged\0"
    "missionHoverDistanceChanged\0"
    "missionHoverDistance\0missionHoverTimeChanged\0"
    "missionCruiseDistanceChanged\0"
    "missionCruiseDistance\0missionCruiseTimeChanged\0"
    "missionMaxTelemetryChanged\0"
    "missionMaxTelemetry\0complexMissionItemNamesChanged\0"
    "resumeMissionIndexChanged\0resumeMissionReady\0"
    "resumeMissionUploadFail\0"
    "batteryChangePointChanged\0batteryChangePoint\0"
    "batteriesRequiredChanged\0batteriesRequired\0"
    "plannedHomePositionChanged\0QGeoCoordinate\0"
    "plannedHomePosition\0progressPctChanged\0"
    "progressPct\0currentMissionIndexChanged\0"
    "currentMissionIndex\0currentPlanViewIndexChanged\0"
    "currentPlanViewItemChanged\0"
    "missionBoundingCubeChanged\0"
    "missionItemCountChanged\0missionItemCount\0"
    "_newMissionItemsAvailableFromVehicle\0"
    "removeAllRequested\0_itemCommandChanged\0"
    "_managerVehicleHomePositionChanged\0"
    "homePosition\0_inProgressChanged\0"
    "inProgress\0_currentMissionIndexChanged\0"
    "sequenceNumber\0_recalcWaypointLines\0"
    "_recalcMissionFlightStatus\0"
    "_updateContainsItems\0_progressPctChanged\0"
    "_visualItemsDirtyChanged\0dirty\0"
    "_managerSendComplete\0error\0"
    "_managerRemoveAllComplete\0_updateTimeout\0"
    "_complexBoundingBoxChanged\0_recalcAll\0"
    "removeMissionItem\0index\0insertSimpleMissionItem\0"
    "coordinate\0i\0insertROIMissionItem\0"
    "insertComplexMissionItem\0itemName\0"
    "mapCenterCoordinate\0"
    "insertComplexMissionItemFromKMLOrSHP\0"
    "file\0resumeMission\0resumeIndex\0"
    "applyDefaultMissionAltitude\0"
    "setCurrentPlanViewIndex\0force\0visualItems\0"
    "QmlObjectListModel*\0waypointLines\0"
    "waypointPath\0complexMissionItemNames\0"
    "resumeMissionIndex\0currentPlanViewIndex\0"
    "currentPlanViewItem\0VisualMissionItem*\0"
    "missionTime\0missionHoverTime\0"
    "missionCruiseTime\0travelBoundingCube\0"
    "QGCGeoBoundingCube*\0surveyComplexItemName\0"
    "corridorScanComplexItemName\0"
    "structureScanComplexItemName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
      24,  360, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  249,    2, 0x06 /* Public */,
       3,    0,  250,    2, 0x06 /* Public */,
       4,    0,  251,    2, 0x06 /* Public */,
       5,    0,  252,    2, 0x06 /* Public */,
       6,    1,  253,    2, 0x06 /* Public */,
       8,    0,  256,    2, 0x06 /* Public */,
       9,    1,  257,    2, 0x06 /* Public */,
      11,    0,  260,    2, 0x06 /* Public */,
      12,    1,  261,    2, 0x06 /* Public */,
      14,    0,  264,    2, 0x06 /* Public */,
      15,    1,  265,    2, 0x06 /* Public */,
      17,    0,  268,    2, 0x06 /* Public */,
      18,    0,  269,    2, 0x06 /* Public */,
      19,    0,  270,    2, 0x06 /* Public */,
      20,    0,  271,    2, 0x06 /* Public */,
      21,    1,  272,    2, 0x06 /* Public */,
      23,    1,  275,    2, 0x06 /* Public */,
      25,    1,  278,    2, 0x06 /* Public */,
      28,    1,  281,    2, 0x06 /* Public */,
      30,    1,  284,    2, 0x06 /* Public */,
      32,    0,  287,    2, 0x06 /* Public */,
      33,    0,  288,    2, 0x06 /* Public */,
      34,    0,  289,    2, 0x06 /* Public */,
      35,    1,  290,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      37,    1,  293,    2, 0x08 /* Private */,
      39,    0,  296,    2, 0x08 /* Private */,
      40,    1,  297,    2, 0x08 /* Private */,
      42,    1,  300,    2, 0x08 /* Private */,
      44,    1,  303,    2, 0x08 /* Private */,
      46,    0,  306,    2, 0x08 /* Private */,
      47,    0,  307,    2, 0x08 /* Private */,
      48,    0,  308,    2, 0x08 /* Private */,
      49,    1,  309,    2, 0x08 /* Private */,
      50,    1,  312,    2, 0x08 /* Private */,
      52,    1,  315,    2, 0x08 /* Private */,
      54,    1,  318,    2, 0x08 /* Private */,
      55,    0,  321,    2, 0x08 /* Private */,
      56,    0,  322,    2, 0x08 /* Private */,
      57,    0,  323,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      58,    1,  324,    2, 0x02 /* Public */,
      60,    2,  327,    2, 0x02 /* Public */,
      63,    2,  332,    2, 0x02 /* Public */,
      64,    3,  337,    2, 0x02 /* Public */,
      67,    3,  344,    2, 0x02 /* Public */,
      69,    1,  351,    2, 0x02 /* Public */,
      71,    0,  354,    2, 0x02 /* Public */,
      72,    2,  355,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   41,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Int, 0x80000000 | 26, QMetaType::Int,   61,   62,
    QMetaType::Int, 0x80000000 | 26, QMetaType::Int,   61,   62,
    QMetaType::Int, QMetaType::QString, 0x80000000 | 26, QMetaType::Int,   65,   66,   62,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,   65,   68,   62,
    QMetaType::Void, QMetaType::Int,   70,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   45,   73,

 // properties: name, type, flags
      74, 0x80000000 | 75, 0x00495009,
      76, 0x80000000 | 75, 0x00495009,
      77, QMetaType::QVariantList, 0x00495001,
      78, QMetaType::QStringList, 0x00495001,
      27, 0x80000000 | 26, 0x00495009,
      29, QMetaType::Double, 0x00495001,
      36, QMetaType::Int, 0x00495001,
      31, QMetaType::Int, 0x00495001,
      79, QMetaType::Int, 0x00495001,
      80, QMetaType::Int, 0x00495001,
      81, 0x80000000 | 82, 0x00495009,
       7, QMetaType::Double, 0x00495001,
      83, QMetaType::Double, 0x00495001,
      10, QMetaType::Double, 0x00495001,
      13, QMetaType::Double, 0x00495001,
      84, QMetaType::Double, 0x00495001,
      85, QMetaType::Double, 0x00495001,
      16, QMetaType::Double, 0x00495001,
      22, QMetaType::Int, 0x00495001,
      24, QMetaType::Int, 0x00495001,
      86, 0x80000000 | 87, 0x00495009,
      88, QMetaType::QString, 0x00095401,
      89, QMetaType::QString, 0x00095401,
      90, QMetaType::QString, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       2,
      11,
      17,
      18,
      23,
      19,
      12,
      20,
      21,
       4,
       5,
       6,
       8,
       7,
       9,
      10,
      15,
      16,
      22,
       0,
       0,
       0,

       0        // eod
};

void MissionController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MissionController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visualItemsChanged(); break;
        case 1: _t->waypointLinesChanged(); break;
        case 2: _t->waypointPathChanged(); break;
        case 3: _t->newItemsFromVehicle(); break;
        case 4: _t->missionDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->missionTimeChanged(); break;
        case 6: _t->missionHoverDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->missionHoverTimeChanged(); break;
        case 8: _t->missionCruiseDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->missionCruiseTimeChanged(); break;
        case 10: _t->missionMaxTelemetryChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->complexMissionItemNamesChanged(); break;
        case 12: _t->resumeMissionIndexChanged(); break;
        case 13: _t->resumeMissionReady(); break;
        case 14: _t->resumeMissionUploadFail(); break;
        case 15: _t->batteryChangePointChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->batteriesRequiredChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->plannedHomePositionChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 18: _t->progressPctChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->currentMissionIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->currentPlanViewIndexChanged(); break;
        case 21: _t->currentPlanViewItemChanged(); break;
        case 22: _t->missionBoundingCubeChanged(); break;
        case 23: _t->missionItemCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->_newMissionItemsAvailableFromVehicle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->_itemCommandChanged(); break;
        case 26: _t->_managerVehicleHomePositionChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 27: _t->_inProgressChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->_currentMissionIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->_recalcWaypointLines(); break;
        case 30: _t->_recalcMissionFlightStatus(); break;
        case 31: _t->_updateContainsItems(); break;
        case 32: _t->_progressPctChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 33: _t->_visualItemsDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->_managerSendComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->_managerRemoveAllComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->_updateTimeout(); break;
        case 37: _t->_complexBoundingBoxChanged(); break;
        case 38: _t->_recalcAll(); break;
        case 39: _t->removeMissionItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: { int _r = _t->insertSimpleMissionItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 41: { int _r = _t->insertROIMissionItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 42: { int _r = _t->insertComplexMissionItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QGeoCoordinate(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 43: { int _r = _t->insertComplexMissionItemFromKMLOrSHP((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 44: _t->resumeMission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->applyDefaultMissionAltitude(); break;
        case 46: _t->setCurrentPlanViewIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::visualItemsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::waypointLinesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::waypointPathChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::newItemsFromVehicle)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionDistanceChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionTimeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionHoverDistanceChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionHoverTimeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionCruiseDistanceChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionCruiseTimeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionMaxTelemetryChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::complexMissionItemNamesChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::resumeMissionIndexChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::resumeMissionReady)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::resumeMissionUploadFail)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::batteryChangePointChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::batteriesRequiredChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::plannedHomePositionChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::progressPctChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::currentMissionIndexChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::currentPlanViewIndexChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::currentPlanViewItemChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionBoundingCubeChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionItemCountChanged)) {
                *result = 23;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 20:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCGeoBoundingCube* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MissionController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->visualItems(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->waypointLines(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->waypointPath(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->complexMissionItemNames(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->plannedHomePosition(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->progressPct(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->missionItemCount(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->currentMissionIndex(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->resumeMissionIndex(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->currentPlanViewIndex(); break;
        case 10: *reinterpret_cast< VisualMissionItem**>(_v) = _t->currentPlanViewItem(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->missionDistance(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->missionTime(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->missionHoverDistance(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->missionCruiseDistance(); break;
        case 15: *reinterpret_cast< double*>(_v) = _t->missionHoverTime(); break;
        case 16: *reinterpret_cast< double*>(_v) = _t->missionCruiseTime(); break;
        case 17: *reinterpret_cast< double*>(_v) = _t->missionMaxTelemetry(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->batteryChangePoint(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->batteriesRequired(); break;
        case 20: *reinterpret_cast< QGCGeoBoundingCube**>(_v) = _t->travelBoundingCube(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->surveyComplexItemName(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->corridorScanComplexItemName(); break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->structureScanComplexItemName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MissionController::staticMetaObject = { {
    &PlanElementController::staticMetaObject,
    qt_meta_stringdata_MissionController.data,
    qt_meta_data_MissionController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MissionController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionController.stringdata0))
        return static_cast<void*>(this);
    return PlanElementController::qt_metacast(_clname);
}

int MissionController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanElementController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 24;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 24;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MissionController::visualItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MissionController::waypointLinesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MissionController::waypointPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MissionController::newItemsFromVehicle()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MissionController::missionDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MissionController::missionTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MissionController::missionHoverDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MissionController::missionHoverTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MissionController::missionCruiseDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MissionController::missionCruiseTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MissionController::missionMaxTelemetryChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MissionController::complexMissionItemNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MissionController::resumeMissionIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MissionController::resumeMissionReady()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MissionController::resumeMissionUploadFail()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MissionController::batteryChangePointChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MissionController::batteriesRequiredChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MissionController::plannedHomePositionChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MissionController::progressPctChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MissionController::currentMissionIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MissionController::currentPlanViewIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MissionController::currentPlanViewItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MissionController::missionBoundingCubeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MissionController::missionItemCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
