#include "widget.h"
#include "ui_widget.h"
#include "QtSql"
#include <QTableView>
#include "QTextCodec"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);

    ui->groupBox_Browser->hide();//初始界面隐藏浏览框
    this->resize( QSize( 646, 570 ));//调整窗口大小

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/sqlite/test.db"); //设置并连接到数据库
    if (db.open())
        qDebug()<<"open database well";

    QSqlQuery query;

    if( IsTableExist(query,"student"))
    {
        locateFirst();

        ui->textEditList->setText("1.输入学号，点击对应按钮可实现查询，删除");
        ui->textEditList->append("2.输入你想修改的学号，姓名和身高处修改信息");
    }
    if( !IsTableExist(query,"student"))
    {
        ui->textEditList->setText("数据库尚未初始化，请点击初始化按钮初始化数据！");
    }

}

Widget::~Widget()
{
    delete ui;
}

bool Widget::IsTableExist(QSqlQuery & query, QString table)
{
    // QString sql=QString("select * from sqlite master where type = table and name = '%1'"). arg(table);
    QString sql=QString("select * from '%1'"). arg(table);
    query.exec(sql);
    //qDebug()<<"执行"<<sql<<"语句";
    //qDebug()<<"执行query. exec(sql)结果为："<<query.exec(sql);
    //qDebug()<<"返回query. next()结果为："<<query.next();
    return query.next();
}

void Widget::locateFirst()
{
    QSqlQuery query;
    QString firstStr=QString("select * from student");
    query.exec(firstStr);
    query.first();
    ui->lineEditNumber->setText(query.value(0).toString());
    ui->lineEditName->setText(query.value(1).toString());
    ui->lineEditHeight->setText(query.value(2).toString());
    ui->lineEditLocate->setText("1");
}

void Widget::on_initButton_clicked()//初始化
{
    qDebug()<<"init.....";
    QSqlQuery query;
    if( IsTableExist(query,"student"))
    {
        ui->textEditList->append("已经初始化过数据！");
    }
    if( !IsTableExist(query,"student"))
    {
        qDebug()<<"no table of student";
        query. exec("create table student(num integer, name varchar, height integer)");
        query. exec("insert into student values(1,'Tom',180)");
        query. exec("insert into student values(2,'Jack',190)");
        query. exec("insert into student values(3,'Alice',170)");
        query. exec("insert into student values(4,'Job',198)");
        ui->textEditList->append("数据初始化成功！");
        locateFirst();
    }
}

void Widget::on_addButton_clicked()//增加按钮
{
    int number=ui->lineEditNumber->text().toInt();
    QString namestr=ui->lineEditName->text();
    int height=ui->lineEditHeight->text().toInt();
    QString insertStr=QString("insert into student values('%1','%2','%3')"). arg(number). arg(namestr). arg(height);
    QSqlQuery query;
    query.exec(insertStr);
    QString str=QString("已增加学号为：%1的学生信息").arg(ui->lineEditNumber->text());
    ui->textEditList->setText(str);
}

void Widget::on_delButton_clicked()//删除按钮
{
    QString deleteStr=QString("delete from student where num=%1").arg(ui->lineEditNumber->text().toInt());
    QSqlQuery query;
    query.exec(deleteStr);
    QString str=QString("学号为：%1的学生信息已删除").arg(ui->lineEditNumber->text());
    ui->textEditList->setText(str);
}

void Widget::on_modButton_clicked()//修改
{
    QString updateStr=QString("update student set name='%1',height=%2 where num=%3").arg(ui->lineEditName->text()).arg(ui->lineEditHeight->text().toInt()).arg(ui->lineEditNumber->text().toInt());
    QSqlQuery query;
    query.exec(updateStr);
    QString str=QString("学号为：%1的学生信息已修改").arg(ui->lineEditNumber->text());
    ui->textEditList->setText(str);
}

void Widget::queryBtn(QSqlQuery &query, QString queryStr)
{
    int number;
    QString name;
    int height;
    query.exec(queryStr);
    ui->textEditList->clear();
    while(query.next())
    {
        number=query.value(0).toInt();
        name=query.value(1).toString();
        height=query.value(2).toInt();
        QString line=QString("学号 %1     姓名 %2     身高 %3").arg(number,5).arg(name,10).arg(height,5);
        ui->textEditList->append(line);
    }
}

