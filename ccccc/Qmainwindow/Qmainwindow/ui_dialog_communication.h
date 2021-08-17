/********************************************************************************
** Form generated from reading UI file 'dialog_communication.ui'
**
** Created: Sat May 1 00:34:02 2021
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_COMMUNICATION_H
#define UI_DIALOG_COMMUNICATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_communication
{
public:
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_communication)
    {
        if (Dialog_communication->objectName().isEmpty())
            Dialog_communication->setObjectName(QString::fromUtf8("Dialog_communication"));
        Dialog_communication->resize(530, 303);
        label_4 = new QLabel(Dialog_communication);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 10, 221, 61));
        widget = new QWidget(Dialog_communication);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 100, 511, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Dialog_communication);

        QMetaObject::connectSlotsByName(Dialog_communication);
    } // setupUi

    void retranslateUi(QDialog *Dialog_communication)
    {
        Dialog_communication->setWindowTitle(QApplication::translate("Dialog_communication", "Dialog", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_communication", "<html><head/><body><p><span style=\" font-size:18pt;\">\351\200\232\344\277\241\345\217\202\346\225\260\350\256\276\347\275\256</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_communication", "IP\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_communication", "PORT\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_communication", "\346\226\207\344\273\266\345\255\230\346\224\276\344\275\215\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog_communication", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_communication: public Ui_Dialog_communication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_COMMUNICATION_H
