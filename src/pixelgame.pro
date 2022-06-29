#-------------------------------------------------
#
# Project created by QtCreator 2022-06-28T18:10:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pixelgame
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    scene.cpp

HEADERS  += widget.h \
    scene.h

FORMS    += widget.ui

RESOURCES += \
    resources.qrc
