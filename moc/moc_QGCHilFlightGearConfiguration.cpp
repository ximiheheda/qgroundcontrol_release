/****************************************************************************
** Meta object code from reading C++ file 'QGCHilFlightGearConfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/ui/QGCHilFlightGearConfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCHilFlightGearConfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCHilFlightGearConfiguration_t {
    QByteArrayData data[11];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCHilFlightGearConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCHilFlightGearConfiguration_t qt_meta_stringdata_QGCHilFlightGearConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QGCHilFlightGearConfiguration"
QT_MOC_LITERAL(1, 30, 22), // "barometerOffsetChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 18), // "barometerOffsetkPa"
QT_MOC_LITERAL(4, 73, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(5, 96, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(6, 118, 38), // "on_barometerOffsetLineEdit_te..."
QT_MOC_LITERAL(7, 157, 10), // "baroOffset"
QT_MOC_LITERAL(8, 168, 18), // "_setDefaultOptions"
QT_MOC_LITERAL(9, 187, 16), // "_showContextMenu"
QT_MOC_LITERAL(10, 204, 2) // "pt"

    },
    "QGCHilFlightGearConfiguration\0"
    "barometerOffsetChanged\0\0barometerOffsetkPa\0"
    "on_startButton_clicked\0on_stopButton_clicked\0"
    "on_barometerOffsetLineEdit_textChanged\0"
    "baroOffset\0_setDefaultOptions\0"
    "_showContextMenu\0pt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCHilFlightGearConfiguration[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,

       0        // eod
};

void QGCHilFlightGearConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCHilFlightGearConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->barometerOffsetChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->on_startButton_clicked(); break;
        case 2: _t->on_stopButton_clicked(); break;
        case 3: _t->on_barometerOffsetLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->_setDefaultOptions(); break;
        case 5: _t->_showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCHilFlightGearConfiguration::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCHilFlightGearConfiguration::barometerOffsetChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QGCHilFlightGearConfiguration::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QGCHilFlightGearConfiguration.data,
    qt_meta_data_QGCHilFlightGearConfiguration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGCHilFlightGearConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCHilFlightGearConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCHilFlightGearConfiguration.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGCHilFlightGearConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QGCHilFlightGearConfiguration::barometerOffsetChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
