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

    /**
     * @brief HeroContainer::write
     * @param jsonObj
     */
    void HeroContainer::write(QJsonObject &jsonObj) const
    {
        QJsonArray jsonArray;
        foreach (Hero h, this->heroes) {
            QJsonObject jsonHero;
            h.write(jsonHero);
            jsonArray.append(jsonHero);
        }

        jsonObj["heroes"] = jsonArray;
    }

    /**
     * @brief HeroContainer::getHeroes
     * @return
     */
    QList<Hero> HeroContainer::getHeroes() const
    {
        return this->heroes;
    }

    /**
     * @brief HeroContainer::getHeroById
     * @param id
     * @return
     */
    Hero HeroContainer::getHeroById(int id) const
    {
        if (this->heroes.size() < 1) {
            throw new QException;
        }

        Hero h;
        for (int i=0; i < this->heroes.size(); i++) {
            h = this->heroes.at(i);
            if (h.getId() == id) {
                return h;
            }
        }

        throw new QException;
    }

    /**
     * @brief HeroContainer::getHeroByName
     * @param name
     * @return
     */
    Hero HeroContainer::getHeroByName(QString name) const
    {
        throw new QException;
    }

    /**
     * @brief HeroContainer::add
     * @param hero
     */
    void HeroContainer::add(const Hero &hero)
    {
        this->heroes.append(hero);
    }

}
