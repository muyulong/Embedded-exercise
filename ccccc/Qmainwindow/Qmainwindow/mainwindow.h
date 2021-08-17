#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <serialport.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    new_main *new_mainw;
    ~MainWindow();
private slots:
    void on_action_L_triggered();
    void timeUpdate();
    void on_action_R_triggered();
    void on_action_S_triggered();

    void on_action_E_triggered();

private:
    Ui::MainWindow *ui;
    QLabel *timeshow;
    QLabel* welcomeLable;
};

#endif // MAINWINDOW_H
