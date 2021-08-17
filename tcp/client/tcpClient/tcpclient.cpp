#include "tcpclient.h"
#include "ui_tcpclient.h"
#include  <QtNetwork>
#include <QMessageBox>

TcpClient::TcpClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TcpClient)
{
    ui->setupUi(this);

    connect(ui->PushButtonEnter,SIGNAL(clicked()),this,SLOT(slotEnter()));
    connect(ui->PushButtonSend,SIGNAL(clicked()),this,SLOT(slotSend()));

    serverIP = new QHostAddress();
    port = 8080;
    ui->LineEditPort->setText(QString::number(port));

    status=false;

    ui->PushButtonSend->setEnabled( false );

}

TcpClient::~TcpClient()
{
    delete ui;
}

void TcpClient::slotEnter()
{
    if(!status)
    {
        QString ip=ui->LineEditServerIP->text();
        if(!serverIP->setAddress(ip))
        {
            QMessageBox::information(this,tr("error"),tr("server ip address error!"));
            return;
        }
        if(ui->LineEditUser->text()=="")
        {
            QMessageBox::information(this,tr("error"),tr("User name error!"));
            return ;
        }
        userName=ui->LineEditUser->text();

        tcpSocket = new QTcpSocket(this);
        connect(tcpSocket,SIGNAL(connected()),this,SLOT(slotConnected()));
        connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(slotDisconnected()));
        connect(tcpSocket, SIGNAL(readyRead()),this, SLOT(dataReceived()));

        tcpSocket->connectToHost ( *serverIP, port);

        status=true;
    }
    else
    {
        int length = 0;

        QString msg=userName+tr(":Leave Chat Room");
        if((length=tcpSocket->write(msg.toLatin1(),msg.length()))!=msg.length())
        {
            return ;
        }
        tcpSocket->disconnectFromHost();

        status=false;
    }

}

void TcpClient::slotConnected()
{
    int length = 0;
    ui->PushButtonSend->setEnabled( true );
    ui->PushButtonEnter->setText(tr("Leave"));

    QString msg=userName+tr(":Enter Chat Room");
    if((length=tcpSocket->write(msg.toLatin1(),msg.length()))!=msg.length())
    {
        return ;
    }
}

void TcpClient::slotDisconnected()
{
    ui->PushButtonSend->setEnabled( false );
    ui->PushButtonEnter->setText(tr("Enter"));
}

void TcpClient::slotSend()
{
    if(ui->LineEditSend->text()=="")
    {
        return ;
    }

    QString msg=userName+":"+ui->LineEditSend->text();

    tcpSocket->write(msg.toLatin1(),msg.length());
    ui->LineEditSend->clear();
}

void TcpClient::dataReceived()
{
    while (tcpSocket->bytesAvailable()>0)
    {
        QByteArray datagram;
        datagram.resize(tcpSocket->bytesAvailable());
        QHostAddress sender;


        tcpSocket->read(datagram.data(), datagram.size());

        QString msg=datagram.data();

        ui->ListWidgetContent->addItem (msg.left(datagram.size()));
    }

}

