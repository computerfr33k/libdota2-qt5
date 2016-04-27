#include "matchcontainer.h"

namespace entities
{

MatchContainer::MatchContainer()
{

}

void MatchContainer::add(const Match &m)
{
    this->matches.append(m);
}

QList<Match> MatchContainer::getMatches() const
{
    return this->matches;
}

void MatchContainer::read(const QJsonObject &jsonObj)
{
    // json encapsulates the QJsonArray
    QJsonArray jsonArray = jsonObj["matches"].toArray();
    foreach(QJsonValue jsonMatch, jsonArray)
    {
        Match m;
        // the QJsonValue encapsulates the player QJsonObject
        m.read(jsonMatch.toObject());
        this->matches.append(m);
    }
}

void MatchContainer::write(QJsonObject &jsonObj) const
{
}

}
