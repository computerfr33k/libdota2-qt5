#-------------------------------------------------
#
# Project created by QtCreator 2015-03-19T15:33:05
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = Dota2API
TEMPLATE = lib

INCLUDEPATH += "dependencies/pbjson/src"

DEFINES += DOTA2API_LIBRARY

SOURCES += dota2api.cpp \
    dependencies/pbjson/src/pbjson.cpp \
    Protobuf/generated/Match.pb.cc

HEADERS += dota2api.h\
        dota2api_global.h \
    dependencies/pbjson/src/rapidjson/error/en.h \
    dependencies/pbjson/src/rapidjson/error/error.h \
    dependencies/pbjson/src/rapidjson/internal/biginteger.h \
    dependencies/pbjson/src/rapidjson/internal/diyfp.h \
    dependencies/pbjson/src/rapidjson/internal/dtoa.h \
    dependencies/pbjson/src/rapidjson/internal/ieee754.h \
    dependencies/pbjson/src/rapidjson/internal/itoa.h \
    dependencies/pbjson/src/rapidjson/internal/meta.h \
    dependencies/pbjson/src/rapidjson/internal/pow10.h \
    dependencies/pbjson/src/rapidjson/internal/stack.h \
    dependencies/pbjson/src/rapidjson/internal/strfunc.h \
    dependencies/pbjson/src/rapidjson/internal/strtod.h \
    dependencies/pbjson/src/rapidjson/msinttypes/inttypes.h \
    dependencies/pbjson/src/rapidjson/msinttypes/stdint.h \
    dependencies/pbjson/src/rapidjson/allocators.h \
    dependencies/pbjson/src/rapidjson/document.h \
    dependencies/pbjson/src/rapidjson/encodedstream.h \
    dependencies/pbjson/src/rapidjson/encodings.h \
    dependencies/pbjson/src/rapidjson/filereadstream.h \
    dependencies/pbjson/src/rapidjson/filewritestream.h \
    dependencies/pbjson/src/rapidjson/memorybuffer.h \
    dependencies/pbjson/src/rapidjson/memorystream.h \
    dependencies/pbjson/src/rapidjson/prettywriter.h \
    dependencies/pbjson/src/rapidjson/rapidjson.h \
    dependencies/pbjson/src/rapidjson/reader.h \
    dependencies/pbjson/src/rapidjson/stringbuffer.h \
    dependencies/pbjson/src/rapidjson/writer.h \
    dependencies/pbjson/src/bin2ascii.h \
    dependencies/pbjson/src/pbjson.hpp \
    Protobuf/generated/Match.pb.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

RESOURCES +=

DISTFILES += \
    Protobuf/Match.proto
