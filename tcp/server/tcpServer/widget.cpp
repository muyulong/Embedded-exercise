#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    port=8080;
    ui->lineEditPort->setText(QString::number(port));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonCreate_clicked()
{
    server=new Server(this,port);
    connect(server,SIGNAL(updateServer(QString,int)),this,SLOT(slotUpdateServer(QString,int)));
    ui->pushButtonCreate->setEnabled(false);
}

void Widget::slotUpdateServer(QString msg, int length)
{
    ui->listWidgetContent->addItem(msg.left(length) );
}
