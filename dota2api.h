#ifndef DOTA2API_H
#define DOTA2API_H

#include <QJsonDocument>
#include <QFile>
#include <QObject>

#include "dota2api_global.h"
#include "player.h"

class DOTA2APISHARED_EXPORT Dota2API
{
public:
    explicit Dota2API();
    ~Dota2API();
    const QMap<int,QJsonObject> getItems();
};

#endif // DOTA2API_H
