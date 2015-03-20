#include "dota2api.h"

Dota2API::Dota2API()
{
}

Dota2API::~Dota2API()
{
}

/* not the best solution, but maybe I can optimize it later on. Or maybe somebody can submit an idea for how to make this better. */
const QMap<int,QJsonObject> Dota2API::getItems()
{
    QMap<int,QJsonObject> list;

    QFile file("content/data/items.json");
    if(!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();

        /* list will be empty since we never populated due to reading file error */
        return list;
    }

    QJsonDocument items = QJsonDocument::fromJson(file.readAll());
    file.close();

    QJsonArray itemArray = items.object().value("items").toArray();

    int size = itemArray.size();
    for(int i=0; i < size; i++) {
        /* for whatever reason, Qt likes to convert numbers in JSON to doubles. ugh! */
        int id = QString::number(itemArray.at(i).toObject().value("id").toDouble(), 'f', 0).toInt();
        list[id] = itemArray.at(i).toObject();
    }

    return list;
}
