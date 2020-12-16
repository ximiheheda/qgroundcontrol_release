/****************************************************************************
** Meta object code from reading C++ file 'VideoManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/FlightDisplay/VideoManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoManager_t {
    QByteArrayData data[32];
    char stringdata0[469];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoManager_t qt_meta_stringdata_VideoManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "VideoManager"
QT_MOC_LITERAL(1, 13, 15), // "hasVideoChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "isGStreamerChanged"
QT_MOC_LITERAL(4, 49, 20), // "videoSourceIDChanged"
QT_MOC_LITERAL(5, 70, 17), // "fullScreenChanged"
QT_MOC_LITERAL(6, 88, 19), // "isAutoStreamChanged"
QT_MOC_LITERAL(7, 108, 16), // "isTaisyncChanged"
QT_MOC_LITERAL(8, 125, 18), // "aspectRatioChanged"
QT_MOC_LITERAL(9, 144, 27), // "autoStreamConfiguredChanged"
QT_MOC_LITERAL(10, 172, 19), // "_videoSourceChanged"
QT_MOC_LITERAL(11, 192, 15), // "_udpPortChanged"
QT_MOC_LITERAL(12, 208, 15), // "_rtspUrlChanged"
QT_MOC_LITERAL(13, 224, 14), // "_tcpUrlChanged"
QT_MOC_LITERAL(14, 239, 10), // "_updateUVC"
QT_MOC_LITERAL(15, 250, 17), // "_setActiveVehicle"
QT_MOC_LITERAL(16, 268, 8), // "Vehicle*"
QT_MOC_LITERAL(17, 277, 7), // "vehicle"
QT_MOC_LITERAL(18, 285, 19), // "_aspectRatioChanged"
QT_MOC_LITERAL(19, 305, 13), // "_restartVideo"
QT_MOC_LITERAL(20, 319, 10), // "startVideo"
QT_MOC_LITERAL(21, 330, 9), // "stopVideo"
QT_MOC_LITERAL(22, 340, 8), // "hasVideo"
QT_MOC_LITERAL(23, 349, 11), // "isGStreamer"
QT_MOC_LITERAL(24, 361, 9), // "isTaisync"
QT_MOC_LITERAL(25, 371, 13), // "videoSourceID"
QT_MOC_LITERAL(26, 385, 10), // "uvcEnabled"
QT_MOC_LITERAL(27, 396, 10), // "fullScreen"
QT_MOC_LITERAL(28, 407, 13), // "videoReceiver"
QT_MOC_LITERAL(29, 421, 14), // "VideoReceiver*"
QT_MOC_LITERAL(30, 436, 11), // "aspectRatio"
QT_MOC_LITERAL(31, 448, 20) // "autoStreamConfigured"

    },
    "VideoManager\0hasVideoChanged\0\0"
    "isGStreamerChanged\0videoSourceIDChanged\0"
    "fullScreenChanged\0isAutoStreamChanged\0"
    "isTaisyncChanged\0aspectRatioChanged\0"
    "autoStreamConfiguredChanged\0"
    "_videoSourceChanged\0_udpPortChanged\0"
    "_rtspUrlChanged\0_tcpUrlChanged\0"
    "_updateUVC\0_setActiveVehicle\0Vehicle*\0"
    "vehicle\0_aspectRatioChanged\0_restartVideo\0"
    "startVideo\0stopVideo\0hasVideo\0isGStreamer\0"
    "isTaisync\0videoSourceID\0uvcEnabled\0"
    "fullScreen\0videoReceiver\0VideoReceiver*\0"
    "aspectRatio\0autoStreamConfigured"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       9,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,
       6,    0,  108,    2, 0x06 /* Public */,
       7,    0,  109,    2, 0x06 /* Public */,
       8,    0,  110,    2, 0x06 /* Public */,
       9,    0,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    1,  117,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      20,    0,  122,    2, 0x02 /* Public */,
      21,    0,  123,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
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
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::Bool, 0x00495001,
      23, QMetaType::Bool, 0x00495001,
      24, QMetaType::Bool, 0x00495103,
      25, QMetaType::QString, 0x00495001,
      26, QMetaType::Bool, 0x00095401,
      27, QMetaType::Bool, 0x00495003,
      28, 0x80000000 | 29, 0x00095409,
      30, QMetaType::Double, 0x00495001,
      31, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       5,
       2,
       0,
       3,
       0,
       6,
       7,

       0        // eod
};

void VideoManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hasVideoChanged(); break;
        case 1: _t->isGStreamerChanged(); break;
        case 2: _t->videoSourceIDChanged(); break;
        case 3: _t->fullScreenChanged(); break;
        case 4: _t->isAutoStreamChanged(); break;
        case 5: _t->isTaisyncChanged(); break;
        case 6: _t->aspectRatioChanged(); break;
        case 7: _t->autoStreamConfiguredChanged(); break;
        case 8: _t->_videoSourceChanged(); break;
        case 9: _t->_udpPortChanged(); break;
        case 10: _t->_rtspUrlChanged(); break;
        case 11: _t->_tcpUrlChanged(); break;
        case 12: _t->_updateUVC(); break;
        case 13: _t->_setActiveVehicle((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 14: _t->_aspectRatioChanged(); break;
        case 15: _t->_restartVideo(); break;
        case 16: _t->startVideo(); break;
        case 17: _t->stopVideo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::hasVideoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::isGStreamerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::videoSourceIDChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::fullScreenChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::isAutoStreamChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::isTaisyncChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::aspectRatioChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VideoManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::autoStreamConfiguredChanged)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VideoReceiver* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VideoManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasVideo(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isGStreamer(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isTaisync(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->videoSourceID(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->uvcEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->fullScreen(); break;
        case 6: *reinterpret_cast< VideoReceiver**>(_v) = _t->videoReceiver(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->aspectRatio(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->autoStreamConfigured(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VideoManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setIsTaisync(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setfullScreen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VideoManager::staticMetaObject = { {
    &QGCTool::staticMetaObject,
    qt_meta_stringdata_VideoManager.data,
    qt_meta_data_VideoManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int VideoManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VideoManager::hasVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VideoManager::isGStreamerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VideoManager::videoSourceIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VideoManager::fullScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void VideoManager::isAutoStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void VideoManager::isTaisyncChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VideoManager::aspectRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void VideoManager::autoStreamConfiguredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
