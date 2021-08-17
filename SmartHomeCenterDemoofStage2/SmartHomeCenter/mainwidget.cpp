#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    pCwnd=new ComWindow();
    connect(pCwnd,SIGNAL(portNameSelect(QString)),this,SLOT(dispComLbl(QString)));//更新主界面上的串口号
    connect(pCwnd,SIGNAL(msgFromCom(QByteArray)),this,SLOT(updateReceCombox(QByteArray)));//更新主界面上的接收到的信息

}

MainWidget::~MainWidget()
{
    delete ui;
}


void MainWidget::on_comBtn_clicked()
{
    pCwnd->show();

}

 void MainWidget::dispComLbl(QString portname)
 {
   ui->comDisp->setText(portname);
 }

void MainWidget::on_pushButton_clicked()
{
   pCwnd->myCom->write(this->ui->subMsgLnt->text().toAscii());
}
void MainWidget::updateReceCombox(QByteArray str)
{
    ui->receMsgbox->insertPlainText(str);
}
