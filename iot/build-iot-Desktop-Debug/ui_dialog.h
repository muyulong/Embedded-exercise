/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Tue Jul 6 16:56:20 2021
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
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
    QHBoxLayout *horizontalLayout;
    QPushButton *ok_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel_btn;
    QHBoxLayout *horizontalLayout_21;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(298, 440);
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 281, 421));
        layoutWidget_2 = new QWidget(groupBox_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 261, 391));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
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
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_15 = new QHBoxLayout();
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
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        window_btn = new QPushButton(layoutWidget_2);
        window_btn->setObjectName(QString::fromUtf8("window_btn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/window.png"), QSize(), QIcon::Normal, QIcon::Off);
        window_btn->setIcon(icon);
        window_btn->setIconSize(QSize(40, 25));
        window_btn->setAutoDefault(false);
        window_btn->setFlat(true);

        horizontalLayout_5->addWidget(window_btn);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ok_btn = new QPushButton(layoutWidget_2);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));

        horizontalLayout->addWidget(ok_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel_btn = new QPushButton(layoutWidget_2);
        cancel_btn->setObjectName(QString::fromUtf8("cancel_btn"));

        horizontalLayout->addWidget(cancel_btn);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));

        verticalLayout_5->addLayout(horizontalLayout_21);


        verticalLayout_4->addLayout(verticalLayout_5);


        retranslateUi(Dialog);
        QObject::connect(cancel_btn, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\344\270\262\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Dialog", "\344\270\262\345\217\243\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "\344\270\262\345\217\243\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog", "\344\270\262\345\217\243\345\217\267", 0, QApplication::UnicodeUTF8));
        portNameComboBox->clear();
        portNameComboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "COM1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "COM2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "COM3", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("Dialog", "\346\263\242\347\211\271\347\216\207", 0, QApplication::UnicodeUTF8));
        baudRateComboBox->clear();
        baudRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "115200", 0, QApplication::UnicodeUTF8)
        );
        label_11->setText(QApplication::translate("Dialog", "\346\225\260\346\215\256\344\275\215", 0, QApplication::UnicodeUTF8));
        dataBitsComboBox->clear();
        dataBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "8", 0, QApplication::UnicodeUTF8)
        );
        label_12->setText(QApplication::translate("Dialog", "\345\201\234\346\255\242\344\275\215", 0, QApplication::UnicodeUTF8));
        stopBitsComboBox->clear();
        stopBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "2", 0, QApplication::UnicodeUTF8)
        );
        label_13->setText(QApplication::translate("Dialog", "\345\245\207\345\201\266\346\240\241\351\252\214", 0, QApplication::UnicodeUTF8));
        parityComboBox->clear();
        parityComboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\346\227\240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\245\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\201\266", 0, QApplication::UnicodeUTF8)
        );
        label_14->setText(QApplication::translate("Dialog", "\346\265\201\346\216\247", 0, QApplication::UnicodeUTF8));
        flowComboBox->clear();
        flowComboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\346\227\240", 0, QApplication::UnicodeUTF8)
        );
        window_btn->setText(QString());
        ok_btn->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        cancel_btn->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
