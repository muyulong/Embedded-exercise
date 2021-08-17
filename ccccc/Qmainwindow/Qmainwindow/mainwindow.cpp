#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_login.h"
#include "dialog_communication.h"
#include "dialog_register.h"
#include <QDebug>
#include<QLabel>
#include <QTimer>
#include <QDateTime>
#include <QString>
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/new/app.ico"));
    //设置图标
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));//支持中文显示
    welcomeLable=new QLabel("欢迎使用本系统！");
    this->ui->statusBar->addWidget(welcomeLable);

    timeshow=new QLabel;
    this->timeshow->setText("current Time");
    ui->statusBar->addPermanentWidget(timeshow);
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeUpdate()));
    timer->start(1000);

    ui->action_L->setStatusTip("登录");
    ui->action_R->setStatusTip("注册");
    ui->action_M->setStatusTip("修改密码");
    ui->action_X->setStatusTip("退出");
    ui->action_C->setStatusTip("收发字符");
    ui->action_F->setStatusTip("收发文件");
    ui->action_V->setStatusTip("查看文件");
    ui->action_H->setStatusTip("查看帮助");
    ui->action_F_2->setStatusTip("意见反馈");
    ui->action_A->setStatusTip("关于系统");
    ui->action_S->setStatusTip("通信设置");
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::timeUpdate(){
    QDateTime current_time=QDateTime::currentDateTime();//获取时间
    QString timerstr=current_time.toString("yyyy/MM/dd hh:mm:ss");//转换格式
    this->timeshow->setText(timerstr);//修改标签
}


void MainWindow::on_action_L_triggered()
{
    welcomeLable->setText("登录");
    qDebug("login win sppears");
    Dialog *w=new Dialog;
    w->show();
}

void MainWindow::on_action_R_triggered()
{
    welcomeLable->setText("注册");
    qDebug("login win sppears");
    Dialog_register *w=new Dialog_register;
    w->show();
}

void MainWindow::on_action_S_triggered()
{
    welcomeLable->setText("通信设置");
    qDebug("login win sppears");
    Dialog_communication *w=new Dialog_communication;
    w->show();
}

void MainWindow::on_action_E_triggered()
{
    new_mainw = new  new_main;
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    new_mainw->setWindowTitle("串口参数设置");
    new_mainw->show();
}
