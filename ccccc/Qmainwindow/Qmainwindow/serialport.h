#ifndef NEW_MAIN_H
#define NEW_MAIN_H

#include <QMainWindow>
#include "qextserialport.h"
#include <QEvent>
#include <QReadWriteLock>
#include "win_qextserialport.h"
#include "qextserialbase.h"

namespace Ui {
class new_main;
}

class new_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit new_main(QWidget *parent = 0);

     Win_QextSerialPort *myCom;

    ~new_main();

private slots:
    void on_openMyComBtn_clicked();

    void on_closeMyComBtn_clicked();

    void on_sendMsgBtn_clicked();

    void readMyCom();

    void on_saveMyComBtn_clicked();

private:
    Ui::new_main *ui;
};

#endif // NEW_MAIN_H
