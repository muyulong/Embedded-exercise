#include "widget.h"
#include "ui_widget.h"
#include"QMessageBox"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    if(ui->comboBox->currentIndex()==0)
    {
    //加法
    ui->lineEdit_Result->setText(QString::number(ui->lineEdit_Num1->text().toDouble()+ui->lineEdit_Num2->text().toDouble()));
     result_Check();
    }
    if(ui->comboBox->currentIndex()==1)
    {
    //减法
    ui->lineEdit_Result->setText(QString::number(ui->lineEdit_Num1->text().toDouble()-ui->lineEdit_Num2->text().toDouble()));
     result_Check();
    }
    if(ui->comboBox->currentIndex()==2)
    {
    //乘法
    ui->lineEdit_Result->setText(QString::number(ui->lineEdit_Num1->text().toDouble()*ui->lineEdit_Num2->text().toDouble()));
     result_Check();
    }
    if(ui->comboBox->currentIndex()==3)
    {
    //除法
        if(ui->lineEdit_Num2->text().toDouble()==0)
            QMessageBox::information(NULL, "提示", "除数不能为0");
        else
            ui->lineEdit_Result->setText(QString::number(ui->lineEdit_Num1->text().toDouble()/ui->lineEdit_Num2->text().toDouble()));
        result_Check();
    }
}

//结果判断
void Widget::result_Check()
{
    if(ui->lineEdit_Result->text().toDouble()>100000)
         QMessageBox::information(NULL, "提示", "结果过大！");
}
