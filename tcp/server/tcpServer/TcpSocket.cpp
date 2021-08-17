#include "TcpSocket.h"

TcpSocket::TcpSocket(QObject *parent)
{
    connect(this,SIGNAL(readyRead()),this,SLOT(dataReceived()));
    connect(this,SIGNAL(disconnected()),this,SLOT(slotDisconnected()));
}

void TcpSocket::dataReceived()
{
    while (this->bytesAvailable()>0)
    {
        QByteArray datagram;//定义一个字节数组类对象
        datagram.resize(this->bytesAvailable());//根据缓冲数据设置字节数组大小
        this->read(datagram.data(),datagram.size());//读取缓冲区的数据
        QString msg=datagram.data();
        emit updateClients(msg,datagram.size());//发送信号给server
    }
}

void TcpSocket::slotDisconnected()
{
    emit disconnected(this->socketDescriptor());
}
