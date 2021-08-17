#-------------------------------------------------
#
# Project created by QtCreator 2021-04-25T08:55:54
#
#-------------------------------------------------
QT       +=sql
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qmainwindow
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_login.cpp \
    dialog_register.cpp \
    dialog_communication.cpp \
    win_qextserialport.cpp \
    qextserialport.cpp \
    qextserialbase.cpp \
    serialport.cpp

HEADERS  += mainwindow.h \
    dialog_login.h \
    dialog_register.h \
    dialog_communication.h \
    win_qextserialport.h \
    qextserialport.h \
    qextserialbase.h \
    serialport.h

FORMS    += mainwindow.ui \
    dialog_login.ui \
    dialog_register.ui \
    dialog_communication.ui \
    serialport.ui

RESOURCES += \
    ziyuan.qrc
