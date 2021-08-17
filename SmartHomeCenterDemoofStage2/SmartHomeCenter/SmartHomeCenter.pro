#-------------------------------------------------
#
# Project created by QtCreator 2021-07-04T10:58:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartHomeCenter
TEMPLATE = app


SOURCES += main.cpp\
        mainwidget.cpp \
    serialOpen/win_qextserialport.cpp \
    serialOpen/qextserialport.cpp \
    serialOpen/qextserialbase.cpp \
    serialOpen/comwindow.cpp

HEADERS  += mainwidget.h \
    serialOpen/win_qextserialport.h \
    serialOpen/qextserialport.h \
    serialOpen/qextserialbase.h \
    serialOpen/comwindow.h

FORMS    += mainwidget.ui \
    serialOpen/comwindow.ui

OTHER_FILES += \
    notepad.txt

RESOURCES += \
    media.qrc
