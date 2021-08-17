#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "serialOpen/comwindow.h"

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
public:
    ComWindow *pCwnd;

private slots:
    void on_comBtn_clicked();
    void dispComLbl(QString);//显示打开的串口号
    void on_pushButton_clicked();//发送到串口
    void updateReceCombox(QByteArray);//更新主界面上的接收窗口
};

#endif // MAINWIDGET_H
