/****************************************************************************
** Meta object code from reading C++ file 'visual.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/mrs_uav_modules/ros_packages/mrs_rviz_plugins/include/mrs_rviz_plugins/sphere/visual.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visual.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mrs_rviz_plugins__sphere__Visual_t {
    QByteArrayData data[20];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mrs_rviz_plugins__sphere__Visual_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mrs_rviz_plugins__sphere__Visual_t qt_meta_stringdata_mrs_rviz_plugins__sphere__Visual = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mrs_rviz_plugins::sphere::Visual"
QT_MOC_LITERAL(1, 33, 23), // "onViewControllerChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 10), // "fillCircle"
QT_MOC_LITERAL(4, 69, 19), // "Ogre::ManualObject*"
QT_MOC_LITERAL(5, 89, 6), // "circle"
QT_MOC_LITERAL(6, 96, 1), // "x"
QT_MOC_LITERAL(7, 98, 1), // "y"
QT_MOC_LITERAL(8, 100, 1), // "z"
QT_MOC_LITERAL(9, 102, 1), // "r"
QT_MOC_LITERAL(10, 104, 16), // "Ogre::Quaternion"
QT_MOC_LITERAL(11, 121, 1), // "q"
QT_MOC_LITERAL(12, 123, 5), // "n_pts"
QT_MOC_LITERAL(13, 129, 10), // "initCircle"
QT_MOC_LITERAL(14, 140, 11), // "std::string"
QT_MOC_LITERAL(15, 152, 4), // "name"
QT_MOC_LITERAL(16, 157, 6), // "dashed"
QT_MOC_LITERAL(17, 164, 10), // "freeCircle"
QT_MOC_LITERAL(18, 175, 20), // "Ogre::ManualObject*&"
QT_MOC_LITERAL(19, 196, 10) // "circle_ptr"

    },
    "mrs_rviz_plugins::sphere::Visual\0"
    "onViewControllerChanged\0\0fillCircle\0"
    "Ogre::ManualObject*\0circle\0x\0y\0z\0r\0"
    "Ogre::Quaternion\0q\0n_pts\0initCircle\0"
    "std::string\0name\0dashed\0freeCircle\0"
    "Ogre::ManualObject*&\0circle_ptr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mrs_rviz_plugins__sphere__Visual[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    7,   45,    2, 0x08 /* Private */,
       3,    6,   60,    2, 0x28 /* Private | MethodCloned */,
      13,    8,   73,    2, 0x08 /* Private */,
      13,    7,   90,    2, 0x28 /* Private | MethodCloned */,
      17,    1,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 10, QMetaType::Int,    5,    6,    7,    8,    9,   11,   12,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 10,    5,    6,    7,    8,    9,   11,
    0x80000000 | 4, 0x80000000 | 14, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 10, QMetaType::Bool, QMetaType::Int,   15,    6,    7,    8,    9,   11,   16,   12,
    0x80000000 | 4, 0x80000000 | 14, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 10, QMetaType::Bool,   15,    6,    7,    8,    9,   11,   16,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void mrs_rviz_plugins::sphere::Visual::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Visual *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onViewControllerChanged(); break;
        case 1: _t->fillCircle((*reinterpret_cast< Ogre::ManualObject*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const Ogre::Quaternion(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 2: _t->fillCircle((*reinterpret_cast< Ogre::ManualObject*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const Ogre::Quaternion(*)>(_a[6]))); break;
        case 3: { Ogre::ManualObject* _r = _t->initCircle((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const Ogre::Quaternion(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< Ogre::ManualObject**>(_a[0]) = std::move(_r); }  break;
        case 4: { Ogre::ManualObject* _r = _t->initCircle((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const Ogre::Quaternion(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< Ogre::ManualObject**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->freeCircle((*reinterpret_cast< Ogre::ManualObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mrs_rviz_plugins::sphere::Visual::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mrs_rviz_plugins__sphere__Visual.data,
    qt_meta_data_mrs_rviz_plugins__sphere__Visual,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mrs_rviz_plugins::sphere::Visual::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mrs_rviz_plugins::sphere::Visual::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mrs_rviz_plugins__sphere__Visual.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mrs_rviz_plugins::sphere::Visual::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
