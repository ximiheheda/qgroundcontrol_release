/****************************************************************************
** Meta object code from reading C++ file 'VideoSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/Settings/VideoSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoSettings_t {
    QByteArrayData data[25];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoSettings_t qt_meta_stringdata_VideoSettings = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VideoSettings"
QT_MOC_LITERAL(1, 14, 23), // "streamConfiguredChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "_configChanged"
QT_MOC_LITERAL(4, 54, 5), // "value"
QT_MOC_LITERAL(5, 60, 11), // "videoSource"
QT_MOC_LITERAL(6, 72, 5), // "Fact*"
QT_MOC_LITERAL(7, 78, 7), // "udpPort"
QT_MOC_LITERAL(8, 86, 6), // "tcpUrl"
QT_MOC_LITERAL(9, 93, 7), // "rtspUrl"
QT_MOC_LITERAL(10, 101, 11), // "aspectRatio"
QT_MOC_LITERAL(11, 113, 8), // "videoFit"
QT_MOC_LITERAL(12, 122, 9), // "gridLines"
QT_MOC_LITERAL(13, 132, 14), // "showRecControl"
QT_MOC_LITERAL(14, 147, 15), // "recordingFormat"
QT_MOC_LITERAL(15, 163, 12), // "maxVideoSize"
QT_MOC_LITERAL(16, 176, 18), // "enableStorageLimit"
QT_MOC_LITERAL(17, 195, 11), // "rtspTimeout"
QT_MOC_LITERAL(18, 207, 13), // "streamEnabled"
QT_MOC_LITERAL(19, 221, 19), // "disableWhenDisarmed"
QT_MOC_LITERAL(20, 241, 16), // "streamConfigured"
QT_MOC_LITERAL(21, 258, 15), // "rtspVideoSource"
QT_MOC_LITERAL(22, 274, 14), // "udpVideoSource"
QT_MOC_LITERAL(23, 289, 14), // "tcpVideoSource"
QT_MOC_LITERAL(24, 304, 17) // "mpegtsVideoSource"

    },
    "VideoSettings\0streamConfiguredChanged\0"
    "\0_configChanged\0value\0videoSource\0"
    "Fact*\0udpPort\0tcpUrl\0rtspUrl\0aspectRatio\0"
    "videoFit\0gridLines\0showRecControl\0"
    "recordingFormat\0maxVideoSize\0"
    "enableStorageLimit\0rtspTimeout\0"
    "streamEnabled\0disableWhenDisarmed\0"
    "streamConfigured\0rtspVideoSource\0"
    "udpVideoSource\0tcpVideoSource\0"
    "mpegtsVideoSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
      19,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00095409,
       7, 0x80000000 | 6, 0x00095409,
       8, 0x80000000 | 6, 0x00095409,
       9, 0x80000000 | 6, 0x00095409,
      10, 0x80000000 | 6, 0x00095409,
      11, 0x80000000 | 6, 0x00095409,
      12, 0x80000000 | 6, 0x00095409,
      13, 0x80000000 | 6, 0x00095409,
      14, 0x80000000 | 6, 0x00095409,
      15, 0x80000000 | 6, 0x00095409,
      16, 0x80000000 | 6, 0x00095409,
      17, 0x80000000 | 6, 0x00095409,
      18, 0x80000000 | 6, 0x00095409,
      19, 0x80000000 | 6, 0x00095409,
      20, QMetaType::Bool, 0x00495001,
      21, QMetaType::QString, 0x00095401,
      22, QMetaType::QString, 0x00095401,
      23, QMetaType::QString, 0x00095401,
      24, QMetaType::QString, 0x00095401,

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
       0,
       0,
       0,

       0        // eod
};

void VideoSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->streamConfiguredChanged(); break;
        case 1: _t->_configChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoSettings::streamConfiguredChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
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
        auto *_t = static_cast<VideoSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->videoSource(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->udpPort(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->tcpUrl(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->rtspUrl(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->aspectRatio(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->videoFit(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->gridLines(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->showRecControl(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->recordingFormat(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->maxVideoSize(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->enableStorageLimit(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->rtspTimeout(); break;
        case 12: *reinterpret_cast< Fact**>(_v) = _t->streamEnabled(); break;
        case 13: *reinterpret_cast< Fact**>(_v) = _t->disableWhenDisarmed(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->streamConfigured(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->rtspVideoSource(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->udpVideoSource(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->tcpVideoSource(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->mpegtsVideoSource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VideoSettings::staticMetaObject = { {
    &SettingsGroup::staticMetaObject,
    qt_meta_stringdata_VideoSettings.data,
    qt_meta_data_VideoSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoSettings.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int VideoSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 19;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VideoSettings::streamConfiguredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
