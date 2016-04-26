#ifndef MATCHJSONSERIALIZER_H
#define MATCHJSONSERIALIZER_H

#include <QString>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <serializers/jsonserializable.h>

class MatchJsonSerializer
{
public:
    static QString serialize(const JsonSerializable &obj);
    static void parse(const QString &json, JsonSerializable &JsonSerializable);

private:
    MatchJsonSerializer();
};

#endif // MATCHJSONSERIALIZER_H
