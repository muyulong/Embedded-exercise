#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "qextserialport.h"
#include "win_qextserialport.h"
#include "qextserialbase.h"
#include "qextserialenumerator.h"

#include <QNetworkAccessManager>    //加载网络请求头文件
#include <QNetworkReply>
#include <QNetworkRequest>      //加载发送请求头文件

#include "dialog.h"
#include "ui_dialog.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    //串口类对象
     Win_QextSerialPort *myCom;
     //网络请求函数
     void sendData();

public slots:
     //读取串口槽函数
     void readMyCom();

private slots:
    void on_opcls_btn_clicked();

    void on_setting_btn_clicked();

    void on_strstop_btn_clicked();

    void on_send_btn_clicked();

    void on_refresh_btn_clicked();

    void on_window_btn_clicked();

    void on_pushButton_light_1_clicked();

    void on_pushButton_light_2_clicked();

    void on_pushButton_fan_1_clicked();

    void on_pushButton_fan_2_clicked();

    //接收串口类对象函数
    void rcvmyMsg(Win_QextSerialPort);
    //网络请求槽函数
//    void replyFinished(QNetworkReply*);

//    void on_pushButton_net_clicked();

    void on_pushButton_fan_all_clicked();

    void on_pushButton_light_all_clicked();

private:
    //子窗口对象
    Dialog d;
    //各状态值
    bool setCheckState;
    bool bgState;
    bool trState;
    Ui::Widget *ui;
    //网络请求对象
//    QNetworkAccessManager *manager;
//    QNetworkReply *reply;
//    QNetworkRequest request;
};

#endif // WIDGET_H
