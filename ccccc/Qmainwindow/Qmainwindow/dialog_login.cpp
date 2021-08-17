#include "dialog_login.h"
#include "ui_dialog_login.h"
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
    db.setDatabaseName("C:/sqlite/test.db");
    if(db.open())
        qDebug()<<"open well";
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_login_clicked()
{
    QMessageBox *mess=new QMessageBox;
    QString usestr=QString("select * from User where username='%1'").arg(this->ui->lineEdit_usernane->text());
    QSqlQuery query;
    query.exec(usestr);
    if(!query.next()){
        mess->setText("用户名错误！");
        mess->show();
    }
    else{
        query.clear();
        QString psstr=QString("select * from User where password='%1'").arg(this->ui->lineEdit_password->text());
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


void Dialog::on_pushButton_clear_clicked()
{
    ui->lineEdit_password->clear();
    ui->lineEdit_usernane->clear();
}
