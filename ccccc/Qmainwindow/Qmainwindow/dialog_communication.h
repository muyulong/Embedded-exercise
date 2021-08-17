#ifndef DIALOG_COMMUNICATION_H
#define DIALOG_COMMUNICATION_H

#include <QDialog>

namespace Ui {
class Dialog_communication;
}

class Dialog_communication : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_communication(QWidget *parent = 0);
    ~Dialog_communication();

private:
    Ui::Dialog_communication *ui;
};

#endif // DIALOG_COMMUNICATION_H
