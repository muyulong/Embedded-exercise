#include "mainwindow.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("D:/QTshiyan/ch10/zwj/kj.jpg");
    QSplashScreen splash(pixmap);
    splash.show();
    for(long i=0;i<=900000000;i++);
    MainWindow w;
    w.show();
    splash.finish(&w);
    return a.exec();
}


