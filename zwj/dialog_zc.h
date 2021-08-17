#ifndef DIALOG_ZC_H
#define DIALOG_ZC_H

#include <QDialog>

namespace Ui {
class Dialog_zc;
}

class Dialog_zc : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_zc(QWidget *parent = 0);
    ~Dialog_zc();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog_zc *ui;
};

#endif // DIALOG_ZC_H
