#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(this->ui->btn,SIGNAL(clicked()),this,SLOT(btn_clicked()));

    setWindowFlags(Qt::Widget);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::btn_clicked()
{
    if(this->ui->label->isHidden())
        this->ui->label->show();
    else
        this->ui->label->hide();
}
