/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Tue Jul 6 21:23:07 2021
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../iot/widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      20,    7,    7,    7, 0x08,
      43,    7,    7,    7, 0x08,
      68,    7,    7,    7, 0x08,
      93,    7,    7,    7, 0x08,
     115,    7,    7,    7, 0x08,
     140,    7,    7,    7, 0x08,
     164,    7,    7,    7, 0x08,
     196,    7,    7,    7, 0x08,
     228,    7,    7,    7, 0x08,
     258,    7,    7,    7, 0x08,
     288,    7,    7,    7, 0x08,
     317,    7,    7,    7, 0x08,
     349,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0readMyCom()\0on_opcls_btn_clicked()\0"
    "on_setting_btn_clicked()\0"
    "on_strstop_btn_clicked()\0on_send_btn_clicked()\0"
    "on_refresh_btn_clicked()\0"
    "on_window_btn_clicked()\0"
    "on_pushButton_light_1_clicked()\0"
    "on_pushButton_light_2_clicked()\0"
    "on_pushButton_fan_1_clicked()\0"
    "on_pushButton_fan_2_clicked()\0"
    "rcvmyMsg(Win_QextSerialPort)\0"
    "on_pushButton_fan_all_clicked()\0"
    "on_pushButton_light_all_clicked()\0"
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readMyCom(); break;
        case 1: on_opcls_btn_clicked(); break;
        case 2: on_setting_btn_clicked(); break;
        case 3: on_strstop_btn_clicked(); break;
        case 4: on_send_btn_clicked(); break;
        case 5: on_refresh_btn_clicked(); break;
        case 6: on_window_btn_clicked(); break;
        case 7: on_pushButton_light_1_clicked(); break;
        case 8: on_pushButton_light_2_clicked(); break;
        case 9: on_pushButton_fan_1_clicked(); break;
        case 10: on_pushButton_fan_2_clicked(); break;
        case 11: rcvmyMsg((*reinterpret_cast< Win_QextSerialPort(*)>(_a[1]))); break;
        case 12: on_pushButton_fan_all_clicked(); break;
        case 13: on_pushButton_light_all_clicked(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
