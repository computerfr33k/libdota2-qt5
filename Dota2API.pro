#-------------------------------------------------
#
# Project created by QtCreator 2015-03-19T15:33:05
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = Dota2API
TEMPLATE = lib

DEFINES += DOTA2API_LIBRARY

SOURCES += dota2api.cpp \
    player.cpp

HEADERS += dota2api.h\
        dota2api_global.h \
    player.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

RESOURCES +=
