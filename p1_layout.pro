#-------------------------------------------------
#
# Project created by QtCreator 2022-08-15T13:43:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = p1_layout
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    content.cpp \
    baseinfo.cpp

HEADERS += \
        mainwindow.h \
    content.h \
    baseinfo.h

FORMS += \
        mainwindow.ui

#介绍
#如何使用布局方法实现一个复杂的窗口布局
#如何使用分割窗口
#如何使用堆栈窗体
