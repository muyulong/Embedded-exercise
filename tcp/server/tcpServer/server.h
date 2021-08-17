#ifndef SERVER_H
#define SERVER_H

#include  <QTcpServer>
#include "TcpSocket.h"

class Server : public QTcpServer
{
    Q_OBJECT
public:
    Server(QObject *parent = 0,int port=0);
    QList <TcpSocket*> tcpSocketList;//用于保存各个客户端的TCP连接

signals:
    void updateServer(QString,int);//用于发送给界面类更新界面

public slots:
    void slotUpdateClients(QString,int);//用于将消息发给每个客户端
    void slotDisconnected(int); //用于移除断开连接的客户端socket

protected:
    void incomingConnection(int socketDescriptor);//虚函数，处理试图连接的客户端
    //将其连接句柄保存用于转发消息。
};

#endif // SERVER_H
