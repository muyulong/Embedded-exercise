/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Tue Jul 6 21:31:21 2021
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *opcls_btn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *strstop_btn;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *refresh_btn;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QLineEdit *netAddr1;
    QLineEdit *i3eAddr1;
    QCheckBox *checkBox_4;
    QPushButton *pushButton_light_1;
    QCheckBox *checkBox_5;
    QPushButton *pushButton_fan_1;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_3;
    QLineEdit *netAddr2;
    QLineEdit *i3eAddr2;
    QCheckBox *checkBox_6;
    QPushButton *pushButton_light_2;
    QCheckBox *checkBox_7;
    QPushButton *pushButton_fan_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *setting_btn;
    QLabel *label_6;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_com;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPlainTextEdit *recvMsgplainTextEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_5;
    QLineEdit *sendMsgLineEdit;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_8;
    QComboBox *portNameComboBox;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_10;
    QComboBox *baudRateComboBox;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_11;
    QComboBox *dataBitsComboBox;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_12;
    QComboBox *stopBitsComboBox;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_13;
    QComboBox *parityComboBox;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_14;
    QComboBox *flowComboBox;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *window_btn;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *send_btn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *pushButton_fan_all;
    QPushButton *pushButton_light_all;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(996, 668);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 661, 431));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 628, 391));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"\346\261\211\344\273\252\345\260\232\345\267\215\346\211\213\344\271\246W\";"));

        horizontalLayout_8->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        opcls_btn = new QPushButton(layoutWidget);
        opcls_btn->setObjectName(QString::fromUtf8("opcls_btn"));

        horizontalLayout->addWidget(opcls_btn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        strstop_btn = new QPushButton(layoutWidget);
        strstop_btn->setObjectName(QString::fromUtf8("strstop_btn"));

        horizontalLayout->addWidget(strstop_btn);


        horizontalLayout_9->addLayout(horizontalLayout);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_11->addWidget(checkBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);

        refresh_btn = new QPushButton(layoutWidget);
        refresh_btn->setObjectName(QString::fromUtf8("refresh_btn"));

        horizontalLayout_11->addWidget(refresh_btn);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_2 = new QCheckBox(layoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_2->addWidget(checkBox_2);

        netAddr1 = new QLineEdit(layoutWidget);
        netAddr1->setObjectName(QString::fromUtf8("netAddr1"));

        horizontalLayout_2->addWidget(netAddr1);

        i3eAddr1 = new QLineEdit(layoutWidget);
        i3eAddr1->setObjectName(QString::fromUtf8("i3eAddr1"));

        horizontalLayout_2->addWidget(i3eAddr1);

        checkBox_4 = new QCheckBox(layoutWidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setEnabled(true);
        checkBox_4->setCheckable(true);

        horizontalLayout_2->addWidget(checkBox_4);

        pushButton_light_1 = new QPushButton(layoutWidget);
        pushButton_light_1->setObjectName(QString::fromUtf8("pushButton_light_1"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/light.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_light_1->setIcon(icon);
        pushButton_light_1->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_light_1);

        checkBox_5 = new QCheckBox(layoutWidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setEnabled(true);
        checkBox_5->setCheckable(true);

        horizontalLayout_2->addWidget(checkBox_5);

        pushButton_fan_1 = new QPushButton(layoutWidget);
        pushButton_fan_1->setObjectName(QString::fromUtf8("pushButton_fan_1"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/fan.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_fan_1->setIcon(icon1);
        pushButton_fan_1->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_fan_1);


        horizontalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox_3 = new QCheckBox(layoutWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_3->addWidget(checkBox_3);

        netAddr2 = new QLineEdit(layoutWidget);
        netAddr2->setObjectName(QString::fromUtf8("netAddr2"));

        horizontalLayout_3->addWidget(netAddr2);

        i3eAddr2 = new QLineEdit(layoutWidget);
        i3eAddr2->setObjectName(QString::fromUtf8("i3eAddr2"));

        horizontalLayout_3->addWidget(i3eAddr2);

        checkBox_6 = new QCheckBox(layoutWidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setEnabled(true);
        checkBox_6->setCheckable(true);

        horizontalLayout_3->addWidget(checkBox_6);

        pushButton_light_2 = new QPushButton(layoutWidget);
        pushButton_light_2->setObjectName(QString::fromUtf8("pushButton_light_2"));
        pushButton_light_2->setIcon(icon);
        pushButton_light_2->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_light_2);

        checkBox_7 = new QCheckBox(layoutWidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setEnabled(true);
        checkBox_7->setCheckable(true);

        horizontalLayout_3->addWidget(checkBox_7);

        pushButton_fan_2 = new QPushButton(layoutWidget);
        pushButton_fan_2->setObjectName(QString::fromUtf8("pushButton_fan_2"));
        pushButton_fan_2->setIcon(icon1);
        pushButton_fan_2->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_fan_2);


        horizontalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_10->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        setting_btn = new QPushButton(layoutWidget);
        setting_btn->setObjectName(QString::fromUtf8("setting_btn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        setting_btn->setIcon(icon2);
        setting_btn->setIconSize(QSize(40, 40));
        setting_btn->setFlat(true);

        verticalLayout_2->addWidget(setting_btn);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_13);

        label_com = new QLabel(layoutWidget);
        label_com->setObjectName(QString::fromUtf8("label_com"));

        horizontalLayout_22->addWidget(label_com);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_22);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_10->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 460, 661, 191));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 611, 147));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        recvMsgplainTextEdit = new QPlainTextEdit(layoutWidget1);
        recvMsgplainTextEdit->setObjectName(QString::fromUtf8("recvMsgplainTextEdit"));

        horizontalLayout_4->addWidget(recvMsgplainTextEdit);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_13->addWidget(label_5);

        sendMsgLineEdit = new QLineEdit(layoutWidget1);
        sendMsgLineEdit->setObjectName(QString::fromUtf8("sendMsgLineEdit"));

        horizontalLayout_13->addWidget(sendMsgLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_13);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(700, 10, 281, 421));
        layoutWidget_2 = new QWidget(groupBox_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 261, 391));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_9);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_12->addWidget(label_7);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout_12);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_15->addWidget(label_8);

        portNameComboBox = new QComboBox(layoutWidget_2);
        portNameComboBox->setObjectName(QString::fromUtf8("portNameComboBox"));

        horizontalLayout_15->addWidget(portNameComboBox);


        verticalLayout_6->addLayout(horizontalLayout_15);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_16->addWidget(label_10);

        baudRateComboBox = new QComboBox(layoutWidget_2);
        baudRateComboBox->setObjectName(QString::fromUtf8("baudRateComboBox"));

        horizontalLayout_16->addWidget(baudRateComboBox);


        verticalLayout_6->addLayout(horizontalLayout_16);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_17->addWidget(label_11);

        dataBitsComboBox = new QComboBox(layoutWidget_2);
        dataBitsComboBox->setObjectName(QString::fromUtf8("dataBitsComboBox"));

        horizontalLayout_17->addWidget(dataBitsComboBox);


        verticalLayout_6->addLayout(horizontalLayout_17);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_7);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_18->addWidget(label_12);

        stopBitsComboBox = new QComboBox(layoutWidget_2);
        stopBitsComboBox->setObjectName(QString::fromUtf8("stopBitsComboBox"));

        horizontalLayout_18->addWidget(stopBitsComboBox);


        verticalLayout_6->addLayout(horizontalLayout_18);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_8);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_19->addWidget(label_13);

        parityComboBox = new QComboBox(layoutWidget_2);
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));

        horizontalLayout_19->addWidget(parityComboBox);


        verticalLayout_6->addLayout(horizontalLayout_19);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_9);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_20->addWidget(label_14);

        flowComboBox = new QComboBox(layoutWidget_2);
        flowComboBox->setObjectName(QString::fromUtf8("flowComboBox"));

        horizontalLayout_20->addWidget(flowComboBox);


        verticalLayout_6->addLayout(horizontalLayout_20);


        horizontalLayout_14->addLayout(verticalLayout_6);


        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        window_btn = new QPushButton(layoutWidget_2);
        window_btn->setObjectName(QString::fromUtf8("window_btn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/window.png"), QSize(), QIcon::Normal, QIcon::Off);
        window_btn->setIcon(icon3);
        window_btn->setIconSize(QSize(40, 25));
        window_btn->setFlat(true);

        horizontalLayout_5->addWidget(window_btn);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));

        verticalLayout_5->addLayout(horizontalLayout_21);


        verticalLayout_4->addLayout(verticalLayout_5);

        send_btn = new QPushButton(Widget);
        send_btn->setObjectName(QString::fromUtf8("send_btn"));
        send_btn->setGeometry(QRect(710, 510, 261, 121));
        send_btn->setStyleSheet(QString::fromUtf8("font: 40pt \"\346\226\260\345\256\213\344\275\223\";"));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(720, 450, 235, 37));
        horizontalLayout_23 = new QHBoxLayout(widget);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        pushButton_fan_all = new QPushButton(widget);
        pushButton_fan_all->setObjectName(QString::fromUtf8("pushButton_fan_all"));
        pushButton_fan_all->setIcon(icon1);
        pushButton_fan_all->setFlat(true);

        horizontalLayout_23->addWidget(pushButton_fan_all);

        pushButton_light_all = new QPushButton(widget);
        pushButton_light_all->setObjectName(QString::fromUtf8("pushButton_light_all"));
        pushButton_light_all->setIcon(icon);
        pushButton_light_all->setFlat(true);

        horizontalLayout_23->addWidget(pushButton_light_all);


        retranslateUi(Widget);
        QObject::connect(pushButton_light_1, SIGNAL(clicked()), checkBox_4, SLOT(click()));
        QObject::connect(pushButton_light_2, SIGNAL(clicked()), checkBox_6, SLOT(click()));
        QObject::connect(pushButton_fan_1, SIGNAL(clicked()), checkBox_5, SLOT(click()));
        QObject::connect(pushButton_fan_2, SIGNAL(clicked()), checkBox_7, SLOT(click()));
        QObject::connect(pushButton_fan_all, SIGNAL(clicked()), checkBox_5, SLOT(click()));
        QObject::connect(pushButton_fan_all, SIGNAL(clicked()), checkBox_7, SLOT(click()));
        QObject::connect(pushButton_light_all, SIGNAL(clicked()), checkBox_4, SLOT(click()));
        QObject::connect(pushButton_light_all, SIGNAL(clicked()), checkBox_6, SLOT(click()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "2120180033\344\272\216\350\200\200\346\231\272\350\203\275\345\256\266\345\261\205\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Widget", "\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "\346\231\272\350\203\275\345\256\266\345\261\205\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        opcls_btn->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243/\345\205\263\351\227\255\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        strstop_btn->setText(QApplication::translate("Widget", "\345\220\257\345\212\250\344\274\240\350\276\223/\345\201\234\346\255\242\344\274\240\350\276\223", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Widget", "\344\270\255\345\277\203\350\212\202\347\202\271", 0, QApplication::UnicodeUTF8));
        refresh_btn->setText(QApplication::translate("Widget", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("Widget", "\350\212\202\347\202\2711", 0, QApplication::UnicodeUTF8));
        netAddr1->setText(QApplication::translate("Widget", "FFFF", 0, QApplication::UnicodeUTF8));
        i3eAddr1->setText(QApplication::translate("Widget", "IEEE\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QString());
        pushButton_light_1->setText(QString());
        checkBox_5->setText(QString());
        pushButton_fan_1->setText(QString());
        checkBox_3->setText(QApplication::translate("Widget", "\350\212\202\347\202\2712", 0, QApplication::UnicodeUTF8));
        netAddr2->setText(QApplication::translate("Widget", "FFFF", 0, QApplication::UnicodeUTF8));
        i3eAddr2->setText(QApplication::translate("Widget", "IEEE\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QString());
        pushButton_light_2->setText(QString());
        checkBox_7->setText(QString());
        pushButton_fan_2->setText(QString());
        setting_btn->setText(QString());
        label_6->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\344\270\262\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        label_com->setText(QApplication::translate("Widget", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Widget", "\351\200\232\350\256\257", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "\346\216\245\346\224\266\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Widget", "\344\270\262\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267", 0, QApplication::UnicodeUTF8));
        portNameComboBox->clear();
        portNameComboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "COM1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "COM2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "COM3", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", 0, QApplication::UnicodeUTF8));
        baudRateComboBox->clear();
        baudRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "115200", 0, QApplication::UnicodeUTF8)
        );
        label_11->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", 0, QApplication::UnicodeUTF8));
        dataBitsComboBox->clear();
        dataBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "8", 0, QApplication::UnicodeUTF8)
        );
        label_12->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", 0, QApplication::UnicodeUTF8));
        stopBitsComboBox->clear();
        stopBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "2", 0, QApplication::UnicodeUTF8)
        );
        label_13->setText(QApplication::translate("Widget", "\345\245\207\345\201\266\346\240\241\351\252\214", 0, QApplication::UnicodeUTF8));
        parityComboBox->clear();
        parityComboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\346\227\240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\245\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\201\266", 0, QApplication::UnicodeUTF8)
        );
        label_14->setText(QApplication::translate("Widget", "\346\265\201\346\216\247", 0, QApplication::UnicodeUTF8));
        flowComboBox->clear();
        flowComboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\346\227\240", 0, QApplication::UnicodeUTF8)
        );
        window_btn->setText(QString());
        send_btn->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        pushButton_fan_all->setText(QApplication::translate("Widget", "\345\205\250\351\203\250", 0, QApplication::UnicodeUTF8));
        pushButton_light_all->setText(QApplication::translate("Widget", "\345\205\250\351\203\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
