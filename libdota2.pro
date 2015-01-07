#-------------------------------------------------
#
# Project created by QtCreator 2014-07-24T16:04:41
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = libdota2
TEMPLATE = lib

DEFINES += LIBDOTA2_LIBRARY

SOURCES += dota2api.cpp

HEADERS += dota2api.h\
        libdota2_global.h \
    parsedreplaydata.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
