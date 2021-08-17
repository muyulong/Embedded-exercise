#include "server.h"

Server::Server(QObject *parent,int port) :
    QTcpServer(parent)
{
    listen(QHostAddress::Any,port);
}

void Server::slotUpdateClients(QString msg, int length)
{
    emit updateServer(msg,length);
      QTcpSocket *item=NULL;
    for(int i=0;i<tcpSocketList.count();i++)
    {
        item=tcpSocketList.at(i);
        item->write(msg.toAscii(),length);
    }
}

void Server::incomingConnection(int socketDescriptor)
{
    TcpSocket *tcpSocket=new TcpSocket(this);
    tcpSocket->setSocketDescriptor(socketDescriptor);
    connect(tcpSocket,SIGNAL(updateClients(QString,int)),this,SLOT(slotUpdateClients(QString,int)));
    connect(tcpSocket,SIGNAL(disconnected(int)),this,SLOT(slotDisconnected(int)));
    tcpSocketList.append(tcpSocket);
}

void Server::slotDisconnected(int descriptor)
{
    QTcpSocket *item=NULL;
    for(int i=0;i<tcpSocketList.count();i++)
    {
        item=tcpSocketList.at(i);
        if(item->socketDescriptor()==descriptor)
        {
            tcpSocketList.removeAt(i);
            return;
        }
    }
}
