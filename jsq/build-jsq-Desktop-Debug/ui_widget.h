/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Tue Jun 15 11:56:48 2021
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
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *pic;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_Num1;
    QComboBox *comboBox;
    QLineEdit *lineEdit_Num2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_Result;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(599, 604);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 581, 541));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        pic = new QLabel(layoutWidget);
        pic->setObjectName(QString::fromUtf8("pic"));
        pic->setEnabled(true);
        pic->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/E:/\350\257\201\344\273\266\347\205\247/1622721375256.jpg")));
        pic->setScaledContents(true);
        pic->setOpenExternalLinks(true);

        horizontalLayout->addWidget(pic);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_Num1 = new QLineEdit(layoutWidget);
        lineEdit_Num1->setObjectName(QString::fromUtf8("lineEdit_Num1"));

        horizontalLayout_2->addWidget(lineEdit_Num1);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        lineEdit_Num2 = new QLineEdit(layoutWidget);
        lineEdit_Num2->setObjectName(QString::fromUtf8("lineEdit_Num2"));

        horizontalLayout_2->addWidget(lineEdit_Num2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        lineEdit_Result = new QLineEdit(layoutWidget);
        lineEdit_Result->setObjectName(QString::fromUtf8("lineEdit_Result"));

        horizontalLayout_2->addWidget(lineEdit_Result);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Widget);
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), pushButton, SLOT(click()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "\347\217\255\347\272\247\357\274\232\350\256\241\347\247\2211807", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\345\255\246\345\217\267\357\274\2322120180003", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "\345\247\223\345\220\215\357\274\232\351\231\210\350\276\260", 0, QApplication::UnicodeUTF8));
        pic->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "*", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "/", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("Widget", "=", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
