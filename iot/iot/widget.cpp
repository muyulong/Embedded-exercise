#include "widget.h"
#include "ui_widget.h"

#include "QDebug"

#include <QDialog>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),setCheckState(true),bgState(true),trState(true)//窗口大小状态 开始关闭状态 传输状态
{
    ui->setupUi(this);
    this->setFixedSize( QSize(690, 660 ));//初始化窗口大小
    //this->setFixedSize( QSize(990, 750 ));//初始化窗口大小
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    //网络请求
    //manager = new QNetworkAccessManager();
    //sendData();
    //默认不可用
    ui->strstop_btn->setEnabled(false);
    ui->groupBox_3->hide();
    ui->send_btn->hide();
    ui->send_btn->setEnabled(false);
    ui->refresh_btn->setEnabled(false);
    ui->pushButton_fan_1->setEnabled(false);
    ui->pushButton_fan_2->setEnabled(false);
    ui->pushButton_light_1->setEnabled(false);
    ui->pushButton_light_2->setEnabled(false);
    //切换窗口
    connect(&d,SIGNAL(mysignal()),this,SLOT(on_setting_btn_clicked()));
    //信号传输
    connect(&d,SIGNAL(myMsg(Win_QextSerialPort)),this,SLOT(rcvmyMsg(Win_QextSerialPort)));
    //自动获取串口号
    //暂时无法生效
    foreach (QextPortInfo info, QextSerialEnumerator::getPorts())
    {
        ui->portNameComboBox->addItem(info.portName);
    }
    //设置端口号显示
    ui->label_com->setText(ui->portNameComboBox->currentText());
    connect(ui->portNameComboBox,SIGNAL(currentIndexChanged(QString)),ui->label_com,SLOT(setText(QString)));
    connect(&d,SIGNAL(myPort(QString)),ui->label_com,SLOT(setText(QString)));
}

Widget::~Widget()
{
    delete ui;
}
//风扇和灯的状态
bool led1=1,led2=1,fan1=1,fan2=1,netState=0,ledAll=1,fanAll=1;
//接收子窗口的值
void Widget::rcvmyMsg(Win_QextSerialPort)
{
    readMyCom();
}
//字符串处理
//#3045NX00218764004187210000DF--X$
//读串口函数
void Widget::readMyCom()
{
    QByteArray temp=myCom->readAll();
    //QDebug<<temp;
    QString::fromLatin1(temp);
    //读取串口缓冲区的所有数据给临时变量temp
    ui->recvMsgplainTextEdit->insertPlainText(temp);
    if(temp.length()>30&&netState==0)
    {
        //填写网络地址和IEEE地址并设置开关状态
        ui->netAddr1->setText(QString(temp.mid(1,4)));
        ui->i3eAddr1->setText(QString(temp.mid(7,16)));
        if(temp[21]=='D') ui->pushButton_light_1->setEnabled(true);
        else if(temp[21]=='-') ui->pushButton_light_1->setEnabled(false);
        if(temp[22]=='F') ui->pushButton_fan_1->setEnabled(true);
        else if(temp[22]=='-') ui->pushButton_fan_1->setEnabled(false);
        ui->checkBox_2->setChecked(1);
        netState=1;
    }
    if(temp.length()>30&&ui->netAddr1->text()!=QString(temp.mid(1,4))&&netState==1)
    {
        //填写网络地址和IEEE地址并设置开关状态
        ui->netAddr2->setText(QString(temp.mid(1,4)));
        ui->i3eAddr2->setText(QString(temp.mid(7,16)));
        if(temp[21]=='D') ui->pushButton_light_2->setEnabled(true);
        else if(temp[21]=='-') ui->pushButton_light_2->setEnabled(false);
        if(temp[22]=='F') ui->pushButton_fan_2->setEnabled(true);
        else if(temp[22]=='-') ui->pushButton_fan_2->setEnabled(false);
        ui->checkBox_3->setChecked(1);
    }
    if(temp.length()<10)
    {
        //设置中心节点状态
        if(QString(temp).contains("OKOPEN",Qt::CaseSensitive))
        {
            ui->checkBox->setChecked(1);
            ui->refresh_btn->click();
        }
        if(QString(temp).contains("OKCLOSE",Qt::CaseSensitive))
        {
            ui->checkBox->setChecked(0);
            ui->refresh_btn->click();
        }
        //qDebug()<<temp;
    }
}

