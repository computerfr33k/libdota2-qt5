#include "hero.h"

namespace entities {

    /*
     * Set blank/default values
     */
    Hero::Hero(): id(0), name(""), localizedName("")
    {
    }

    void Hero::read(const QJsonObject &jsonObj)
    {
        this->name = jsonObj["name"].toString();
        this->id = jsonObj["id"].toInt();

        /*
         * This is only present when the language parameter is set in the API call
         */
        if (jsonObj.contains("localized_name")) {
            this->localizedName = jsonObj["localized_name"].toString();
        }
    }

    void Hero::write(QJsonObject &jsonObj) const
    {
        jsonObj["name"] = this->name;
        jsonObj["id"] = this->id;
        jsonObj["localized_name"] = this->localizedName;
    }

    QString Hero::getName() const
    {
        return this->name;
    }

    int Hero::getId() const
    {
        return this->id;
    }

    QString Hero::getLocalizedName() const
    {
        return this->localizedName;
    }
}
