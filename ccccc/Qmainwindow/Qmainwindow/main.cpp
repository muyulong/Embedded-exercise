#include "mainwindow.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap pixmap("D:/Documents/Desktop/qlszy/ccccc/Qmainwindow/Qmainwindow/photo_2.jpg");
    QSplashScreen splash(pixmap);
    splash.show();

    QDateTime n=QDateTime::currentDateTime();
    QDateTime now;
    do{
        now=QDateTime::currentDateTime();
    } while (n.secsTo(now)<=2);

    MainWindow w;
    w.show();

    splash.finish(&w);

    return a.exec();
}
