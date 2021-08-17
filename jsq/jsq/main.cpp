#include "widget.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
