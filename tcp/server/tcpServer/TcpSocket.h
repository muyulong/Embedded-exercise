#ifndef TCPSOCKET_H
#define TCPSOCKET_H

#include <QTcpSocket>
#include <QObject>
#include <string.h>
#include <QtNetwork>

class TcpSocket:public QTcpSocket
{
    Q_OBJECT
public:
    TcpSocket(QObject *parent = 0);

signals:
    void updateClients(QString,int);
    void disconnected(int);
protected slots:
    void dataReceived();
    void slotDisconnected();
};

#endif // TCPSOCKET_H
