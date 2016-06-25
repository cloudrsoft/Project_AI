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
    feel.cpp \
    listsecond.cpp \
    write.cpp

HEADERS  += \
    core.h \
    version.h \
    control.h \
    feel.h \
    listsecond.h \
    write.h

FORMS    += \
    control.ui
