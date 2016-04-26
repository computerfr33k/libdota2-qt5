#ifndef MATCHCONTAINER_H
#define MATCHCONTAINER_H

#include <QList>
#include <QJsonArray>
#include <entities/match.h>
#include <serializers/matchjsonserializer.h>

namespace entities
{
    class MatchContainer : public JsonSerializable
    {
    public:
        MatchContainer();

        void add(const Match &m);
        QList<Match> getMatches() const;

        // JsonSerializable interface
        void read(const QJsonObject &jsonObj);
        void write(QJsonObject &jsonObj) const;

    private:
        QList<Match> matches;
    };
}

#endif // MATCHCONTAINER_H
