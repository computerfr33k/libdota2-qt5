#-------------------------------------------------
#
# Project created by QtCreator 2014-07-24T16:04:41
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = dota2
TEMPLATE = lib

DEFINES += DOTA2_LIBRARY

SOURCES += dota2api.cpp \
    parsedreplaydata.cpp

HEADERS += dota2api.h\
        libdota2_global.h \
    parsedreplaydata.h

unix {
    target.path = /usr/local/lib
    INSTALLS += target
}
