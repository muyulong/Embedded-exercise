#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:

    void on_action_D_triggered();
    void timeUpdate();

    void on_action_3_triggered();

    void on_action_7_triggered();

private:
    Ui::MainWindow *ui;
    QLabel *timeshow;
    QLabel* welcomeLable;
};

#endif // MAINWINDOW_H
