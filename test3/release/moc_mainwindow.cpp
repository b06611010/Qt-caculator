/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "on_pb_zero_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "on_pb_one_clicked"
QT_MOC_LITERAL(4, 49, 19), // "on_pb_clear_clicked"
QT_MOC_LITERAL(5, 69, 17), // "on_pb_two_clicked"
QT_MOC_LITERAL(6, 87, 19), // "on_pb_three_clicked"
QT_MOC_LITERAL(7, 107, 18), // "on_pb_four_clicked"
QT_MOC_LITERAL(8, 126, 18), // "on_pb_five_clicked"
QT_MOC_LITERAL(9, 145, 17), // "on_pb_six_clicked"
QT_MOC_LITERAL(10, 163, 19), // "on_pb_seven_clicked"
QT_MOC_LITERAL(11, 183, 19), // "on_pb_eight_clicked"
QT_MOC_LITERAL(12, 203, 18), // "on_pb_nine_clicked"
QT_MOC_LITERAL(13, 222, 18), // "on_screen_overflow"
QT_MOC_LITERAL(14, 241, 18), // "on_pb_plus_clicked"
QT_MOC_LITERAL(15, 260, 19), // "on_pb_equal_clicked"
QT_MOC_LITERAL(16, 280, 19), // "on_pb_minus_clicked"
QT_MOC_LITERAL(17, 300, 19), // "on_pb_multi_clicked"
QT_MOC_LITERAL(18, 320, 20), // "on_pb_divide_clicked"
QT_MOC_LITERAL(19, 341, 17) // "on_pb_dot_clicked"

    },
    "MainWindow\0on_pb_zero_clicked\0\0"
    "on_pb_one_clicked\0on_pb_clear_clicked\0"
    "on_pb_two_clicked\0on_pb_three_clicked\0"
    "on_pb_four_clicked\0on_pb_five_clicked\0"
    "on_pb_six_clicked\0on_pb_seven_clicked\0"
    "on_pb_eight_clicked\0on_pb_nine_clicked\0"
    "on_screen_overflow\0on_pb_plus_clicked\0"
    "on_pb_equal_clicked\0on_pb_minus_clicked\0"
    "on_pb_multi_clicked\0on_pb_divide_clicked\0"
    "on_pb_dot_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pb_zero_clicked(); break;
        case 1: _t->on_pb_one_clicked(); break;
        case 2: _t->on_pb_clear_clicked(); break;
        case 3: _t->on_pb_two_clicked(); break;
        case 4: _t->on_pb_three_clicked(); break;
        case 5: _t->on_pb_four_clicked(); break;
        case 6: _t->on_pb_five_clicked(); break;
        case 7: _t->on_pb_six_clicked(); break;
        case 8: _t->on_pb_seven_clicked(); break;
        case 9: _t->on_pb_eight_clicked(); break;
        case 10: _t->on_pb_nine_clicked(); break;
        case 11: _t->on_screen_overflow(); break;
        case 12: _t->on_pb_plus_clicked(); break;
        case 13: _t->on_pb_equal_clicked(); break;
        case 14: _t->on_pb_minus_clicked(); break;
        case 15: _t->on_pb_multi_clicked(); break;
        case 16: _t->on_pb_divide_clicked(); break;
        case 17: _t->on_pb_dot_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
