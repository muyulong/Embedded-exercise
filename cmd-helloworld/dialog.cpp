#include "dialog.h"

/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Sat Mar 27 18:04:28 2021
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
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *show;
    QPushButton *hide;
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(500, 300);
        show = new QPushButton(Dialog);
        show->setObjectName(QString::fromUtf8("show"));
        show->setGeometry(QRect(50, 200, 120, 40));
        hide = new QPushButton(Dialog);
        hide->setObjectName(QString::fromUtf8("hide"));
        hide->setGeometry(QRect(330, 200, 120, 40));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 100, 80, 50));

        retranslateUi(Dialog);
        QObject::connect(show, SIGNAL(clicked()), label, SLOT(show()));
        QObject::connect(hide, SIGNAL(clicked()), label, SLOT(hide()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "                                    HelloQt", 0, QApplication::UnicodeUTF8));
        show->setText(QApplication::translate("Dialog", "show", 0, QApplication::UnicodeUTF8));
        hide->setText(QApplication::translate("Dialog", "hide", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "Hello Qt", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Widget);
}

Dialog::~Dialog()
{
    delete ui;
}
