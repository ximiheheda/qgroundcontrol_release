/****************************************************************************
** Meta object code from reading C++ file 'ParameterEditorController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgroundcontrol/src/QmlControls/ParameterEditorController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterEditorController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParameterEditorController_t {
    QByteArrayData data[28];
    char stringdata0[399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterEditorController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterEditorController_t qt_meta_stringdata_ParameterEditorController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ParameterEditorController"
QT_MOC_LITERAL(1, 26, 17), // "searchTextChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "searchText"
QT_MOC_LITERAL(4, 56, 22), // "currentCategoryChanged"
QT_MOC_LITERAL(5, 79, 8), // "category"
QT_MOC_LITERAL(6, 88, 19), // "currentGroupChanged"
QT_MOC_LITERAL(7, 108, 5), // "group"
QT_MOC_LITERAL(8, 114, 16), // "showErrorMessage"
QT_MOC_LITERAL(9, 131, 8), // "errorMsg"
QT_MOC_LITERAL(10, 140, 17), // "_updateParameters"
QT_MOC_LITERAL(11, 158, 20), // "getGroupsForCategory"
QT_MOC_LITERAL(12, 179, 16), // "searchParameters"
QT_MOC_LITERAL(13, 196, 12), // "searchInName"
QT_MOC_LITERAL(14, 209, 20), // "searchInDescriptions"
QT_MOC_LITERAL(15, 230, 14), // "clearRCToParam"
QT_MOC_LITERAL(16, 245, 10), // "saveToFile"
QT_MOC_LITERAL(17, 256, 8), // "filename"
QT_MOC_LITERAL(18, 265, 12), // "loadFromFile"
QT_MOC_LITERAL(19, 278, 7), // "refresh"
QT_MOC_LITERAL(20, 286, 18), // "resetAllToDefaults"
QT_MOC_LITERAL(21, 305, 12), // "setRCToParam"
QT_MOC_LITERAL(22, 318, 9), // "paramName"
QT_MOC_LITERAL(23, 328, 15), // "currentCategory"
QT_MOC_LITERAL(24, 344, 12), // "currentGroup"
QT_MOC_LITERAL(25, 357, 10), // "parameters"
QT_MOC_LITERAL(26, 368, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(27, 388, 10) // "categories"

    },
    "ParameterEditorController\0searchTextChanged\0"
    "\0searchText\0currentCategoryChanged\0"
    "category\0currentGroupChanged\0group\0"
    "showErrorMessage\0errorMsg\0_updateParameters\0"
    "getGroupsForCategory\0searchParameters\0"
    "searchInName\0searchInDescriptions\0"
    "clearRCToParam\0saveToFile\0filename\0"
    "loadFromFile\0refresh\0resetAllToDefaults\0"
    "setRCToParam\0paramName\0currentCategory\0"
    "currentGroup\0parameters\0QmlObjectListModel*\0"
    "categories"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterEditorController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       5,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       6,    1,   95,    2, 0x06 /* Public */,
       8,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  101,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    1,  102,    2, 0x02 /* Public */,
      12,    3,  105,    2, 0x02 /* Public */,
      12,    2,  112,    2, 0x22 /* Public | MethodCloned */,
      12,    1,  117,    2, 0x22 /* Public | MethodCloned */,
      15,    0,  120,    2, 0x02 /* Public */,
      16,    1,  121,    2, 0x02 /* Public */,
      18,    1,  124,    2, 0x02 /* Public */,
      19,    0,  127,    2, 0x02 /* Public */,
      20,    0,  128,    2, 0x02 /* Public */,
      21,    1,  129,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QStringList, QMetaType::QString,    5,
    QMetaType::QStringList, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    3,   13,   14,
    QMetaType::QStringList, QMetaType::QString, QMetaType::Bool,    3,   13,
    QMetaType::QStringList, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495003,
      23, QMetaType::QString, 0x00495003,
      24, QMetaType::QString, 0x00495003,
      25, 0x80000000 | 26, 0x00095409,
      27, QMetaType::QStringList, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       0,

       0        // eod
};

void ParameterEditorController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterEditorController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->currentCategoryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->currentGroupChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->showErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->_updateParameters(); break;
        case 5: { QStringList _r = _t->getGroupsForCategory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: { QStringList _r = _t->searchParameters((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 7: { QStringList _r = _t->searchParameters((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 8: { QStringList _r = _t->searchParameters((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->clearRCToParam(); break;
        case 10: _t->saveToFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->loadFromFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->refresh(); break;
        case 13: _t->resetAllToDefaults(); break;
        case 14: _t->setRCToParam((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParameterEditorController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::searchTextChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::currentCategoryChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::currentGroupChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterEditorController::showErrorMessage)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterEditorController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_searchText; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_currentCategory; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_currentGroup; break;
        case 3: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_parameters; break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->_categories; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ParameterEditorController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_searchText != *reinterpret_cast< QString*>(_v)) {
                _t->_searchText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->searchTextChanged(_t->_searchText);
            }
            break;
        case 1:
            if (_t->_currentCategory != *reinterpret_cast< QString*>(_v)) {
                _t->_currentCategory = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->currentCategoryChanged(_t->_currentCategory);
            }
            break;
        case 2:
            if (_t->_currentGroup != *reinterpret_cast< QString*>(_v)) {
                _t->_currentGroup = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->currentGroupChanged(_t->_currentGroup);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ParameterEditorController::staticMetaObject = { {
    &FactPanelController::staticMetaObject,
    qt_meta_stringdata_ParameterEditorController.data,
    qt_meta_data_ParameterEditorController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParameterEditorController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEditorController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterEditorController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int ParameterEditorController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ParameterEditorController::searchTextChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParameterEditorController::currentCategoryChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ParameterEditorController::currentGroupChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ParameterEditorController::showErrorMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
