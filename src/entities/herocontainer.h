#ifndef HEROCONTAINER_H
#define HEROCONTAINER_H

#include <QObject>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>

#include "entities/hero.h"
#include "serializers/jsonserializable.h"

namespace entities {

    class HeroContainer : public JsonSerializable
    {
    public:
        HeroContainer();

        // JsonSerializable interface
        void read(const QJsonObject &jsonObj);
        void write(QJsonObject &jsonObj) const;

        void add(const Hero &hero);
        QList<Hero> getHeroes() const;

    private:
        QList<Hero> heroes;
    };

}

#endif // HEROCONTAINER_H
