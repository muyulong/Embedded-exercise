#include "widget.h"
#include "ui_widget.h"
#include "QPixmap"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{  
    ui->setupUi(this);
    QPixmap icon("D:/Documents/Pictures/yunxing.png");
    ui->picLabel->setPixmap(icon);
    ui->picLabel->resize(icon.width(),icon.height());
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QMessageBox::information(NULL, "information", "isOK", QMessageBox::Ok);
}