void Widget::on_queryButton_clicked()//查询
{
    ui->textEditList->clear();
    QString number=ui->lineEditNumber->text();
    QString name=ui->lineEditName->text();
    QString height=ui->lineEditHeight->text();
    QSqlQuery query;
    QString queryStr;

    if (number.isEmpty()&&name.isEmpty()&&height.isEmpty())
    {
        qDebug()<<"输入为空";
        ui->textEditList->setText("输入为空");
    }
    if (!number.isEmpty()&&name.isEmpty()&&height.isEmpty())
    {
        qDebug()<<"输入学号";
        queryStr=QString("select * from student where num = '%1'").arg(number.toInt());
        queryBtn(query,queryStr);
    }
    if (number.isEmpty()&&!name.isEmpty()&&height.isEmpty())
    {
        qDebug()<<"输入姓名";
        queryStr=QString("select * from student where name = '%1'").arg(name);
        queryBtn(query,queryStr);
    }
    if (number.isEmpty()&&name.isEmpty()&&!height.isEmpty())
    {
        qDebug()<<"输入身高";
        queryStr=QString("select * from student where height = '%1'").arg(height.toInt());
        queryBtn(query,queryStr);
    }
    if (!number.isEmpty()&&!name.isEmpty()&&height.isEmpty())
    {
        qDebug()<<"输入学号和姓名";
        queryStr=QString("select * from student where num = '%1' and name = '%2'").arg(number.toInt()).arg(name);
        queryBtn(query,queryStr);
    }
    if (!number.isEmpty()&&name.isEmpty()&&!height.isEmpty())
    {
        qDebug()<<"输入学号和身高";
        queryStr=QString("select * from student where num = '%1' and height = '%2'").arg(number.toInt()).arg(height.toInt());
        queryBtn(query,queryStr);
    }
    if (number.isEmpty()&&!name.isEmpty()&&!height.isEmpty())
    {
        qDebug()<<"输入姓名和身高";
        queryStr=QString("select * from student where name = '%1' and height = '%2'").arg(name).arg(height.toInt());
        queryBtn(query,queryStr);
    }
    if (!number.isEmpty()&&!name.isEmpty()&&!height.isEmpty())
    {
        qDebug()<<"输入学号和姓名和身高";
        queryStr=QString("select * from student where num = '%1' and name = '%2' and height = '%3'").arg(number.toInt()).arg(name).arg(height.toInt());
        queryBtn(query,queryStr);
    }
}

void Widget::on_listButton_clicked()//列表按钮
{
    int number;
    QString name;
    int height;
    QString listStr=QString("select * from student");
    QSqlQuery query;
    query.exec(listStr);
    ui->textEditList->clear();
    while(query.next())
    {
        number=query.value(0).toInt();
        name=query.value(1).toString();
        height=query.value(2).toInt();
        //QString line=QString(str("学号")+”%1"+str("姓名")+”%2"+str("身高")+”%3").arg(number).arg(name).arg(height);
        QString line=QString("学号 %1     姓名 %2     身高 %3").arg(number,5).arg(name,10).arg(height,5);
        //qDebug()<<line;
        ui->textEditList->append(line);
    }
}

void Widget::on_checkBox_clicked(bool checked)
{
    if(checked)
    {
        this->resize( QSize( 646, 706 ));
        this->ui->groupBox_Browser->setVisible(checked);
    }
    if(!checked)
    {
        this->resize( QSize( 646, 570 ));
        this->ui->groupBox_Browser->setVisible(checked);
    }
}

void Widget::on_beginButton_clicked()
{
    locateFirst();
}

void Widget::on_endButton_clicked()
{
    QSqlQuery query,count;
    QString lastStr=QString("select * from student");
    query.exec(lastStr);
    query.last();
    ui->lineEditNumber->setText(query.value(0).toString());
    ui->lineEditName->setText(query.value(1).toString());
    ui->lineEditHeight->setText(query.value(2).toString());
    count.exec("select count(*) from student");
    count.next();
    ui->lineEditLocate->setText(count.value(0).toString());
}

void Widget::on_prevButton_clicked()
{
    QString beforeStr=QString("select * from student");
    QSqlQuery query;
    query.exec(beforeStr);
    int i=1;
    int num=ui->lineEditLocate->text().toInt();
    if(num>1)
    {
        while(query.next()){
            if(i+1==num) break;
            i++;
        }
        ui->lineEditNumber->setText(query.value(0).toString());
        ui->lineEditName->setText(query.value(1).toString());
        ui->lineEditHeight->setText(query.value(2).toString());
        QString str=QString::number(num-1);
        ui->lineEditLocate->setText(str);
        ui->textEditList->setText("这是前一条信息");
    }
    else
    {
        ui->textEditList->setText("已经为第一条信息");
    }
}

void Widget::on_nextButton_clicked()
{
    QString nextStr=QString("select * from student");
    QSqlQuery query,count;
    query.exec(nextStr);
    int i=1;
    count.exec("select count(*) from student");
    count.next();
    int num=ui->lineEditLocate->text().toInt();
    if(num<count.value(0).toInt())
    {
        while(query.next()){
            if(i-1==num) break;
            i++;
        }
        ui->lineEditNumber->setText(query.value(0).toString());
        ui->lineEditName->setText(query.value(1).toString());
        ui->lineEditHeight->setText(query.value(2).toString());
        QString str=QString::number(num+1);
        ui->lineEditLocate->setText(str);
        ui->textEditList->setText("这是后一条信息");
    }
    else
    {
        ui->textEditList->setText("已经为最后一条信息");
    }
}

void Widget::on_locateButton_clicked()
{
    QString setStr=QString("select * from student");
    QSqlQuery query;
    query.exec(setStr);
    int i=0;
    int j=ui->lineEditLocate->text().toInt();
    while(query.next()){
        i++;
        if(i==j) break;
    }
    ui->lineEditNumber->setText(query.value(0).toString());
    ui->lineEditName->setText(query.value(1).toString());
    ui->lineEditHeight->setText(query.value(2).toString());
    if(i==j)
    {
        QString str=QString("这是第%1个学生的信息！").arg(ui->lineEditLocate->text());
        ui->textEditList->setText(str);
    }
    else
    {
        QString str1=QString("超出范围！！！仅有%1个学生").arg(i);
        ui->textEditList->setText(str1);
    }
}
