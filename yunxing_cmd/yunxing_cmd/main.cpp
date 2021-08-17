#include <QApplication>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QWidget>
#include <QPixmap>
#include <QObject>
#include <QMessageBox>
#include <QTextCodec>

int main(int argc,char *argv[])
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));//中文乱码处理方法
    QApplication app(argc,argv);
    QWidget *window = new QWidget;
    QLabel *picLabel=new QLabel();
    QLabel *infoLabel =new QLabel();
    QLabel *cmdLabel =new QLabel();
    QLineEdit *cmdLineEdit =new QLineEdit();
    QPushButton *subminButton=new QPushButton();
    QPushButton *cancelButton=new QPushButton();
    QPushButton *browerButton=new QPushButton();


    cmdLabel->setText("打开(O)");
    cmdLineEdit->clear();
    QPixmap myPix("D:/Documents/Pictures/yunxing.png");
    picLabel->setPixmap(myPix);

    infoLabel->setText("Window将根据你所输入的名称，为你打开相应的程序、\n文件夹、文档或Internet资源");
    subminButton->setText("确定");
    subminButton->setObjectName("ok");
    cancelButton->setText("取消");
    browerButton->setText("浏览");

    QHBoxLayout *picINLabel=new QHBoxLayout;
    picINLabel->addWidget(picLabel);
    picINLabel->addWidget(infoLabel);

    QHBoxLayout *cmdLayout=new QHBoxLayout;
    cmdLayout->addWidget(cmdLabel);
    cmdLayout->addWidget(cmdLineEdit);

    QHBoxLayout *buttonLayout=new QHBoxLayout;
    buttonLayout->addWidget(subminButton);
    buttonLayout->addWidget(cancelButton);
    buttonLayout->addWidget(browerButton);

    QVBoxLayout *mainLayout=new QVBoxLayout;
    mainLayout->addLayout(picINLabel);
    mainLayout->addLayout( cmdLayout);
    mainLayout->addLayout(buttonLayout);

    window->setLayout(mainLayout);
    window->setWindowTitle("Runing. ..");
    window->setMinimumHeight(260);
    window->setMaximumHeight(260);
    QMessageBox *messbox =new QMessageBox();
    messbox-> setText("isok");
    QWidget::connect(subminButton,SIGNAL(clicked()),
                     messbox,SLOT(show())
                 );
    window-> show();
    return app.exec();

}
