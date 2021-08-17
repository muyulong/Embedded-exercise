#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qextserialport.h"
#include <QEvent>
#include <QReadWriteLock>
#include "win_qextserialport.h"
#include "qextserialbase.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    Win_QextSerialPort *myCom;


    ~MainWindow();

private slots:
    void on_openMyComBtn_clicked();

    void on_closeMyComBtn_clicked();

    void on_sendMsgBtn_clicked();

    void readMyCom();

    void on_saveMyComBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
