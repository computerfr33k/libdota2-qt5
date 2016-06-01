#ifndef PLAYERCONTAINER_H
#define PLAYERCONTAINER_H

#include <serializers/playerjsonserializer.h>
#include <entities/player.h>
#include <QList>
#include <QJsonArray>

namespace entities
{
    class PlayerContainer : public JsonSerializable
    {
    public:
        PlayerContainer();

        void add(Player &p);
        void write(QJsonObject &jsonObj) const;
        void read(const QJsonObject &jsonObj);

        QList<Player> getPlayers() const;

    private:
        QList<Player> players;
    };
}
#endif // PLAYERCONTAINER_H
