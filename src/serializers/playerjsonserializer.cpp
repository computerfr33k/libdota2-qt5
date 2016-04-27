#include "playerjsonserializer.h"

PlayerJsonSerializer::PlayerJsonSerializer()
{

}

QString PlayerJsonSerializer::serialize(const JsonSerializable &obj)
{
    QJsonObject jsonObj;
    obj.write(jsonObj);
    QJsonDocument doc(jsonObj);
    QString result(doc.toJson(QJsonDocument::Indented));

    return result;
}

void PlayerJsonSerializer::parse(const QString &json, JsonSerializable &JsonSerializable)
{
    QJsonDocument document = QJsonDocument::fromJson(json.toUtf8());
    QJsonObject jsonObj = document.object();
    JsonSerializable.read(jsonObj);
}
