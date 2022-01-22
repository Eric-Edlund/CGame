/****************************************************************************
** Meta object code from reading C++ file 'gamebuilder.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../gamebuilder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamebuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameBuilder_t {
    const uint offsetsAndSize[18];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_GameBuilder_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_GameBuilder_t qt_meta_stringdata_GameBuilder = {
    {
QT_MOC_LITERAL(0, 11), // "GameBuilder"
QT_MOC_LITERAL(12, 9), // "gameReady"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 5), // "Game*"
QT_MOC_LITERAL(29, 4), // "game"
QT_MOC_LITERAL(34, 20), // "buildPercentProgress"
QT_MOC_LITERAL(55, 1), // "p"
QT_MOC_LITERAL(57, 15), // "startedBuilding"
QT_MOC_LITERAL(73, 20) // "buildGameFromScratch"

    },
    "GameBuilder\0gameReady\0\0Game*\0game\0"
    "buildPercentProgress\0p\0startedBuilding\0"
    "buildGameFromScratch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameBuilder[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       5,    1,   41,    2, 0x06,    3 /* Public */,
       7,    0,   44,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   45,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GameBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameBuilder *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gameReady((*reinterpret_cast< Game*(*)>(_a[1]))); break;
        case 1: _t->buildPercentProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->startedBuilding(); break;
        case 3: _t->buildGameFromScratch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameBuilder::*)(Game * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameBuilder::gameReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameBuilder::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameBuilder::buildPercentProgress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameBuilder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameBuilder::startedBuilding)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GameBuilder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GameBuilder.offsetsAndSize,
    qt_meta_data_GameBuilder,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GameBuilder_t
, QtPrivate::TypeAndForceComplete<GameBuilder, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Game *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *GameBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameBuilder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GameBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void GameBuilder::gameReady(Game * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameBuilder::buildPercentProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GameBuilder::startedBuilding()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
