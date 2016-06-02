#ifndef MATCH_H
#define MATCH_H

#include <QObject>
#include <entities/playercontainer.h>
#include <serializers/matchjsonserializer.h>

namespace entities
{
    class Match : public JsonSerializable
    {
    public:
        explicit Match();
        /*
         * JsonSerializable Interface
         */
        void read(const QJsonObject &jsonObj);
        void write(QJsonObject &jsonObj) const;

        /*
         * Getters
         */
        bool getRadiantWin() const;
        int getDuration() const;
        int getStartTime() const;
        qint64 getMatchId() const;
        qint64 getMatchSequenceNumber() const;
        int getTowerStatusRadiant() const;
        int getTowerStatusDire() const;
        int getBarracksStatusRadiant() const;
        int getBarracksStatusDire() const;
        int getCluster() const;
        int getFirstBloodTime() const;
        int getLobbyType() const;
        int getHumanPlayers() const;
        int getLeagueId() const;
        int getPositiveVotes() const;
        int getNegativeVotes() const;
        int getGameMode() const;
        int getFlags() const;
        int getEngine() const;
        int getRadiantScore() const;
        int getDireScore() const;

        QList<Player> getPlayers() const;

    private:
        bool radiant_win;
        int duration;
        int start_time;
        qint64 match_id;
        qint64 match_seq_num;
        int tower_status_radiant;
        int tower_status_dire;
        int barracks_status_radiant;
        int barracks_status_dire;
        int cluster;
        int first_blood_time;
        int lobby_type;
        int human_players;
        int leagueid;
        int positive_votes;
        int negative_votes;
        int game_mode;
        int flags;
        int engine;
        int radiant_score;
        int dire_score;

        PlayerContainer players;
    };

}
#endif // MATCH_H
