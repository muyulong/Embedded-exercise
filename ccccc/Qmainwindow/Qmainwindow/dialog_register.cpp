#include "dialog_register.h"
#include "ui_dialog_register.h"
#include <QtSql>
#include <QString>
#include <QMessageBox>
#include <QTextCodec>

Dialog_register::Dialog_register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_register)
{
    ui->setupUi(this);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));//支持中文显示
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/sqlite/test.db");
    if(db.open())
        qDebug()<<"open well";
}

Dialog_register::~Dialog_register()
{
    delete ui;
}
void Dialog_register::on_pushButton_clear_clicked()
{
    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();
    ui->lineEdit_Repassword->clear();
}

void Dialog_register::on_pushButton_register_clicked()
{
    QMessageBox *mess=new QMessageBox;
    QString Allstr="select * from User";
    QSqlQuery query;
    query.exec(Allstr);
    while(!query.next()){
        if(query.value(0).toString()== ui->lineEdit_username->text())
        {
            break;
        }
    }
    if(query.value(0).toString()!= ui->lineEdit_password->text()){
        query.clear();
        if(ui->lineEdit_password->text()!=ui->lineEdit_Repassword->text())
        {
            mess->setText("两次密码输入不同！");
            mess->show();
        }
        else
        {
            QString Insertstr=QString("insert into User values('%1','%2')").arg(ui->lineEdit_username->text()).arg(ui->lineEdit_password->text());
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
