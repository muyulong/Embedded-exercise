#include "comwindow.h"
#include "ui_comwindow.h"

ComWindow::ComWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ComWindow)
{
    ui->setupUi(this);
    ui->closeMyComBtn->setEnabled(false); //��ʼ���رմ��ڡ���ť������
    ui->sendMsgBtn->setEnabled(false);    //��ʼ���������ݡ���ť������
    setAttribute(Qt::WA_QuitOnClose,false);// when main window is closed, the child window shold be closed.

}

ComWindow::~ComWindow()
{
    delete ui;
}

void ComWindow::readMyCom() //�����ں���
{
QByteArray temp = myCom->readAll();
//��ȡ���ڻ��������������ݸ���ʱ����temp
ui->textBrowser->insertPlainText(temp);
//�����ڵ�������ʾ�ڴ��ڵ��ı��������
emit msgFromCom(temp);
}

void ComWindow::on_openMyComBtn_clicked()
{
    QString portName = ui->portNameComboBox->currentText(); //��ȡ������
    //this->portName=portName;
    emit portNameSelect(portName);
    myCom = new Win_QextSerialPort(portName,QextSerialBase::EventDriven);
    //���崮�ڶ��󣬲����ݲ������ڹ��캯���������г�ʼ��
    myCom ->open(QIODevice::ReadWrite); //�򿪴���
    if(ui->baudRateComboBox->currentText()==tr("38400")) //������Ͽ����ݶԴ��ڽ�������
    myCom->setBaudRate(BAUD38400);
    else if(ui->baudRateComboBox->currentText()==tr("115200"))
    myCom->setBaudRate(BAUD115200);
    //���ò�����
    if(ui->dataBitsComboBox->currentText()==tr("8"))
    myCom->setDataBits(DATA_8);
    else if(ui->dataBitsComboBox->currentText()==tr("7"))
    myCom->setDataBits(DATA_7);
    //��������λ
    if(ui->parityComboBox->currentText()==tr("��"))
    myCom->setParity(PAR_NONE);
    else if(ui->parityComboBox->currentText()==tr("��"))
    myCom->setParity(PAR_ODD);
    else if(ui->parityComboBox->currentText()==tr("ż"))
    myCom->setParity(PAR_EVEN);
    //������żУ��
    if(ui->stopBitsComboBox->currentText()==tr("1"))
    myCom->setStopBits(STOP_1);
    else if(ui->stopBitsComboBox->currentText()==tr("2"))
    myCom->setStopBits(STOP_2);
    //����ֹͣλ
    myCom->setFlowControl(FLOW_OFF);  //�������������ƣ�����ʹ�������������Ƶ�Ĭ������
    myCom->setTimeout(500);  //������ʱ
    connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));
    //�źźͲۺ��������������ڻ�����������ʱ�����ж����ڲ���
    ui->openMyComBtn->setEnabled(false); //�򿪴��ں󡰴򿪴��ڡ���ť������
    ui->closeMyComBtn->setEnabled(true); //�򿪴��ں󡰹رմ��ڡ���ť����
    ui->sendMsgBtn->setEnabled(true); //�򿪴��ں󡰷������ݡ���ť����
    ui->baudRateComboBox->setEnabled(false); //���ø�����Ͽ򲻿���
    ui->dataBitsComboBox->setEnabled(false);
    ui->parityComboBox->setEnabled(false);
    ui->stopBitsComboBox->setEnabled(false);
    ui->portNameComboBox->setEnabled(false);

}

void ComWindow::on_closeMyComBtn_clicked()
{
    myCom->close();
    ui->openMyComBtn->setEnabled(true); //�رմ��ں󡰴򿪴��ڡ���ť����
    ui->closeMyComBtn->setEnabled(false); //�رմ��ں󡰹رմ��ڡ���ť������
    ui->sendMsgBtn->setEnabled(false); //�رմ��ں󡰷������ݡ���ť������
    ui->baudRateComboBox->setEnabled(true);  //���ø�����Ͽ����
    ui->dataBitsComboBox->setEnabled(true);
    ui->parityComboBox->setEnabled(true);
    ui->stopBitsComboBox->setEnabled(true);
    ui->portNameComboBox->setEnabled(true);
    emit portNameSelect("None");
}

void ComWindow::on_sendMsgBtn_clicked()
{
    myCom->write(ui->sendMsgLineEdit->text().toAscii());
         //��ASCII ����ʽ���б༭���е�����д�봮��
}
