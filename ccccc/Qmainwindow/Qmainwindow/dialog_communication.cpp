#include "dialog_communication.h"
#include "ui_dialog_communication.h"

Dialog_communication::Dialog_communication(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_communication)
{
    ui->setupUi(this);
}

Dialog_communication::~Dialog_communication()
{
    delete ui;
}
