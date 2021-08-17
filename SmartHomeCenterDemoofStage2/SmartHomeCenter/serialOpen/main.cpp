#include <QtGui/QApplication>
#include "comwindow.h"
#include <QTextCodec> //加入头文件

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    //使程序可处理中文
    ComWindow w;
    w.show();

    return a.exec();
}
