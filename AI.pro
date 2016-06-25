#-------------------------------------------------
#
# Project created by QtCreator 2016-06-22T18:15:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AI
TEMPLATE = app


SOURCES += main.cpp\
    core.cpp \
    control.cpp \
    badlist.cpp

HEADERS  += \
    core.h \
    version.h \
    control.h \
    badlist.h

FORMS    += \
    control.ui