//打开关闭串口按钮
void Widget::on_opcls_btn_clicked()
{
    if(bgState)
    {
        QString portName = ui->portNameComboBox->currentText(); //获取串口名
        //Win_QextSerialPort::Widget myCom = new Win_QextSerialPort(portName,QextSerialBase::EventDriven);
        myCom = new Win_QextSerialPort(portName,QextSerialBase::EventDriven);
        //定义串口对象，并传递参数，在构造函数里对其进行初始化
        myCom ->open(QIODevice::ReadWrite); //打开串口
        if(ui->baudRateComboBox->currentText()==tr("9600")) //根据组合框内容对串口进行设置
            myCom->setBaudRate(BAUD9600);
        else if(ui->baudRateComboBox->currentText()==tr("38400"))
            myCom->setBaudRate(BAUD38400);
        else if(ui->baudRateComboBox->currentText()==tr("115200"))
            myCom->setBaudRate(BAUD115200);
        //设置波特率
        if(ui->dataBitsComboBox->currentText()==tr("8"))
            myCom->setDataBits(DATA_8);
        else if(ui->dataBitsComboBox->currentText()==tr("7"))
            myCom->setDataBits(DATA_7);
        //设置数据位
        if(ui->parityComboBox->currentText()==tr("无"))
            myCom->setParity(PAR_NONE);
        else if(ui->parityComboBox->currentText()==tr("奇"))
            myCom->setParity(PAR_ODD);
        else if(ui->parityComboBox->currentText()==tr("偶"))
            myCom->setParity(PAR_EVEN);
        //设置奇偶校验
        if(ui->stopBitsComboBox->currentText()==tr("1"))
            myCom->setStopBits(STOP_1);
        else if(ui->stopBitsComboBox->currentText()==tr("2"))
            myCom->setStopBits(STOP_2);
        //设置停止位
        myCom->setFlowControl(FLOW_OFF); //设置数据流控制，我们使用无数据流控制的默认设置
        myCom->setTimeout(500); //设置延时
        connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));
        //信号和槽函数关联，当串口缓冲区有数据时，进行读串口操作
        //设置各个组合框不可用
        ui->baudRateComboBox->setEnabled(false);
        ui->dataBitsComboBox->setEnabled(false);
        ui->parityComboBox->setEnabled(false);
        ui->stopBitsComboBox->setEnabled(false);
        ui->portNameComboBox->setEnabled(false);
        ui->flowComboBox->setEnabled(false);
        //设置各个组合框可用
        ui->strstop_btn->setEnabled(true);
        ui->send_btn->setEnabled(true);
        ui->refresh_btn->setEnabled(true);
        ui->pushButton_fan_1->setEnabled(true);
        ui->pushButton_fan_2->setEnabled(true);
        ui->pushButton_light_1->setEnabled(true);
        ui->pushButton_light_2->setEnabled(true);
        //设置状态
        bgState=false;
    }
    else{
        //设置各个组合框可用
        ui->baudRateComboBox->setEnabled(true);
        ui->dataBitsComboBox->setEnabled(true);
        ui->parityComboBox->setEnabled(true);
        ui->stopBitsComboBox->setEnabled(true);
        ui->portNameComboBox->setEnabled(true);
        ui->flowComboBox->setEnabled(true);
        //设置各个组合框不可用
        ui->strstop_btn->setEnabled(false);
        ui->send_btn->setEnabled(false);
        ui->refresh_btn->setEnabled(false);
        ui->pushButton_fan_1->setEnabled(false);
        ui->pushButton_fan_2->setEnabled(false);
        ui->pushButton_light_1->setEnabled(false);
        ui->pushButton_light_2->setEnabled(false);
        //关闭串口
        myCom->close();
        myCom->disconnect();
        //关闭子窗口的串口
        if(d.comName!="")
        {
            d.myCom->close();
            d.myCom->disconnect();
        }
        //设置状态
        bgState=true;
    }
}

//设置按钮
void Widget::on_setting_btn_clicked()
{
    if(setCheckState)
    {
        this->setFixedSize( QSize(990, 660 ));
        setCheckState=false;
        ui->groupBox_3->show();
        ui->send_btn->show();
    }
    else{
        this->setFixedSize( QSize(690, 660 ));
        setCheckState=true;
        ui->groupBox_3->hide();
        ui->send_btn->hide();
    }
}

