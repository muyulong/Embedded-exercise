#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QWidget>
#include  <QtNetwork>

namespace Ui {
class TcpClient;
}

class TcpClient : public QWidget
{
    Q_OBJECT

public:
    explicit TcpClient(QWidget *parent = 0);
    ~TcpClient();
    QHostAddress *serverIP;
    int port;
    bool status;
    QString userName;
    QTcpSocket *tcpSocket;


private slots:
void slotEnter();
void slotSend();
void slotConnected();
void slotDisconnected();
void dataReceived();

private:
    Ui::TcpClient *ui;
};

#endif // TCPCLIENT_H
