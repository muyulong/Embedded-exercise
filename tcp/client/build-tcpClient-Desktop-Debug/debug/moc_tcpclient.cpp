/****************************************************************************
** Meta object code from reading C++ file 'tcpclient.h'
**
** Created: Tue May 11 11:48:03 2021
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tcpClient/tcpclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TcpClient[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      23,   10,   10,   10, 0x08,
      34,   10,   10,   10, 0x08,
      50,   10,   10,   10, 0x08,
      69,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TcpClient[] = {
    "TcpClient\0\0slotEnter()\0slotSend()\0"
    "slotConnected()\0slotDisconnected()\0"
    "dataReceived()\0"
};

const QMetaObject TcpClient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TcpClient,
      qt_meta_data_TcpClient, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TcpClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TcpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TcpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TcpClient))
        return static_cast<void*>(const_cast< TcpClient*>(this));
    return QWidget::qt_metacast(_clname);
}

int TcpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotEnter(); break;
        case 1: slotSend(); break;
        case 2: slotConnected(); break;
        case 3: slotDisconnected(); break;
        case 4: dataReceived(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