//开始停止传输按钮
void Widget::on_strstop_btn_clicked()
{
    QString tr;
    if(trState)
    {
        tr = "OPEN";
        ui->sendMsgLineEdit->setText(tr);
        myCom->write(tr.toAscii());
        trState=false;
    }
    else{
        tr = "CLOSE";
        ui->sendMsgLineEdit->setText(tr);
        myCom->write(tr.toAscii());
        trState=true;
    }
}

//发送按钮（大）
void Widget::on_send_btn_clicked()
{
    myCom->write(ui->sendMsgLineEdit->text().toAscii());
}

//刷新按钮
void Widget::on_refresh_btn_clicked()
{
    QString tr;
    tr="@FFFFS////X$";
    ui->sendMsgLineEdit->setText(tr);
    myCom->write(tr.toAscii());
}

//灯1开关
void Widget::on_pushButton_light_1_clicked()
{
    if(led1)
    {
        //开灯1
        QString led='@'+ui->netAddr1->text()+"KD///X$";
        myCom->write(led.toAscii());
        ui->sendMsgLineEdit->setText(led);
        led1=0;
    }
    else
    {
        //关灯1
        QString led='@'+ui->netAddr1->text()+"GD///X$";
        myCom->write(led.toAscii());
        ui->sendMsgLineEdit->setText(led);
        led1=1;
    }
}

//灯2开关
void Widget::on_pushButton_light_2_clicked()
{
    if(led2)
    {
        //开灯2
        QString led='@'+ui->netAddr2->text()+"KD///X$";
        myCom->write(led.toAscii());
        ui->sendMsgLineEdit->setText(led);
        led2=0;
    }
    else
    {
        //关灯2
        QString led='@'+ui->netAddr2->text()+"GD///X$";
        myCom->write(led.toAscii());
        ui->sendMsgLineEdit->setText(led);
        led2=1;
    }
}

//风扇1开关
void Widget::on_pushButton_fan_1_clicked()
{
    if(fan1)
    {
        //开风扇1
        QString fan='@'+ui->netAddr1->text()+"KF///X$";
        myCom->write(fan.toAscii());
        ui->sendMsgLineEdit->setText(fan);
        fan1=0;
    }
    else
    {
        //关风扇1
        QString fan='@'+ui->netAddr1->text()+"GF///X$";
        myCom->write(fan.toAscii());
        ui->sendMsgLineEdit->setText(fan);
        fan1=1;
    }
}

//风扇2开关
void Widget::on_pushButton_fan_2_clicked()
{
    if(fan2)
    {
        //开风扇2
        QString fan='@'+ui->netAddr2->text()+"KF///X$";
        myCom->write(fan.toAscii());
        ui->sendMsgLineEdit->setText(fan);
        fan2=0;
    }
    else
    {
        //关风扇1
        QString fan='@'+ui->netAddr2->text()+"GF///X$";
        myCom->write(fan.toAscii());
        ui->sendMsgLineEdit->setText(fan);
        fan2=1;
    }
}
//全部风扇
void Widget::on_pushButton_fan_all_clicked()
{
    if(fanAll)
    {
        //开全部风扇
        QString fan="@FFFFKF///X$";
        myCom->write(fan.toAscii());
        ui->sendMsgLineEdit->setText(fan);
        fanAll=0;
    }
    else
    {
        //关全部风扇
        QString fan="@FFFFGF///X$";
        myCom->write(fan.toAscii());
        ui->sendMsgLineEdit->setText(fan);
        fanAll=1;
    }
}
//全部灯
void Widget::on_pushButton_light_all_clicked()
{
    if(ledAll)
    {
        //开全部灯
        QString led="@FFFFKD///X$";
        myCom->write(led.toAscii());
        ui->sendMsgLineEdit->setText(led);
        ledAll=0;
    }
    else
    {
        //关全部灯
        QString led="@FFFFGD///X$";
        myCom->write(led.toAscii());
        ui->sendMsgLineEdit->setText(led);
        ledAll=1;
    }
}
//切换窗口按钮
void Widget::on_window_btn_clicked()
{
    d.show();
    on_setting_btn_clicked();
}

//void Widget::sendData()
//{
//    QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
//    connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
//    accessManager->get(QNetworkRequest(QUrl("http://api.bemfa.com/api/device/v1/data/1/push/get/?uid=c0f487f17d2ce9195c040e4f6456e3d7&topic=001&msg=on")));
//}

//void Widget::replyFinished(QNetworkReply* reply)
//{
//    QByteArray data = reply->readAll();
//    ui->textEdit->setText(data);
//}

//void Widget::on_pushButton_net_clicked()
//{
//    sendData();
//}

