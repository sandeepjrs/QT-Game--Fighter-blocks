#-------------------------------------------------
#
# Project created by QtCreator 2015-11-22T15:30:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = YouTube_Game
TEMPLATE = app


SOURCES += main.cpp \
    myrect.cpp \
    bullet.cpp \
    enemy.cpp \
    game.cpp \
    score.cpp

HEADERS  += \
    myrect.h \
    bullet.h \
    enemy.h \
    game.h \
    score.h

FORMS    += mainwindow.ui
