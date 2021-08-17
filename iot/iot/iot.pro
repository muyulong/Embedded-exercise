#-------------------------------------------------
#
# Project created by QtCreator 2021-07-04T13:31:45
#
#-------------------------------------------------

QT       += core gui serialport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = iot
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    win_qextserialport.cpp \
    qextserialport.cpp \
    qextserialbase.cpp \
    dialog.cpp \
    qextserialenumerator.cpp

HEADERS  += widget.h \
    win_qextserialport.h \
    qextserialport.h \
    qextserialbase.h \
    dialog.h \
    qextserialenumerator.h

FORMS    += widget.ui \
    dialog.ui

RESOURCES += \
    res.qrc

OTHER_FILES += \
    notepad.txt
