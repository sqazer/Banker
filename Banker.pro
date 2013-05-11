#-------------------------------------------------
#
# Project created by QtCreator 2013-05-11T19:02:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Banker
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    statementparser.cpp \
    account.cpp

HEADERS  += mainwindow.h \
    account.h \
    statementparser.h

FORMS    += mainwindow.ui
