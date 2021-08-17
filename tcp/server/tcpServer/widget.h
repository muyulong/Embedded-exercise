#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "server.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    int port;
    Server *server;

private:
    Ui::Widget *ui;

public slots:
void slotUpdateServer(QString msg, int length);
//由到消息后更新界面. msg为收到的消息，length为其长度

private slots:
    void on_pushButtonCreate_clicked();
};

#endif // WIDGET_H
