#-------------------------------------------------
#
# Project created by QtCreator 2021-04-25T08:59:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zwj
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    dialog_zc.cpp \
    dialog_tx.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    dialog_zc.h \
    dialog_tx.h

FORMS    += mainwindow.ui \
    dialog.ui \
    dialog_zc.ui \
    dialog_tx.ui

RESOURCES += \
    resource.qrc

RC_FILE=myapp.rc

QT +=sql
