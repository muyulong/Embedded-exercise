#include <QtGui/QApplication>
#include "comwindow.h"
#include <QTextCodec> //����ͷ�ļ�

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    //ʹ����ɴ�������
    ComWindow w;
    w.show();

    return a.exec();
}
