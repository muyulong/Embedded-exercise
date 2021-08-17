#include"QtSql"
int main(int argc,char*argv[]){
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    //加载sqlite驱动
    db.setDatabaseName("C:/sqlite/test.db");
    //设置数据库名,改成自己的库名
    //连接数据库
    if(db.open())
        qDebug()<<"open well";
    QString str=QString("select*from student");//查询
    QSqlQuery query;
    query.exec(str);
    int number;
    QString name;
    int height;
    query.first();
    //指针移到第一条记录
    do
    {
        number=query.value(0).toInt();
        name=query.value(1).toString();
        height=query.value(2).toInt();
        qDebug()<<number<<""<<name<<""<<height;
    }while(query.next());//输入记录,直到最后
    return 0;
}
