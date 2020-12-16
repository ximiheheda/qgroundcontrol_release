/****************************************************************************
** Meta object code from reading C++ file 'QGCCameraControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/Camera/QGCCameraControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCCameraControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCVideoStreamInfo_t {
    QByteArrayData data[9];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCVideoStreamInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCVideoStreamInfo_t qt_meta_stringdata_QGCVideoStreamInfo = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QGCVideoStreamInfo"
QT_MOC_LITERAL(1, 19, 11), // "infoChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "uri"
QT_MOC_LITERAL(4, 36, 8), // "streamID"
QT_MOC_LITERAL(5, 45, 4), // "type"
QT_MOC_LITERAL(6, 50, 11), // "aspectRatio"
QT_MOC_LITERAL(7, 62, 4), // "hfov"
QT_MOC_LITERAL(8, 67, 9) // "isThermal"

    },
    "QGCVideoStreamInfo\0infoChanged\0\0uri\0"
    "streamID\0type\0aspectRatio\0hfov\0isThermal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCVideoStreamInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       6,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495001,
       4, QMetaType::Int, 0x00495001,
       5, QMetaType::Int, 0x00495001,
       6, QMetaType::QReal, 0x00495001,
       7, QMetaType::QReal, 0x00495001,
       8, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QGCVideoStreamInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCVideoStreamInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCVideoStreamInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCVideoStreamInfo::infoChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCVideoStreamInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->uri(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->streamID(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->aspectRatio(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->hfov(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isThermal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QGCVideoStreamInfo::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QGCVideoStreamInfo.data,
    qt_meta_data_QGCVideoStreamInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCVideoStreamInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCVideoStreamInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCVideoStreamInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCVideoStreamInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCVideoStreamInfo::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QGCCameraControl_t {
    QByteArrayData data[122];
    char stringdata0[1793];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCCameraControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCCameraControl_t qt_meta_stringdata_QGCCameraControl = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QGCCameraControl"
QT_MOC_LITERAL(1, 17, 11), // "infoChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "videoStatusChanged"
QT_MOC_LITERAL(4, 49, 18), // "photoStatusChanged"
QT_MOC_LITERAL(5, 68, 16), // "photoModeChanged"
QT_MOC_LITERAL(6, 85, 17), // "photoLapseChanged"
QT_MOC_LITERAL(7, 103, 22), // "photoLapseCountChanged"
QT_MOC_LITERAL(8, 126, 17), // "cameraModeChanged"
QT_MOC_LITERAL(9, 144, 21), // "activeSettingsChanged"
QT_MOC_LITERAL(10, 166, 18), // "storageFreeChanged"
QT_MOC_LITERAL(11, 185, 19), // "storageTotalChanged"
QT_MOC_LITERAL(12, 205, 9), // "dataReady"
QT_MOC_LITERAL(13, 215, 4), // "data"
QT_MOC_LITERAL(14, 220, 15), // "parametersReady"
QT_MOC_LITERAL(15, 236, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(16, 253, 17), // "focusLevelChanged"
QT_MOC_LITERAL(17, 271, 14), // "streamsChanged"
QT_MOC_LITERAL(18, 286, 20), // "currentStreamChanged"
QT_MOC_LITERAL(19, 307, 17), // "autoStreamChanged"
QT_MOC_LITERAL(20, 325, 17), // "recordTimeChanged"
QT_MOC_LITERAL(21, 343, 14), // "_initWhenReady"
QT_MOC_LITERAL(22, 358, 22), // "_requestCameraSettings"
QT_MOC_LITERAL(23, 381, 21), // "_requestAllParameters"
QT_MOC_LITERAL(24, 403, 20), // "_requestParamUpdates"
QT_MOC_LITERAL(25, 424, 21), // "_requestCaptureStatus"
QT_MOC_LITERAL(26, 446, 19), // "_requestStorageInfo"
QT_MOC_LITERAL(27, 466, 17), // "_downloadFinished"
QT_MOC_LITERAL(28, 484, 17), // "_mavCommandResult"
QT_MOC_LITERAL(29, 502, 9), // "vehicleId"
QT_MOC_LITERAL(30, 512, 9), // "component"
QT_MOC_LITERAL(31, 522, 7), // "command"
QT_MOC_LITERAL(32, 530, 6), // "result"
QT_MOC_LITERAL(33, 537, 20), // "noReponseFromVehicle"
QT_MOC_LITERAL(34, 558, 10), // "_dataReady"
QT_MOC_LITERAL(35, 569, 10), // "_paramDone"
QT_MOC_LITERAL(36, 580, 14), // "_streamTimeout"
QT_MOC_LITERAL(37, 595, 20), // "_streamStatusTimeout"
QT_MOC_LITERAL(38, 616, 16), // "_recTimerHandler"
QT_MOC_LITERAL(39, 633, 21), // "_checkForVideoStreams"
QT_MOC_LITERAL(40, 655, 12), // "setVideoMode"
QT_MOC_LITERAL(41, 668, 12), // "setPhotoMode"
QT_MOC_LITERAL(42, 681, 10), // "toggleMode"
QT_MOC_LITERAL(43, 692, 9), // "takePhoto"
QT_MOC_LITERAL(44, 702, 13), // "stopTakePhoto"
QT_MOC_LITERAL(45, 716, 10), // "startVideo"
QT_MOC_LITERAL(46, 727, 9), // "stopVideo"
QT_MOC_LITERAL(47, 737, 11), // "toggleVideo"
QT_MOC_LITERAL(48, 749, 13), // "resetSettings"
QT_MOC_LITERAL(49, 763, 10), // "formatCard"
QT_MOC_LITERAL(50, 774, 2), // "id"
QT_MOC_LITERAL(51, 777, 8), // "stepZoom"
QT_MOC_LITERAL(52, 786, 9), // "direction"
QT_MOC_LITERAL(53, 796, 9), // "startZoom"
QT_MOC_LITERAL(54, 806, 8), // "stopZoom"
QT_MOC_LITERAL(55, 815, 10), // "stopStream"
QT_MOC_LITERAL(56, 826, 12), // "resumeStream"
QT_MOC_LITERAL(57, 839, 7), // "version"
QT_MOC_LITERAL(58, 847, 9), // "modelName"
QT_MOC_LITERAL(59, 857, 6), // "vendor"
QT_MOC_LITERAL(60, 864, 15), // "firmwareVersion"
QT_MOC_LITERAL(61, 880, 11), // "focalLength"
QT_MOC_LITERAL(62, 892, 10), // "sensorSize"
QT_MOC_LITERAL(63, 903, 10), // "resolution"
QT_MOC_LITERAL(64, 914, 13), // "capturesVideo"
QT_MOC_LITERAL(65, 928, 14), // "capturesPhotos"
QT_MOC_LITERAL(66, 943, 8), // "hasModes"
QT_MOC_LITERAL(67, 952, 7), // "hasZoom"
QT_MOC_LITERAL(68, 960, 8), // "hasFocus"
QT_MOC_LITERAL(69, 969, 14), // "hasVideoStream"
QT_MOC_LITERAL(70, 984, 17), // "photosInVideoMode"
QT_MOC_LITERAL(71, 1002, 16), // "videoInPhotoMode"
QT_MOC_LITERAL(72, 1019, 7), // "isBasic"
QT_MOC_LITERAL(73, 1027, 11), // "storageFree"
QT_MOC_LITERAL(74, 1039, 14), // "storageFreeStr"
QT_MOC_LITERAL(75, 1054, 12), // "storageTotal"
QT_MOC_LITERAL(76, 1067, 13), // "paramComplete"
QT_MOC_LITERAL(77, 1081, 9), // "zoomLevel"
QT_MOC_LITERAL(78, 1091, 10), // "focusLevel"
QT_MOC_LITERAL(79, 1102, 12), // "exposureMode"
QT_MOC_LITERAL(80, 1115, 5), // "Fact*"
QT_MOC_LITERAL(81, 1121, 2), // "ev"
QT_MOC_LITERAL(82, 1124, 3), // "iso"
QT_MOC_LITERAL(83, 1128, 12), // "shutterSpeed"
QT_MOC_LITERAL(84, 1141, 8), // "aperture"
QT_MOC_LITERAL(85, 1150, 2), // "wb"
QT_MOC_LITERAL(86, 1153, 4), // "mode"
QT_MOC_LITERAL(87, 1158, 14), // "activeSettings"
QT_MOC_LITERAL(88, 1173, 11), // "videoStatus"
QT_MOC_LITERAL(89, 1185, 11), // "VideoStatus"
QT_MOC_LITERAL(90, 1197, 11), // "photoStatus"
QT_MOC_LITERAL(91, 1209, 11), // "PhotoStatus"
QT_MOC_LITERAL(92, 1221, 10), // "cameraMode"
QT_MOC_LITERAL(93, 1232, 10), // "CameraMode"
QT_MOC_LITERAL(94, 1243, 10), // "photoLapse"
QT_MOC_LITERAL(95, 1254, 15), // "photoLapseCount"
QT_MOC_LITERAL(96, 1270, 9), // "photoMode"
QT_MOC_LITERAL(97, 1280, 9), // "PhotoMode"
QT_MOC_LITERAL(98, 1290, 13), // "currentStream"
QT_MOC_LITERAL(99, 1304, 10), // "autoStream"
QT_MOC_LITERAL(100, 1315, 7), // "streams"
QT_MOC_LITERAL(101, 1323, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(102, 1343, 21), // "currentStreamInstance"
QT_MOC_LITERAL(103, 1365, 19), // "QGCVideoStreamInfo*"
QT_MOC_LITERAL(104, 1385, 10), // "recordTime"
QT_MOC_LITERAL(105, 1396, 13), // "recordTimeStr"
QT_MOC_LITERAL(106, 1410, 18), // "CAM_MODE_UNDEFINED"
QT_MOC_LITERAL(107, 1429, 14), // "CAM_MODE_PHOTO"
QT_MOC_LITERAL(108, 1444, 14), // "CAM_MODE_VIDEO"
QT_MOC_LITERAL(109, 1459, 15), // "CAM_MODE_SURVEY"
QT_MOC_LITERAL(110, 1475, 28), // "VIDEO_CAPTURE_STATUS_STOPPED"
QT_MOC_LITERAL(111, 1504, 28), // "VIDEO_CAPTURE_STATUS_RUNNING"
QT_MOC_LITERAL(112, 1533, 25), // "VIDEO_CAPTURE_STATUS_LAST"
QT_MOC_LITERAL(113, 1559, 30), // "VIDEO_CAPTURE_STATUS_UNDEFINED"
QT_MOC_LITERAL(114, 1590, 18), // "PHOTO_CAPTURE_IDLE"
QT_MOC_LITERAL(115, 1609, 25), // "PHOTO_CAPTURE_IN_PROGRESS"
QT_MOC_LITERAL(116, 1635, 27), // "PHOTO_CAPTURE_INTERVAL_IDLE"
QT_MOC_LITERAL(117, 1663, 34), // "PHOTO_CAPTURE_INTERVAL_IN_PRO..."
QT_MOC_LITERAL(118, 1698, 18), // "PHOTO_CAPTURE_LAST"
QT_MOC_LITERAL(119, 1717, 30), // "PHOTO_CAPTURE_STATUS_UNDEFINED"
QT_MOC_LITERAL(120, 1748, 20), // "PHOTO_CAPTURE_SINGLE"
QT_MOC_LITERAL(121, 1769, 23) // "PHOTO_CAPTURE_TIMELAPSE"

    },
    "QGCCameraControl\0infoChanged\0\0"
    "videoStatusChanged\0photoStatusChanged\0"
    "photoModeChanged\0photoLapseChanged\0"
    "photoLapseCountChanged\0cameraModeChanged\0"
    "activeSettingsChanged\0storageFreeChanged\0"
    "storageTotalChanged\0dataReady\0data\0"
    "parametersReady\0zoomLevelChanged\0"
    "focusLevelChanged\0streamsChanged\0"
    "currentStreamChanged\0autoStreamChanged\0"
    "recordTimeChanged\0_initWhenReady\0"
    "_requestCameraSettings\0_requestAllParameters\0"
    "_requestParamUpdates\0_requestCaptureStatus\0"
    "_requestStorageInfo\0_downloadFinished\0"
    "_mavCommandResult\0vehicleId\0component\0"
    "command\0result\0noReponseFromVehicle\0"
    "_dataReady\0_paramDone\0_streamTimeout\0"
    "_streamStatusTimeout\0_recTimerHandler\0"
    "_checkForVideoStreams\0setVideoMode\0"
    "setPhotoMode\0toggleMode\0takePhoto\0"
    "stopTakePhoto\0startVideo\0stopVideo\0"
    "toggleVideo\0resetSettings\0formatCard\0"
    "id\0stepZoom\0direction\0startZoom\0"
    "stopZoom\0stopStream\0resumeStream\0"
    "version\0modelName\0vendor\0firmwareVersion\0"
    "focalLength\0sensorSize\0resolution\0"
    "capturesVideo\0capturesPhotos\0hasModes\0"
    "hasZoom\0hasFocus\0hasVideoStream\0"
    "photosInVideoMode\0videoInPhotoMode\0"
    "isBasic\0storageFree\0storageFreeStr\0"
    "storageTotal\0paramComplete\0zoomLevel\0"
    "focusLevel\0exposureMode\0Fact*\0ev\0iso\0"
    "shutterSpeed\0aperture\0wb\0mode\0"
    "activeSettings\0videoStatus\0VideoStatus\0"
    "photoStatus\0PhotoStatus\0cameraMode\0"
    "CameraMode\0photoLapse\0photoLapseCount\0"
    "photoMode\0PhotoMode\0currentStream\0"
    "autoStream\0streams\0QmlObjectListModel*\0"
    "currentStreamInstance\0QGCVideoStreamInfo*\0"
    "recordTime\0recordTimeStr\0CAM_MODE_UNDEFINED\0"
    "CAM_MODE_PHOTO\0CAM_MODE_VIDEO\0"
    "CAM_MODE_SURVEY\0VIDEO_CAPTURE_STATUS_STOPPED\0"
    "VIDEO_CAPTURE_STATUS_RUNNING\0"
    "VIDEO_CAPTURE_STATUS_LAST\0"
    "VIDEO_CAPTURE_STATUS_UNDEFINED\0"
    "PHOTO_CAPTURE_IDLE\0PHOTO_CAPTURE_IN_PROGRESS\0"
    "PHOTO_CAPTURE_INTERVAL_IDLE\0"
    "PHOTO_CAPTURE_INTERVAL_IN_PROGRESS\0"
    "PHOTO_CAPTURE_LAST\0PHOTO_CAPTURE_STATUS_UNDEFINED\0"
    "PHOTO_CAPTURE_SINGLE\0PHOTO_CAPTURE_TIMELAPSE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCCameraControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
      42,  322, // properties
       4,  490, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  254,    2, 0x06 /* Public */,
       3,    0,  255,    2, 0x06 /* Public */,
       4,    0,  256,    2, 0x06 /* Public */,
       5,    0,  257,    2, 0x06 /* Public */,
       6,    0,  258,    2, 0x06 /* Public */,
       7,    0,  259,    2, 0x06 /* Public */,
       8,    0,  260,    2, 0x06 /* Public */,
       9,    0,  261,    2, 0x06 /* Public */,
      10,    0,  262,    2, 0x06 /* Public */,
      11,    0,  263,    2, 0x06 /* Public */,
      12,    1,  264,    2, 0x06 /* Public */,
      14,    0,  267,    2, 0x06 /* Public */,
      15,    0,  268,    2, 0x06 /* Public */,
      16,    0,  269,    2, 0x06 /* Public */,
      17,    0,  270,    2, 0x06 /* Public */,
      18,    0,  271,    2, 0x06 /* Public */,
      19,    0,  272,    2, 0x06 /* Public */,
      20,    0,  273,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  274,    2, 0x09 /* Protected */,
      22,    0,  275,    2, 0x09 /* Protected */,
      23,    0,  276,    2, 0x09 /* Protected */,
      24,    0,  277,    2, 0x09 /* Protected */,
      25,    0,  278,    2, 0x09 /* Protected */,
      26,    0,  279,    2, 0x09 /* Protected */,
      27,    0,  280,    2, 0x09 /* Protected */,
      28,    5,  281,    2, 0x09 /* Protected */,
      34,    1,  292,    2, 0x09 /* Protected */,
      35,    0,  295,    2, 0x09 /* Protected */,
      36,    0,  296,    2, 0x09 /* Protected */,
      37,    0,  297,    2, 0x09 /* Protected */,
      38,    0,  298,    2, 0x09 /* Protected */,
      39,    0,  299,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      40,    0,  300,    2, 0x02 /* Public */,
      41,    0,  301,    2, 0x02 /* Public */,
      42,    0,  302,    2, 0x02 /* Public */,
      43,    0,  303,    2, 0x02 /* Public */,
      44,    0,  304,    2, 0x02 /* Public */,
      45,    0,  305,    2, 0x02 /* Public */,
      46,    0,  306,    2, 0x02 /* Public */,
      47,    0,  307,    2, 0x02 /* Public */,
      48,    0,  308,    2, 0x02 /* Public */,
      49,    1,  309,    2, 0x02 /* Public */,
      49,    0,  312,    2, 0x22 /* Public | MethodCloned */,
      51,    1,  313,    2, 0x02 /* Public */,
      53,    1,  316,    2, 0x02 /* Public */,
      54,    0,  319,    2, 0x02 /* Public */,
      55,    0,  320,    2, 0x02 /* Public */,
      56,    0,  321,    2, 0x02 /* Public */,

 // signals: parameters
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
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   29,   30,   31,   32,   33,
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      57, QMetaType::Int, 0x00495001,
      58, QMetaType::QString, 0x00495001,
      59, QMetaType::QString, 0x00495001,
      60, QMetaType::QString, 0x00495001,
      61, QMetaType::QReal, 0x00495001,
      62, QMetaType::QSizeF, 0x00495001,
      63, QMetaType::QSize, 0x00495001,
      64, QMetaType::Bool, 0x00495001,
      65, QMetaType::Bool, 0x00495001,
      66, QMetaType::Bool, 0x00495001,
      67, QMetaType::Bool, 0x00495001,
      68, QMetaType::Bool, 0x00495001,
      69, QMetaType::Bool, 0x00495001,
      70, QMetaType::Bool, 0x00495001,
      71, QMetaType::Bool, 0x00495001,
      72, QMetaType::Bool, 0x00495001,
      73, QMetaType::UInt, 0x00495001,
      74, QMetaType::QString, 0x00495001,
      75, QMetaType::UInt, 0x00495001,
      76, QMetaType::Bool, 0x00495001,
      77, QMetaType::QReal, 0x00495103,
      78, QMetaType::QReal, 0x00495103,
      79, 0x80000000 | 80, 0x00495009,
      81, 0x80000000 | 80, 0x00495009,
      82, 0x80000000 | 80, 0x00495009,
      83, 0x80000000 | 80, 0x00495009,
      84, 0x80000000 | 80, 0x00495009,
      85, 0x80000000 | 80, 0x00495009,
      86, 0x80000000 | 80, 0x00495009,
      87, QMetaType::QStringList, 0x00495001,
      88, 0x80000000 | 89, 0x00495009,
      90, 0x80000000 | 91, 0x00495009,
      92, 0x80000000 | 93, 0x0049510b,
      94, QMetaType::QReal, 0x00495103,
      95, QMetaType::Int, 0x00495103,
      96, 0x80000000 | 97, 0x0049510b,
      98, QMetaType::Int, 0x00495103,
      99, QMetaType::Bool, 0x00495001,
     100, 0x80000000 | 101, 0x00495009,
     102, 0x80000000 | 103, 0x00495009,
     104, QMetaType::UInt, 0x00495001,
     105, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       8,
       8,
       9,
      11,
      12,
      13,
      11,
      11,
      11,
      11,
      11,
      11,
      11,
       7,
       1,
       2,
       6,
       4,
       5,
       3,
      15,
      16,
      14,
      15,
      17,
      17,

 // enums: name, alias, flags, count, data
      93,   93, 0x0,    4,  510,
      89,   89, 0x0,    4,  518,
      91,   91, 0x0,    6,  526,
      97,   97, 0x0,    2,  538,

 // enum data: key, value
     106, uint(QGCCameraControl::CAM_MODE_UNDEFINED),
     107, uint(QGCCameraControl::CAM_MODE_PHOTO),
     108, uint(QGCCameraControl::CAM_MODE_VIDEO),
     109, uint(QGCCameraControl::CAM_MODE_SURVEY),
     110, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_STOPPED),
     111, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_RUNNING),
     112, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_LAST),
     113, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_UNDEFINED),
     114, uint(QGCCameraControl::PHOTO_CAPTURE_IDLE),
     115, uint(QGCCameraControl::PHOTO_CAPTURE_IN_PROGRESS),
     116, uint(QGCCameraControl::PHOTO_CAPTURE_INTERVAL_IDLE),
     117, uint(QGCCameraControl::PHOTO_CAPTURE_INTERVAL_IN_PROGRESS),
     118, uint(QGCCameraControl::PHOTO_CAPTURE_LAST),
     119, uint(QGCCameraControl::PHOTO_CAPTURE_STATUS_UNDEFINED),
     120, uint(QGCCameraControl::PHOTO_CAPTURE_SINGLE),
     121, uint(QGCCameraControl::PHOTO_CAPTURE_TIMELAPSE),

       0        // eod
};

void QGCCameraControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoChanged(); break;
        case 1: _t->videoStatusChanged(); break;
        case 2: _t->photoStatusChanged(); break;
        case 3: _t->photoModeChanged(); break;
        case 4: _t->photoLapseChanged(); break;
        case 5: _t->photoLapseCountChanged(); break;
        case 6: _t->cameraModeChanged(); break;
        case 7: _t->activeSettingsChanged(); break;
        case 8: _t->storageFreeChanged(); break;
        case 9: _t->storageTotalChanged(); break;
        case 10: _t->dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 11: _t->parametersReady(); break;
        case 12: _t->zoomLevelChanged(); break;
        case 13: _t->focusLevelChanged(); break;
        case 14: _t->streamsChanged(); break;
        case 15: _t->currentStreamChanged(); break;
        case 16: _t->autoStreamChanged(); break;
        case 17: _t->recordTimeChanged(); break;
        case 18: _t->_initWhenReady(); break;
        case 19: _t->_requestCameraSettings(); break;
        case 20: _t->_requestAllParameters(); break;
        case 21: _t->_requestParamUpdates(); break;
        case 22: _t->_requestCaptureStatus(); break;
        case 23: _t->_requestStorageInfo(); break;
        case 24: _t->_downloadFinished(); break;
        case 25: _t->_mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 26: _t->_dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 27: _t->_paramDone(); break;
        case 28: _t->_streamTimeout(); break;
        case 29: _t->_streamStatusTimeout(); break;
        case 30: _t->_recTimerHandler(); break;
        case 31: _t->_checkForVideoStreams(); break;
        case 32: _t->setVideoMode(); break;
        case 33: _t->setPhotoMode(); break;
        case 34: _t->toggleMode(); break;
        case 35: { bool _r = _t->takePhoto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->stopTakePhoto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->startVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { bool _r = _t->stopVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->toggleVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->resetSettings(); break;
        case 41: _t->formatCard((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->formatCard(); break;
        case 43: _t->stepZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->startZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->stopZoom(); break;
        case 46: _t->stopStream(); break;
        case 47: _t->resumeStream(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::infoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::videoStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoLapseChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoLapseCountChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::cameraModeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::activeSettingsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::storageFreeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::storageTotalChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::dataReady)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::parametersReady)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::zoomLevelChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::focusLevelChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::streamsChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::currentStreamChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::autoStreamChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QGCCameraControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::recordTimeChanged)) {
                *result = 17;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 28:
        case 27:
        case 26:
        case 25:
        case 24:
        case 23:
        case 22:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 39:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCVideoStreamInfo* >(); break;
        case 38:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->version(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->modelName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->vendor(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->firmwareVersion(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->focalLength(); break;
        case 5: *reinterpret_cast< QSizeF*>(_v) = _t->sensorSize(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = _t->resolution(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->capturesVideo(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->capturesPhotos(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hasModes(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->hasZoom(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->hasFocus(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->hasVideoStream(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->photosInVideoMode(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->videoInPhotoMode(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->isBasic(); break;
        case 16: *reinterpret_cast< quint32*>(_v) = _t->storageFree(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->storageFreeStr(); break;
        case 18: *reinterpret_cast< quint32*>(_v) = _t->storageTotal(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->paramComplete(); break;
        case 20: *reinterpret_cast< qreal*>(_v) = _t->zoomLevel(); break;
        case 21: *reinterpret_cast< qreal*>(_v) = _t->focusLevel(); break;
        case 22: *reinterpret_cast< Fact**>(_v) = _t->exposureMode(); break;
        case 23: *reinterpret_cast< Fact**>(_v) = _t->ev(); break;
        case 24: *reinterpret_cast< Fact**>(_v) = _t->iso(); break;
        case 25: *reinterpret_cast< Fact**>(_v) = _t->shutterSpeed(); break;
        case 26: *reinterpret_cast< Fact**>(_v) = _t->aperture(); break;
        case 27: *reinterpret_cast< Fact**>(_v) = _t->wb(); break;
        case 28: *reinterpret_cast< Fact**>(_v) = _t->mode(); break;
        case 29: *reinterpret_cast< QStringList*>(_v) = _t->activeSettings(); break;
        case 30: *reinterpret_cast< VideoStatus*>(_v) = _t->videoStatus(); break;
        case 31: *reinterpret_cast< PhotoStatus*>(_v) = _t->photoStatus(); break;
        case 32: *reinterpret_cast< CameraMode*>(_v) = _t->cameraMode(); break;
        case 33: *reinterpret_cast< qreal*>(_v) = _t->photoLapse(); break;
        case 34: *reinterpret_cast< int*>(_v) = _t->photoLapseCount(); break;
        case 35: *reinterpret_cast< PhotoMode*>(_v) = _t->photoMode(); break;
        case 36: *reinterpret_cast< int*>(_v) = _t->currentStream(); break;
        case 37: *reinterpret_cast< bool*>(_v) = _t->autoStream(); break;
        case 38: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->streams(); break;
        case 39: *reinterpret_cast< QGCVideoStreamInfo**>(_v) = _t->currentStreamInstance(); break;
        case 40: *reinterpret_cast< quint32*>(_v) = _t->recordTime(); break;
        case 41: *reinterpret_cast< QString*>(_v) = _t->recordTimeStr(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 20: _t->setZoomLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 21: _t->setFocusLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 32: _t->setCameraMode(*reinterpret_cast< CameraMode*>(_v)); break;
        case 33: _t->setPhotoLapse(*reinterpret_cast< qreal*>(_v)); break;
        case 34: _t->setPhotoLapseCount(*reinterpret_cast< int*>(_v)); break;
        case 35: _t->setPhotoMode(*reinterpret_cast< PhotoMode*>(_v)); break;
        case 36: _t->setCurrentStream(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QGCCameraControl::staticMetaObject = { {
    &FactGroup::staticMetaObject,
    qt_meta_stringdata_QGCCameraControl.data,
    qt_meta_data_QGCCameraControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCCameraControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCameraControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCameraControl.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int QGCCameraControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 42;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCCameraControl::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCCameraControl::videoStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCCameraControl::photoStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCCameraControl::photoModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCCameraControl::photoLapseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCCameraControl::photoLapseCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGCCameraControl::cameraModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGCCameraControl::activeSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGCCameraControl::storageFreeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGCCameraControl::storageTotalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCCameraControl::dataReady(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QGCCameraControl::parametersReady()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QGCCameraControl::zoomLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QGCCameraControl::focusLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QGCCameraControl::streamsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QGCCameraControl::currentStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QGCCameraControl::autoStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QGCCameraControl::recordTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
