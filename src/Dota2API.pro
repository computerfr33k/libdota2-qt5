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
    entities/player.cpp \
    entities/playercontainer.cpp \
    serializers/playerjsonserializer.cpp \
    entities/match.cpp \
    serializers/matchjsonserializer.cpp \
    entities/matchcontainer.cpp \
    entities/matchhistory.cpp

HEADERS += dota2api.h\
        dota2api_global.h \
    serializers/playerjsonserializer.h \
    entities/player.h \
    entities/playercontainer.h \
    serializers/jsonserializable.h \
    entities/match.h \
    serializers/matchjsonserializer.h \
    enums/gamemode.h \
    enums/skill.h \
    entities/matchcontainer.h \
    entities/matchhistory.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DISTFILES += \
    README.md \
    TODO
