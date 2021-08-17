#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include "qextserialport.h"
#include "win_qextserialport.h"
#include "qextserialbase.h"
#include "qextserialenumerator.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    //串口类对象
    Win_QextSerialPort *myCom;
    //串口名
    QString comName;

signals:
    //切换窗口信号
     void mysignal();
     //传递串口对象信号
     void myMsg(Win_QextSerialPort);
     //传递串口名信号
     void myPort(QString);

public slots:
    //切换窗口槽
    void sendMysignal();

private slots:
    //点击事件槽函数
    void on_ok_btn_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
