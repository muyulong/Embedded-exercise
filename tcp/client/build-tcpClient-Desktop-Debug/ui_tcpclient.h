/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created: Tue May 18 09:29:20 2021
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpClient
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *ListWidgetContent;
    QHBoxLayout *horizontalLayout;
    QLineEdit *LineEditSend;
    QPushButton *PushButtonSend;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *LineEditUser;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *LineEditServerIP;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *LineEditPort;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *PushButtonEnter;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QWidget *TcpClient)
    {
        if (TcpClient->objectName().isEmpty())
            TcpClient->setObjectName(QString::fromUtf8("TcpClient"));
        TcpClient->resize(371, 509);
        centralWidget = new QWidget(TcpClient);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 491, 551));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 351, 461));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ListWidgetContent = new QListWidget(layoutWidget);
        ListWidgetContent->setObjectName(QString::fromUtf8("ListWidgetContent"));

        verticalLayout->addWidget(ListWidgetContent);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LineEditSend = new QLineEdit(layoutWidget);
        LineEditSend->setObjectName(QString::fromUtf8("LineEditSend"));

        horizontalLayout->addWidget(LineEditSend);

        PushButtonSend = new QPushButton(layoutWidget);
        PushButtonSend->setObjectName(QString::fromUtf8("PushButtonSend"));

        horizontalLayout->addWidget(PushButtonSend);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        LineEditUser = new QLineEdit(layoutWidget);
        LineEditUser->setObjectName(QString::fromUtf8("LineEditUser"));

        horizontalLayout_2->addWidget(LineEditUser);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        LineEditServerIP = new QLineEdit(layoutWidget);
        LineEditServerIP->setObjectName(QString::fromUtf8("LineEditServerIP"));

        horizontalLayout_3->addWidget(LineEditServerIP);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        LineEditPort = new QLineEdit(layoutWidget);
        LineEditPort->setObjectName(QString::fromUtf8("LineEditPort"));

        horizontalLayout_4->addWidget(LineEditPort);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        PushButtonEnter = new QPushButton(layoutWidget);
        PushButtonEnter->setObjectName(QString::fromUtf8("PushButtonEnter"));

        horizontalLayout_5->addWidget(PushButtonEnter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);

        menuBar = new QMenuBar(TcpClient);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 494, 30));
        mainToolBar = new QToolBar(TcpClient);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 4, 16));
        statusBar = new QStatusBar(TcpClient);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(0, 0, 3, 23));

        retranslateUi(TcpClient);

        QMetaObject::connectSlotsByName(TcpClient);
    } // setupUi

    void retranslateUi(QWidget *TcpClient)
    {
        TcpClient->setWindowTitle(QApplication::translate("TcpClient", "TcpClient", 0, QApplication::UnicodeUTF8));
        PushButtonSend->setText(QApplication::translate("TcpClient", "Send", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TcpClient", "User Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TcpClient", "Server:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TcpClient", "Port:", 0, QApplication::UnicodeUTF8));
        PushButtonEnter->setText(QApplication::translate("TcpClient", "Enter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TcpClient: public Ui_TcpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
