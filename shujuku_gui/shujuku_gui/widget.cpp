#include "widget.h"
#include "ui_widget.h"
#include "QTextCodec"
#include "QtSql"
#include <QTableView>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/sqlite/test.db"); //设置并连接到数据库
    if (db.open())
        qDebug()<<"open well";

    QSqlQueryModel *model =new QSqlQueryModel();
    model->setQuery("select * from student");

    QTableView *view=new QTableView();
    view->setModel(model);
    view->show();

}
