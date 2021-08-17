#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QMessageBox>
#include <QTextCodec>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPixmap icon("D:/Documents/Pictures/yunxing.png");
    ui->avatarPic->setPixmap(icon);
    ui->avatarPic->resize(icon.width(),icon.height());
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Ok_Btn_clicked()
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName ("UTF8"));//中文乱码处理方法
    QMessageBox::information(NULL,"确认信息","用户名:"+ui->user->text()+
    "\n姓名: "+ui->name->text()+
    "\n性别: "+ui->sex->currentText()+
    "\n部门]: "+ui->department->toPlainText()+
    "\n年龄: "+ui->age->text()+
    "\n个人说明: "+ui->description->toPlainText(),QMessageBox::Yes | QMessageBox::No,QMessageBox::Yes);
}

