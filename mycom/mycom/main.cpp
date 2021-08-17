#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    w.setWindowTitle("串口参数设置");
    w.show();

    return a.exec();
}
