/****************************************************************************
** Meta object code from reading C++ file 'mapmaker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mapmaker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapmaker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapMaker_t {
    const uint offsetsAndSize[24];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MapMaker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MapMaker_t qt_meta_stringdata_MapMaker = {
    {
QT_MOC_LITERAL(0, 8), // "MapMaker"
QT_MOC_LITERAL(9, 12), // "doneBuilding"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 13), // "startBuilding"
QT_MOC_LITERAL(37, 12), // "widthChanged"
QT_MOC_LITERAL(50, 1), // "w"
QT_MOC_LITERAL(52, 13), // "heightChanged"
QT_MOC_LITERAL(66, 8), // "setWidth"
QT_MOC_LITERAL(75, 9), // "setHeight"
QT_MOC_LITERAL(85, 1), // "h"
QT_MOC_LITERAL(87, 11), // "updateWidth"
QT_MOC_LITERAL(99, 12) // "updateHeight"

    },
    "MapMaker\0doneBuilding\0\0startBuilding\0"
    "widthChanged\0w\0heightChanged\0setWidth\0"
    "setHeight\0h\0updateWidth\0updateHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapMaker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    1,   64,    2, 0x06,    3 /* Public */,
       6,    1,   67,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   70,    2, 0x0a,    7 /* Public */,
       8,    1,   73,    2, 0x0a,    9 /* Public */,
      10,    1,   76,    2, 0x0a,   11 /* Public */,
      11,    1,   79,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void MapMaker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapMaker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->doneBuilding(); break;
        case 1: _t->startBuilding(); break;
        case 2: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapMaker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapMaker::doneBuilding)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapMaker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapMaker::startBuilding)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MapMaker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapMaker::widthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MapMaker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapMaker::heightChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MapMaker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MapMaker.offsetsAndSize,
    qt_meta_data_MapMaker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MapMaker_t
, QtPrivate::TypeAndForceComplete<MapMaker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MapMaker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapMaker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapMaker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MapMaker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MapMaker::doneBuilding()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MapMaker::startBuilding()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MapMaker::widthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MapMaker::heightChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
