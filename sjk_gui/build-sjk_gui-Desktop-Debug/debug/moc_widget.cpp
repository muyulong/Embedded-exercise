/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Sat Apr 24 18:32:17 2021
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sjk_gui/widget.h"
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
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      32,    7,    7,    7, 0x08,
      56,    7,    7,    7, 0x08,
      79,    7,    7,    7, 0x08,
     110,  102,    7,    7, 0x08,
     136,    7,    7,    7, 0x08,
     159,    7,    7,    7, 0x08,
     184,    7,    7,    7, 0x08,
     209,    7,    7,    7, 0x08,
     232,    7,    7,    7, 0x08,
     256,    7,    7,    7, 0x08,
     280,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0on_initButton_clicked()\0"
    "on_listButton_clicked()\0on_addButton_clicked()\0"
    "on_delButton_clicked()\0checked\0"
    "on_checkBox_clicked(bool)\0"
    "on_modButton_clicked()\0on_queryButton_clicked()\0"
    "on_beginButton_clicked()\0"
    "on_endButton_clicked()\0on_prevButton_clicked()\0"
    "on_nextButton_clicked()\0"
    "on_locateButton_clicked()\0"
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
        case 0: on_initButton_clicked(); break;
        case 1: on_listButton_clicked(); break;
        case 2: on_addButton_clicked(); break;
        case 3: on_delButton_clicked(); break;
        case 4: on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_modButton_clicked(); break;
        case 6: on_queryButton_clicked(); break;
        case 7: on_beginButton_clicked(); break;
        case 8: on_endButton_clicked(); break;
        case 9: on_prevButton_clicked(); break;
        case 10: on_nextButton_clicked(); break;
        case 11: on_locateButton_clicked(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
