#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialog_zc.h"
#include "dialog_tx.h"
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
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));//支持中文显示
    welcomeLable=new QLabel("welcome to my app1.0");
    this->ui->statusBar->addWidget(welcomeLable);

    timeshow=new QLabel;
    this->timeshow->setText("current Time");
    ui->statusBar->addPermanentWidget(timeshow);
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeUpdate()));
    timer->start(1000);

    ui->action_D->setStatusTip("登录");
    ui->action_M->setStatusTip("帮助");
    ui->action_3->setStatusTip("注册");
    ui->action_4->setStatusTip("修改密码");
    ui->action_5->setStatusTip("退出");
    ui->action_7->setStatusTip("通信设置");

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


void MainWindow::on_action_D_triggered()
{
    welcomeLable->setText("登录");
    qDebug("login win sppears");
    Dialog *w=new Dialog;
    w->show();
}

void MainWindow::on_action_3_triggered()
{
    welcomeLable->setText("注册");
    qDebug("login win sppears");
    Dialog_zc *w=new Dialog_zc;
    w->show();
}

void MainWindow::on_action_7_triggered()
{
    welcomeLable->setText("通信设置");
    qDebug("login win sppears");
    Dialog_tx *w=new Dialog_tx;
    w->show();
}
