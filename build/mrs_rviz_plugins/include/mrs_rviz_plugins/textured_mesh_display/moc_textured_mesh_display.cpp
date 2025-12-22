/****************************************************************************
** Meta object code from reading C++ file 'textured_mesh_display.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/mrs_uav_modules/ros_packages/mrs_rviz_plugins/include/mrs_rviz_plugins/textured_mesh_display/textured_mesh_display.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textured_mesh_display.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mrs_rviz_plugins__TexturedMeshDisplay_t {
    QByteArrayData data[10];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mrs_rviz_plugins__TexturedMeshDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mrs_rviz_plugins__TexturedMeshDisplay_t qt_meta_stringdata_mrs_rviz_plugins__TexturedMeshDisplay = {
    {
QT_MOC_LITERAL(0, 0, 37), // "mrs_rviz_plugins::TexturedMes..."
QT_MOC_LITERAL(1, 38, 11), // "updateTopic"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15), // "updateQueueSize"
QT_MOC_LITERAL(4, 67, 17), // "updatePolygonMode"
QT_MOC_LITERAL(5, 85, 19), // "updateShaderProgram"
QT_MOC_LITERAL(6, 105, 18), // "updatePhongShading"
QT_MOC_LITERAL(7, 124, 21), // "updateSceneColorScale"
QT_MOC_LITERAL(8, 146, 17), // "updateShowNormals"
QT_MOC_LITERAL(9, 164, 16) // "updateNormalSize"

    },
    "mrs_rviz_plugins::TexturedMeshDisplay\0"
    "updateTopic\0\0updateQueueSize\0"
    "updatePolygonMode\0updateShaderProgram\0"
    "updatePhongShading\0updateSceneColorScale\0"
    "updateShowNormals\0updateNormalSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mrs_rviz_plugins__TexturedMeshDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mrs_rviz_plugins::TexturedMeshDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TexturedMeshDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateTopic(); break;
        case 1: _t->updateQueueSize(); break;
        case 2: _t->updatePolygonMode(); break;
        case 3: _t->updateShaderProgram(); break;
        case 4: _t->updatePhongShading(); break;
        case 5: _t->updateSceneColorScale(); break;
        case 6: _t->updateShowNormals(); break;
        case 7: _t->updateNormalSize(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mrs_rviz_plugins::TexturedMeshDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Display::staticMetaObject>(),
    qt_meta_stringdata_mrs_rviz_plugins__TexturedMeshDisplay.data,
    qt_meta_data_mrs_rviz_plugins__TexturedMeshDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mrs_rviz_plugins::TexturedMeshDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mrs_rviz_plugins::TexturedMeshDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mrs_rviz_plugins__TexturedMeshDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Display::qt_metacast(_clname);
}

int mrs_rviz_plugins::TexturedMeshDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Display::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
