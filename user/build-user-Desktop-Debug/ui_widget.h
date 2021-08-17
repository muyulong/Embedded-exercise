/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sun Apr 18 23:20:02 2021
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
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *user;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *sex;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QTextEdit *department;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *age;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *avatarPic;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QTextEdit *description;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *Ok_Btn;
    QPushButton *Cancle_Btn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(896, 582);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 831, 531));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        user = new QLineEdit(widget);
        user->setObjectName(QString::fromUtf8("user"));

        horizontalLayout->addWidget(user);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        name = new QLineEdit(widget);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_2->addWidget(name);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        sex = new QComboBox(widget);
        sex->setObjectName(QString::fromUtf8("sex"));

        horizontalLayout_3->addWidget(sex);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        department = new QTextEdit(widget);
        department->setObjectName(QString::fromUtf8("department"));

        horizontalLayout_4->addWidget(department);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        age = new QLineEdit(widget);
        age->setObjectName(QString::fromUtf8("age"));

        horizontalLayout_5->addWidget(age);


        verticalLayout_2->addLayout(horizontalLayout_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);


        horizontalLayout_8->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        avatarPic = new QLabel(widget);
        avatarPic->setObjectName(QString::fromUtf8("avatarPic"));

        horizontalLayout_6->addWidget(avatarPic);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        description = new QTextEdit(widget);
        description->setObjectName(QString::fromUtf8("description"));

        verticalLayout->addWidget(description);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        Ok_Btn = new QPushButton(widget);
        Ok_Btn->setObjectName(QString::fromUtf8("Ok_Btn"));

        horizontalLayout_7->addWidget(Ok_Btn);

        Cancle_Btn = new QPushButton(widget);
        Cancle_Btn->setObjectName(QString::fromUtf8("Cancle_Btn"));

        horizontalLayout_7->addWidget(Cancle_Btn);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_3);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(user);
        label_2->setBuddy(name);
        label_3->setBuddy(sex);
        label_4->setBuddy(department);
        label_5->setBuddy(age);
        label_8->setBuddy(description);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(user, name);
        QWidget::setTabOrder(name, sex);
        QWidget::setTabOrder(sex, department);
        QWidget::setTabOrder(department, age);
        QWidget::setTabOrder(age, pushButton);
        QWidget::setTabOrder(pushButton, description);
        QWidget::setTabOrder(description, Ok_Btn);
        QWidget::setTabOrder(Ok_Btn, Cancle_Btn);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215(&I)\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\345\247\223\345\220\215(&N)\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "\346\200\247\345\210\253(S)\357\274\232", 0, QApplication::UnicodeUTF8));
        sex->clear();
        sex->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\347\224\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\245\263", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("Widget", "\351\203\250\351\227\250(&D)\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "\345\271\264\351\276\204(&A)\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Widget", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Widget", "\345\244\264\345\203\217", 0, QApplication::UnicodeUTF8));
        avatarPic->setText(QString());
        pushButton->setText(QApplication::translate("Widget", "\346\233\264\346\226\260", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Widget", "\344\270\252\344\272\272\350\257\264\346\230\216(&P)\357\274\232", 0, QApplication::UnicodeUTF8));
        Ok_Btn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        Cancle_Btn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
