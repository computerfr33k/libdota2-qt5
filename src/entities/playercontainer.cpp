#include "playercontainer.h"

namespace entities
{

PlayerContainer::PlayerContainer()
{

}

void PlayerContainer::write(QJsonObject &jsonObj) const
{
    QJsonArray jsonArray;
    foreach (Player p, this->players) {
        QJsonObject jsonPlayer;
        p.write(jsonPlayer);
        jsonArray.append(jsonPlayer);
    }

    jsonObj["players"] = jsonArray;
}

void PlayerContainer::read(const QJsonObject &jsonObj)
{
    // json encapsulates the QJsonArray
    QJsonArray jsonArray = jsonObj["players"].toArray();
    foreach(QJsonValue jsonPerson, jsonArray)
    {
        Player p;
        // the QJsonValue encapsulates the player QJsonObject
        p.read(jsonPerson.toObject());
        this->players.append(p);
    }
}

void PlayerContainer::add(Player &p)
{
    this->players.append(p);
}

QList<Player> PlayerContainer::getPlayers()
{
    return this->players;
}

}
