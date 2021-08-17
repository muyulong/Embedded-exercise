#ifndef COMWINDOW_H
#define COMWINDOW_H

#include <QWidget>
#include "win_qextserialport.h"  //

namespace Ui {
    class ComWindow;
}

class ComWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ComWindow(QWidget *parent = 0);
    ~ComWindow();

private:
    Ui::ComWindow *ui;
public:
    Win_QextSerialPort *myCom;  //

signals:
    void portNameSelect(QString); //used to send porname to mainwindow to display.
    void msgFromCom(QByteArray);//used to update the mainwindow.
 private slots:
     void on_sendMsgBtn_clicked();
     void on_closeMyComBtn_clicked();
     void on_openMyComBtn_clicked();
     void readMyCom();  //

};

#endif // COMWINDOW_H
