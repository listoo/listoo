#-------------------------------------------------
#
# Project created by QtCreator 2018-02-11T14:43:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Listoo
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
    core/workspace.cpp \
    core/item.cpp \
    core/itemfile.cpp \
    core/itemfolder.cpp \
    core/unit.cpp \
    core/t_unit.cpp

HEADERS += \
        mainwindow.h \
    core/workspace.h \
    core/item.h \
    core/itemfile.h \
    core/itemfolder.h \
    core/directives.h \
    core/unit.h \
    core/t_unit.h

FORMS += \
        mainwindow.ui

LIBS += \
       -lboost_system\
       -lboost_filesystem\
       -lgmp

CONFIG += c++11
