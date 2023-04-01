/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../3d_viewer/widget.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    const uint offsetsAndSize[30];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 6), // "Widget"
QT_MOC_LITERAL(7, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 28), // "on_button_scale_down_clicked"
QT_MOC_LITERAL(59, 26), // "on_button_scale_up_clicked"
QT_MOC_LITERAL(86, 11), // "translation"
QT_MOC_LITERAL(98, 25), // "on_label_scale_textEdited"
QT_MOC_LITERAL(124, 4), // "arg1"
QT_MOC_LITERAL(129, 26), // "on_label_x_move_textEdited"
QT_MOC_LITERAL(156, 26), // "on_label_y_move_textEdited"
QT_MOC_LITERAL(183, 26), // "on_label_z_move_textEdited"
QT_MOC_LITERAL(210, 26), // "on_x_rotation_valueChanged"
QT_MOC_LITERAL(237, 5), // "value"
QT_MOC_LITERAL(243, 26), // "on_y_rotation_valueChanged"
QT_MOC_LITERAL(270, 26) // "on_z_rotation_valueChanged"

    },
    "Widget\0on_pushButton_clicked\0\0"
    "on_button_scale_down_clicked\0"
    "on_button_scale_up_clicked\0translation\0"
    "on_label_scale_textEdited\0arg1\0"
    "on_label_x_move_textEdited\0"
    "on_label_y_move_textEdited\0"
    "on_label_z_move_textEdited\0"
    "on_x_rotation_valueChanged\0value\0"
    "on_y_rotation_valueChanged\0"
    "on_z_rotation_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    1,   84,    2, 0x08,    5 /* Private */,
       8,    1,   87,    2, 0x08,    7 /* Private */,
       9,    1,   90,    2, 0x08,    9 /* Private */,
      10,    1,   93,    2, 0x08,   11 /* Private */,
      11,    1,   96,    2, 0x08,   13 /* Private */,
      13,    1,   99,    2, 0x08,   15 /* Private */,
      14,    1,  102,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_button_scale_down_clicked(); break;
        case 2: _t->on_button_scale_up_clicked(); break;
        case 3: _t->translation(); break;
        case 4: _t->on_label_scale_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_label_x_move_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_label_y_move_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_label_z_move_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_x_rotation_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_y_rotation_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_z_rotation_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.offsetsAndSize,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Widget_t
, QtPrivate::TypeAndForceComplete<Widget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
