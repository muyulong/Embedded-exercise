#include "dialog_zc.h"
#include "ui_dialog_zc.h"
#include <QtSql>
#include <QString>
#include <QMessageBox>
#include <QTextCodec>

Dialog_zc::Dialog_zc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_zc)
{
    ui->setupUi(this);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));//支持中文显示
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/QTshiyan/ch10/sqlite-tools-win32-x86-3120200/Password.db");
    if(db.open())
        qDebug()<<"open well";
}

Dialog_zc::~Dialog_zc()
{
    delete ui;
}

void Dialog_zc::on_pushButton_3_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
}

void Dialog_zc::on_pushButton_clicked()
{
    QMessageBox *mess=new QMessageBox;
    QString Allstr=QString("select * from User");
    QSqlQuery query;
    query.exec(Allstr);
    while(!query.next()){
        if(query.value(0).toString()== ui->lineEdit->text())
        {
            break;
        }
    }
    if(query.value(0).toString()!= ui->lineEdit->text()){
        query.clear();
        if(ui->lineEdit_2->text()!=ui->lineEdit_3->text())
        {
            mess->setText("两次密码输入不同！");
            mess->show();
        }
        else
        {
            QString Insertstr=QString("insert into User values(%1,%2)").arg(ui->lineEdit->text()).arg(ui->lineEdit_3->text());
            query.exec(Insertstr);
            mess->setText("注册成功！");
            mess->show();
            this->close();
        }
    }
    else
    {
        mess->setText("用户名已被使用！");
        mess->show();
    }

}
