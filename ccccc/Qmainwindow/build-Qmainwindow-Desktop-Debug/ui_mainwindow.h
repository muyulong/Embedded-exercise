/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Apr 25 11:18:18 2021
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_L;
    QAction *action_R;
    QAction *action_M;
    QAction *action_X;
    QAction *action_S;
    QAction *action_C;
    QAction *action_F;
    QAction *action_V;
    QAction *action_H;
    QAction *action_F_2;
    QAction *action_A;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_S;
    QMenu *menu_S_2;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        action_L = new QAction(MainWindow);
        action_L->setObjectName(QString::fromUtf8("action_L"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/pic/images/\347\231\273\345\275\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_L->setIcon(icon);
        action_R = new QAction(MainWindow);
        action_R->setObjectName(QString::fromUtf8("action_R"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/pic/images/\346\263\250\345\206\214.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_R->setIcon(icon1);
        action_M = new QAction(MainWindow);
        action_M->setObjectName(QString::fromUtf8("action_M"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/pic/images/\344\277\256\346\224\271.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_M->setIcon(icon2);
        action_X = new QAction(MainWindow);
        action_X->setObjectName(QString::fromUtf8("action_X"));
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QString::fromUtf8("action_S"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/pic/images/\351\200\232\344\277\241\350\256\276\347\275\256.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_S->setIcon(icon3);
        action_C = new QAction(MainWindow);
        action_C->setObjectName(QString::fromUtf8("action_C"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/pic/images/\346\224\266\345\217\221\345\255\227\347\254\246.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_C->setIcon(icon4);
        action_F = new QAction(MainWindow);
        action_F->setObjectName(QString::fromUtf8("action_F"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/pic/images/\346\224\266\345\217\221\346\226\207\344\273\266.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_F->setIcon(icon5);
        action_V = new QAction(MainWindow);
        action_V->setObjectName(QString::fromUtf8("action_V"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/pic/images/\346\237\245\347\234\213\346\226\207\344\273\266.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_V->setIcon(icon6);
        action_H = new QAction(MainWindow);
        action_H->setObjectName(QString::fromUtf8("action_H"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/pic/images/\345\270\256\345\212\251.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_H->setIcon(icon7);
        action_F_2 = new QAction(MainWindow);
        action_F_2->setObjectName(QString::fromUtf8("action_F_2"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/pic/images/\346\204\217\350\247\201\345\217\215\351\246\210.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_F_2->setIcon(icon8);
        action_A = new QAction(MainWindow);
        action_A->setObjectName(QString::fromUtf8("action_A"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/pic/images/\345\205\263\344\272\216\347\263\273\347\273\237.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        action_A->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu_S = new QMenu(menuBar);
        menu_S->setObjectName(QString::fromUtf8("menu_S"));
        menu_S_2 = new QMenu(menuBar);
        menu_S_2->setObjectName(QString::fromUtf8("menu_S_2"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QString::fromUtf8("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_S->menuAction());
        menuBar->addAction(menu_S_2->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_S->addAction(action_L);
        menu_S->addAction(action_R);
        menu_S->addAction(action_M);
        menu_S->addAction(action_X);
        menu_S_2->addAction(action_S);
        menu_S_2->addAction(action_C);
        menu_S_2->addAction(action_F);
        menu_S_2->addAction(action_V);
        menu_H->addAction(action_H);
        menu_H->addAction(action_F_2);
        menu_H->addSeparator();
        menu_H->addAction(action_A);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_L->setText(QApplication::translate("MainWindow", "\347\231\273\351\231\206(&L)", 0, QApplication::UnicodeUTF8));
        action_R->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214(R)", 0, QApplication::UnicodeUTF8));
        action_M->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201(&M)", 0, QApplication::UnicodeUTF8));
        action_X->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", 0, QApplication::UnicodeUTF8));
        action_S->setText(QApplication::translate("MainWindow", "\351\200\232\344\277\241\350\256\276\347\275\256(&S)", 0, QApplication::UnicodeUTF8));
        action_C->setText(QApplication::translate("MainWindow", "\346\224\266\345\217\221\345\255\227\347\254\246(&C)", 0, QApplication::UnicodeUTF8));
        action_F->setText(QApplication::translate("MainWindow", "\346\224\266\345\217\221\346\226\207\344\273\266(&F)", 0, QApplication::UnicodeUTF8));
        action_V->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\346\226\207\344\273\266(&V)", 0, QApplication::UnicodeUTF8));
        action_H->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251(&H)", 0, QApplication::UnicodeUTF8));
        action_F_2->setText(QApplication::translate("MainWindow", "\346\204\217\350\247\201\345\217\215\351\246\210(&F)", 0, QApplication::UnicodeUTF8));
        action_A->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\347\263\273\347\273\237(&A)", 0, QApplication::UnicodeUTF8));
        menu_S->setTitle(QApplication::translate("MainWindow", "\347\263\273\347\273\237(&S)", 0, QApplication::UnicodeUTF8));
        menu_S_2->setTitle(QApplication::translate("MainWindow", "\351\200\232\344\277\241(&S)", 0, QApplication::UnicodeUTF8));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
