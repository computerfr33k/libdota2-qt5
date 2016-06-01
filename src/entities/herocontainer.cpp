#include "herocontainer.h"

namespace entities {

    HeroContainer::HeroContainer()
    {
    }

    void HeroContainer::read(const QJsonObject &jsonObj)
    {
        // json encapsulates the QJsonArray
        QJsonArray jsonArray = jsonObj["heroes"].toArray();
        foreach(QJsonValue jsonHero, jsonArray)
        {
            Hero m;
            // the QJsonValue encapsulates the hero QJsonObject
            m.read(jsonHero.toObject());
            this->heroes.append(m);
        }
    }

    void HeroContainer::write(QJsonObject &jsonObj) const
    {
    }

    void HeroContainer::add(const Hero &hero)
    {
        this->heroes.append(hero);
    }

    QList<Hero> HeroContainer::getHeroes() const
    {
        return heroes;
    }

}
