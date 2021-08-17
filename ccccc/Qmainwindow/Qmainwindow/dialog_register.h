#ifndef DIALOG_REGISTER_H
#define DIALOG_REGISTER_H

#include <QDialog>

namespace Ui {
class Dialog_register;
}

class Dialog_register : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_register(QWidget *parent = 0);
    ~Dialog_register();

private slots:
    void on_pushButton_clear_clicked();

    void on_pushButton_register_clicked();

private:
    Ui::Dialog_register *ui;
};

#endif // DIALOG_REGISTER_H
