#-------------------------------------------------
#
# Project created by QtCreator 2021-05-18T08:39:14
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tcpServer
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    server.cpp \
    TcpSocket.cpp

HEADERS  += widget.h \
    server.h \
    TcpSocket.h

FORMS    += widget.ui
