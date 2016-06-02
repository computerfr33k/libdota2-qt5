#ifndef HEROCONTAINER_H
#define HEROCONTAINER_H

#include <QObject>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QException>

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

        /*
         * Getters
         */
        QList<Hero> getHeroes() const;
        Hero getHeroById(int id) const;
        Hero getHeroByName(QString name) const;

        /*
         * Setters
         */
        void add(const Hero &hero);

    private:
        QList<Hero> heroes;
    };

}

#endif // HEROCONTAINER_H
