#ifndef PLAYERJSONSERIALIZER_H
#define PLAYERJSONSERIALIZER_H

#include <QString>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <serializers/jsonserializable.h>

class PlayerJsonSerializer
{
public:
    static QString serialize(const JsonSerializable &obj);
    static void parse(const QString &json, JsonSerializable &JsonSerializable);

private:
    PlayerJsonSerializer();
};

#endif // PLAYERJSONSERIALIZER_H
