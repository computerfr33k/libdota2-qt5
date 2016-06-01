#ifndef HERO_H
#define HERO_H

#include <QObject>
#include "serializers/jsonserializable.h"

namespace entities {

    class Hero : public JsonSerializable
    {
    public:
        Hero();
        /*
         * JsonSerializable Interface
         */
        void read(const QJsonObject &jsonObj);
        void write(QJsonObject &jsonObj) const;

        /*
         * Getters
         */
        QString getName() const;
        int getId() const;
        QString getLocalizedName() const;

    private:
        int id;
        QString name;
        QString localizedName;
    };
}

#endif // HERO_H
