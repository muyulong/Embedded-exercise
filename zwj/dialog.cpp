#include "dialog.h"
#include "ui_dialog.h"
#include <QtSql>
#include <QString>
#include <QMessageBox>
#include <QTextCodec>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));//支持中文显示
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/QTshiyan/ch10/sqlite-tools-win32-x86-3120200/Password.db");
    if(db.open())
        qDebug()<<"open well";
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox *mess=new QMessageBox;
    QString usestr=QString("select * from User where name=%1").arg(this->ui->lineEdit->text());
    QSqlQuery query;
    query.exec(usestr);
    if(!query.next()){
        mess->setText("用户名错误！");
        mess->show();
    }
    else{
        query.clear();
        QString psstr=QString("select * from User where password=%1").arg(this->ui->lineEdit_2->text());
        query.exec(psstr);
        if(!query.next()){
            mess->setText("密码错误！");
            mess->show();
            }
        else{
            mess->setText("登录成功！");
            mess->show();
            this->close();
        }

    }
}


void Dialog::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}
