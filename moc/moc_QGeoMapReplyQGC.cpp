/****************************************************************************
** Meta object code from reading C++ file 'QGeoMapReplyQGC.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/QtLocationPlugin/QGeoMapReplyQGC.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGeoMapReplyQGC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoTiledMapReplyQGC_t {
    QByteArrayData data[16];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoTiledMapReplyQGC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoTiledMapReplyQGC_t qt_meta_stringdata_QGeoTiledMapReplyQGC = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QGeoTiledMapReplyQGC"
QT_MOC_LITERAL(1, 21, 11), // "terrainDone"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "responseBytes"
QT_MOC_LITERAL(4, 48, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 76, 5), // "error"
QT_MOC_LITERAL(6, 82, 20), // "networkReplyFinished"
QT_MOC_LITERAL(7, 103, 17), // "networkReplyError"
QT_MOC_LITERAL(8, 121, 10), // "cacheReply"
QT_MOC_LITERAL(9, 132, 13), // "QGCCacheTile*"
QT_MOC_LITERAL(10, 146, 4), // "tile"
QT_MOC_LITERAL(11, 151, 10), // "cacheError"
QT_MOC_LITERAL(12, 162, 20), // "QGCMapTask::TaskType"
QT_MOC_LITERAL(13, 183, 4), // "type"
QT_MOC_LITERAL(14, 188, 11), // "errorString"
QT_MOC_LITERAL(15, 200, 7) // "timeout"

    },
    "QGeoTiledMapReplyQGC\0terrainDone\0\0"
    "responseBytes\0QNetworkReply::NetworkError\0"
    "error\0networkReplyFinished\0networkReplyError\0"
    "cacheReply\0QGCCacheTile*\0tile\0cacheError\0"
    "QGCMapTask::TaskType\0type\0errorString\0"
    "timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoTiledMapReplyQGC[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,
      11,    2,   56,    2, 0x08 /* Private */,
      15,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,   13,   14,
    QMetaType::Void,

       0        // eod
};

void QGeoTiledMapReplyQGC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGeoTiledMapReplyQGC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->terrainDone((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2]))); break;
        case 1: _t->networkReplyFinished(); break;
        case 2: _t->networkReplyError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 3: _t->cacheReply((*reinterpret_cast< QGCCacheTile*(*)>(_a[1]))); break;
        case 4: _t->cacheError((*reinterpret_cast< QGCMapTask::TaskType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCacheTile* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGeoTiledMapReplyQGC::*)(QByteArray , QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoTiledMapReplyQGC::terrainDone)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QGeoTiledMapReplyQGC::staticMetaObject = { {
    &QGeoTiledMapReply::staticMetaObject,
    qt_meta_stringdata_QGeoTiledMapReplyQGC.data,
    qt_meta_data_QGeoTiledMapReplyQGC,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGeoTiledMapReplyQGC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoTiledMapReplyQGC::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoTiledMapReplyQGC.stringdata0))
        return static_cast<void*>(this);
    return QGeoTiledMapReply::qt_metacast(_clname);
}

int QGeoTiledMapReplyQGC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoTiledMapReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QGeoTiledMapReplyQGC::terrainDone(QByteArray _t1, QNetworkReply::NetworkError _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
