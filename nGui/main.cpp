#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDialog *dd = new QDialog();
    QLabel *label = new QLabel(dd);
    label->setText("hello world");
    dd->show();
    return a.exec();
}
