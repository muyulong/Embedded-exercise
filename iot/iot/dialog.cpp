#include "dialog.h"
#include "ui_dialog.h"

#include "QDebug"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    this->setModal(true);
    this->setFixedSize( QSize(300, 440 ));//初始化窗口大小
    ui->setupUi(this);
    //切换窗口
    connect(ui->window_btn,SIGNAL(clicked()),this,SLOT(sendMysignal()));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::sendMysignal()                   //定义槽函数sendMysignal
{
    emit mysignal();                                     //emit关键字表示发射信号
    this->close();                                            //发射信号后子窗口隐藏起来
}

void Dialog::on_ok_btn_clicked()
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
    this->close();
    comName=portName;
    emit myPort(comName);                                     //emit关键字表示发射信号
}
