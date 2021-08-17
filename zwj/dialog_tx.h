#ifndef DIALOG_TX_H
#define DIALOG_TX_H

#include <QDialog>

namespace Ui {
class Dialog_tx;
}

class Dialog_tx : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_tx(QWidget *parent = 0);
    ~Dialog_tx();

private:
    Ui::Dialog_tx *ui;
};

#endif // DIALOG_TX_H
