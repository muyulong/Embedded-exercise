#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QtSql"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    bool IsTableExist(QSqlQuery & query, QString table);
    void locateFirst();
    void queryBtn(QSqlQuery & query, QString queryStr);

private slots:
    void on_initButton_clicked();

    void on_listButton_clicked();

    void on_addButton_clicked();

    void on_delButton_clicked();

    void on_checkBox_clicked(bool checked);

    void on_modButton_clicked();

    void on_queryButton_clicked();

    void on_beginButton_clicked();

    void on_endButton_clicked();

    void on_prevButton_clicked();

    void on_nextButton_clicked();

    void on_locateButton_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
