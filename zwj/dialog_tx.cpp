#include "dialog_tx.h"
#include "ui_dialog_tx.h"

Dialog_tx::Dialog_tx(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_tx)
{
    ui->setupUi(this);
}

Dialog_tx::~Dialog_tx()
{
    delete ui;
}
