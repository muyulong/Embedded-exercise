#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QJsonArray>
//#include <QJsonDocument>
//#include <QJsonObject>
//#include <QJsonParseError>
//#include <QJsonValue>
//qt5能读写json
#include <QSettings>  //读写ini文件。
#include <QString>
#include <QDebug>
//#include <QFile>
//#include <QDateTime>
//#include <QDir>
#include <QInputDialog>
#include <QCoreApplication>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->closeMyComBtn->setEnabled(false);
    ui->sendMsgBtn->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//另读串口函数
void MainWindow::readMyCom()
{//读串口函数
    QByteArray temp=myCom->readAll();
    //读取串口缓冲区的所有数据给临时变量temp
    ui->textBrowser->insertPlainText(temp+"\n");
    //将串口的数据显示在窗口的文本浏览器中
}

void MainWindow::on_openMyComBtn_clicked()

{
    QString portName = ui->portNameComboBox->currentText(); //获取串口名
    myCom = new Win_QextSerialPort(portName,QextSerialBase::EventDriven);
    //定义串口对象，并传递参数，在构造函数里对其进行初始化
    myCom ->open(QIODevice::ReadWrite); //打开串口
    if(ui->baudRateComboBox->currentText()==tr("9600")) //根据组合框内容对串口进行设置
        myCom->setBaudRate(BAUD9600);
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
    ui->openMyComBtn->setEnabled(false); //打开串口后“打开串口”按钮不可用
    ui->closeMyComBtn->setEnabled(true); //打开串口后“关闭串口”按钮可用
    ui->sendMsgBtn->setEnabled(true); //打开串口后“发送数据”按钮可用
    ui->baudRateComboBox->setEnabled(false); //设置各个组合框不可用
    ui->dataBitsComboBox->setEnabled(false);
    ui->parityComboBox->setEnabled(false);
    ui->stopBitsComboBox->setEnabled(false);
    ui->portNameComboBox->setEnabled(false);
}
void MainWindow::on_closeMyComBtn_clicked()
{
    myCom->close();
    ui->openMyComBtn->setEnabled(true); //关闭串口后“打开串口”按钮可用
    ui->closeMyComBtn->setEnabled(false); //关闭串口后“关闭串口”按钮不可用
    ui->sendMsgBtn->setEnabled(false); //关闭串口后“发送数据”按钮不可用
    ui->baudRateComboBox->setEnabled(true); //设置各个组合框可用
    ui->dataBitsComboBox->setEnabled(true);
    ui->parityComboBox->setEnabled(true);
    ui->stopBitsComboBox->setEnabled(true);
    ui->portNameComboBox->setEnabled(true);
}

void MainWindow::on_sendMsgBtn_clicked()
{
    myCom->write(ui->sendMsgLineEdit->text().toAscii());
}

void MainWindow::on_saveMyComBtn_clicked()
{
    //    // 以读写方式打开主目录下的1.json文件，若该文件不存在则会自动创建
    //    QFile file(QDir::homePath() + "/1.json");
    //    if(!file.open(QIODevice::ReadWrite)) {
    //        qDebug() << "File open error";
    //    } else {
    //        qDebug() <<"File open!";
    //    }
    //    // 使用QJsonObject对象插入键值对。
    //    QJsonObject jsonObject;
    //    jsonObject.insert("name", "tom");
    //    jsonObject.insert("age", "18");
    //    jsonObject.insert("time", QDateTime::currentDateTime().toString());

    //    // 使用QJsonDocument设置该json对象
    //    QJsonDocument jsonDoc;
    //    jsonDoc.setObject(jsonObject);

    //    // 将json以文本形式写入文件并关闭文件。
    //    file.write(jsonDoc.toJson());
    //    file.close();

    //    qDebug() << "Write to file";
    bool ok = false;
    QInputDialog *inputDialog = new QInputDialog(this);
    inputDialog->setOkButtonText("确定");
    inputDialog->setCancelButtonText("取消");
    inputDialog->setWindowTitle("配置文件");
    inputDialog->setLabelText("请输入配置名称:");
    inputDialog->setTextEchoMode(QLineEdit::Normal);
    QString text;
    if(QDialog::Accepted == inputDialog->exec()) {
        ok = true;
        text = inputDialog->textValue();
    } else {
        ok = false;
    }
    if (ok) {
        QSettings *configIniWrite = new QSettings("debug/yahaha.ini", QSettings::IniFormat);
        //向ini文件中写入内容,setValue函数的两个参数是键值对
        configIniWrite->setValue(text+"/portName", ui->portNameComboBox->currentText());
        configIniWrite->setValue(text+"/baudRate",ui->baudRateComboBox->currentText());
        configIniWrite->setValue(text+"/dataBits",ui->dataBitsComboBox->currentText());
        configIniWrite->setValue(text+"/parity",ui->parityComboBox->currentText());
        configIniWrite->setValue(text+"/stopBits",ui->stopBitsComboBox->currentText());
        //写入完成后删除指针
        delete configIniWrite;
    }
    QProcess *proc = new QProcess();
    QString runPath = QCoreApplication::applicationDirPath();
    QString path = "notepad.exe "+runPath+"/yahaha.ini";  //1.txt改为文件路径
    proc->start(path);
}
