/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sat Apr 24 18:32:13 2021
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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_12;
    QPushButton *initButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *addButton;
    QSpacerItem *verticalSpacer_6;
    QPushButton *delButton;
    QSpacerItem *verticalSpacer_7;
    QPushButton *modButton;
    QSpacerItem *verticalSpacer_8;
    QPushButton *queryButton;
    QSpacerItem *verticalSpacer_9;
    QPushButton *listButton;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEditHeight;
    QTextEdit *textEditList;
    QGroupBox *groupBox_Browser;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *beginButton;
    QPushButton *prevButton;
    QLineEdit *lineEditLocate;
    QPushButton *nextButton;
    QPushButton *endButton;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *locateButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(646, 706);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 631, 531));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(500, 20, 114, 501));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_11);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_12);

        initButton = new QPushButton(layoutWidget);
        initButton->setObjectName(QString::fromUtf8("initButton"));

        verticalLayout->addWidget(initButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        delButton = new QPushButton(layoutWidget);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        verticalLayout->addWidget(delButton);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        modButton = new QPushButton(layoutWidget);
        modButton->setObjectName(QString::fromUtf8("modButton"));

        verticalLayout->addWidget(modButton);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        queryButton = new QPushButton(layoutWidget);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));

        verticalLayout->addWidget(queryButton);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        listButton = new QPushButton(layoutWidget);
        listButton->setObjectName(QString::fromUtf8("listButton"));

        verticalLayout->addWidget(listButton);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 471, 221));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditNumber = new QLineEdit(layoutWidget1);
        lineEditNumber->setObjectName(QString::fromUtf8("lineEditNumber"));
        lineEditNumber->setEnabled(true);

        horizontalLayout->addWidget(lineEditNumber);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditName = new QLineEdit(layoutWidget1);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout_2->addWidget(lineEditName);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEditHeight = new QLineEdit(layoutWidget1);
        lineEditHeight->setObjectName(QString::fromUtf8("lineEditHeight"));

        horizontalLayout_3->addWidget(lineEditHeight);


        verticalLayout_2->addLayout(horizontalLayout_3);

        textEditList = new QTextEdit(groupBox);
        textEditList->setObjectName(QString::fromUtf8("textEditList"));
        textEditList->setGeometry(QRect(10, 250, 471, 271));
        groupBox_Browser = new QGroupBox(Widget);
        groupBox_Browser->setObjectName(QString::fromUtf8("groupBox_Browser"));
        groupBox_Browser->setGeometry(QRect(10, 570, 631, 121));
        layoutWidget2 = new QWidget(groupBox_Browser);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 591, 83));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        beginButton = new QPushButton(layoutWidget2);
        beginButton->setObjectName(QString::fromUtf8("beginButton"));

        horizontalLayout_5->addWidget(beginButton);

        prevButton = new QPushButton(layoutWidget2);
        prevButton->setObjectName(QString::fromUtf8("prevButton"));

        horizontalLayout_5->addWidget(prevButton);

        lineEditLocate = new QLineEdit(layoutWidget2);
        lineEditLocate->setObjectName(QString::fromUtf8("lineEditLocate"));

        horizontalLayout_5->addWidget(lineEditLocate);

        nextButton = new QPushButton(layoutWidget2);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout_5->addWidget(nextButton);

        endButton = new QPushButton(layoutWidget2);
        endButton->setObjectName(QString::fromUtf8("endButton"));

        horizontalLayout_5->addWidget(endButton);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        locateButton = new QPushButton(layoutWidget2);
        locateButton->setObjectName(QString::fromUtf8("locateButton"));

        horizontalLayout_7->addWidget(locateButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_7);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Widget", "Main", 0, QApplication::UnicodeUTF8));
        initButton->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("Widget", "\345\242\236\345\212\240", 0, QApplication::UnicodeUTF8));
        delButton->setText(QApplication::translate("Widget", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        modButton->setText(QApplication::translate("Widget", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        queryButton->setText(QApplication::translate("Widget", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        listButton->setText(QApplication::translate("Widget", "\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Widget", "\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\345\255\246\345\217\267    ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "\345\247\223\345\220\215    ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "\350\272\253\351\253\230    ", 0, QApplication::UnicodeUTF8));
        groupBox_Browser->setTitle(QApplication::translate("Widget", "\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
        beginButton->setText(QApplication::translate("Widget", "||<\345\274\200\345\244\264", 0, QApplication::UnicodeUTF8));
        prevButton->setText(QApplication::translate("Widget", "<=\345\211\215\344\270\200\346\235\241", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("Widget", "\345\220\216\344\270\200\346\235\241=>", 0, QApplication::UnicodeUTF8));
        endButton->setText(QApplication::translate("Widget", "\346\234\253\345\260\276>||", 0, QApplication::UnicodeUTF8));
        locateButton->setText(QApplication::translate("Widget", "\345\256\232\344\275\215", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
