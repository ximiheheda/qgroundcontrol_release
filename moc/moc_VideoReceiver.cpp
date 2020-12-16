/****************************************************************************
** Meta object code from reading C++ file 'VideoReceiver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/VideoStreaming/VideoReceiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoReceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoReceiver_t {
    QByteArrayData data[32];
    char stringdata0[431];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoReceiver_t qt_meta_stringdata_VideoReceiver = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VideoReceiver"
QT_MOC_LITERAL(1, 14, 19), // "videoRunningChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "imageFileChanged"
QT_MOC_LITERAL(4, 52, 16), // "videoFileChanged"
QT_MOC_LITERAL(5, 69, 21), // "showFullScreenChanged"
QT_MOC_LITERAL(6, 91, 16), // "recordingChanged"
QT_MOC_LITERAL(7, 108, 16), // "msgErrorReceived"
QT_MOC_LITERAL(8, 125, 14), // "msgEOSReceived"
QT_MOC_LITERAL(9, 140, 23), // "msgStateChangedReceived"
QT_MOC_LITERAL(10, 164, 5), // "start"
QT_MOC_LITERAL(11, 170, 4), // "stop"
QT_MOC_LITERAL(12, 175, 6), // "setUri"
QT_MOC_LITERAL(13, 182, 3), // "uri"
QT_MOC_LITERAL(14, 186, 13), // "stopRecording"
QT_MOC_LITERAL(15, 200, 14), // "startRecording"
QT_MOC_LITERAL(16, 215, 9), // "videoFile"
QT_MOC_LITERAL(17, 225, 12), // "_updateTimer"
QT_MOC_LITERAL(18, 238, 8), // "_timeout"
QT_MOC_LITERAL(19, 247, 10), // "_connected"
QT_MOC_LITERAL(20, 258, 12), // "_socketError"
QT_MOC_LITERAL(21, 271, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(22, 300, 11), // "socketError"
QT_MOC_LITERAL(23, 312, 12), // "_handleError"
QT_MOC_LITERAL(24, 325, 10), // "_handleEOS"
QT_MOC_LITERAL(25, 336, 19), // "_handleStateChanged"
QT_MOC_LITERAL(26, 356, 9), // "recording"
QT_MOC_LITERAL(27, 366, 12), // "videoSurface"
QT_MOC_LITERAL(28, 379, 13), // "VideoSurface*"
QT_MOC_LITERAL(29, 393, 12), // "videoRunning"
QT_MOC_LITERAL(30, 406, 9), // "imageFile"
QT_MOC_LITERAL(31, 416, 14) // "showFullScreen"

    },
    "VideoReceiver\0videoRunningChanged\0\0"
    "imageFileChanged\0videoFileChanged\0"
    "showFullScreenChanged\0recordingChanged\0"
    "msgErrorReceived\0msgEOSReceived\0"
    "msgStateChangedReceived\0start\0stop\0"
    "setUri\0uri\0stopRecording\0startRecording\0"
    "videoFile\0_updateTimer\0_timeout\0"
    "_connected\0_socketError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "_handleError\0_handleEOS\0_handleStateChanged\0"
    "recording\0videoSurface\0VideoSurface*\0"
    "videoRunning\0imageFile\0showFullScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoReceiver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       6,  146, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    0,  120,    2, 0x06 /* Public */,
       4,    0,  121,    2, 0x06 /* Public */,
       5,    0,  122,    2, 0x06 /* Public */,
       6,    0,  123,    2, 0x06 /* Public */,
       7,    0,  124,    2, 0x06 /* Public */,
       8,    0,  125,    2, 0x06 /* Public */,
       9,    0,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  127,    2, 0x0a /* Public */,
      11,    0,  128,    2, 0x0a /* Public */,
      12,    1,  129,    2, 0x0a /* Public */,
      14,    0,  132,    2, 0x0a /* Public */,
      15,    1,  133,    2, 0x0a /* Public */,
      15,    0,  136,    2, 0x2a /* Public | MethodCloned */,
      17,    0,  137,    2, 0x09 /* Protected */,
      18,    0,  138,    2, 0x09 /* Protected */,
      19,    0,  139,    2, 0x09 /* Protected */,
      20,    1,  140,    2, 0x09 /* Protected */,
      23,    0,  143,    2, 0x09 /* Protected */,
      24,    0,  144,    2, 0x09 /* Protected */,
      25,    0,  145,    2, 0x09 /* Protected */,

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
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      26, QMetaType::Bool, 0x00495001,
      27, 0x80000000 | 28, 0x00095409,
      29, QMetaType::Bool, 0x00495001,
      30, QMetaType::QString, 0x00495001,
      16, QMetaType::QString, 0x00495001,
      31, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       4,
       0,
       0,
       1,
       2,
       3,

       0        // eod
};

void VideoReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoReceiver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->videoRunningChanged(); break;
        case 1: _t->imageFileChanged(); break;
        case 2: _t->videoFileChanged(); break;
        case 3: _t->showFullScreenChanged(); break;
        case 4: _t->recordingChanged(); break;
        case 5: _t->msgErrorReceived(); break;
        case 6: _t->msgEOSReceived(); break;
        case 7: _t->msgStateChangedReceived(); break;
        case 8: _t->start(); break;
        case 9: _t->stop(); break;
        case 10: _t->setUri((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->stopRecording(); break;
        case 12: _t->startRecording((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->startRecording(); break;
        case 14: _t->_updateTimer(); break;
        case 15: _t->_timeout(); break;
        case 16: _t->_connected(); break;
        case 17: _t->_socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 18: _t->_handleError(); break;
        case 19: _t->_handleEOS(); break;
        case 20: _t->_handleStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoReceiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::videoRunningChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::imageFileChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::videoFileChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::showFullScreenChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::recordingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::msgErrorReceived)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::msgEOSReceived)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VideoReceiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::msgStateChangedReceived)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VideoSurface* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VideoReceiver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->recording(); break;
        case 1: *reinterpret_cast< VideoSurface**>(_v) = _t->videoSurface(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->videoRunning(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->imageFile(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->videoFile(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showFullScreen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VideoReceiver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setShowFullScreen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VideoReceiver::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_VideoReceiver.data,
    qt_meta_data_VideoReceiver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoReceiver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
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
void VideoReceiver::videoRunningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VideoReceiver::imageFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VideoReceiver::videoFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VideoReceiver::showFullScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void VideoReceiver::recordingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void VideoReceiver::msgErrorReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VideoReceiver::msgEOSReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void VideoReceiver::msgStateChangedReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
