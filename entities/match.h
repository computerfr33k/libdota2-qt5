#ifndef MATCH_H
#define MATCH_H

#include <QObject>
#include <entities/playercontainer.h>
#include <serializers/matchjsonserializer.h>

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
    bool getRadiantWin();
    int getDuration();
    int getStartTime();
    qint64 getMatchId();
    qint64 getMatchSequenceNumber();
    int getTowerStatusRadiant();
    int getTowerStatusDire();
    int getBarracksStatusRadiant();
    int getBarracksStatusDire();
    int getCluster();
    int getFirstBloodTime();
    int getLobbyType();
    int getHumanPlayers();
    int getLeagueId();
    int getPositiveVotes();
    int getNegativeVotes();
    int getGameMode();
    int getFlags();
    int getEngine();
    int getRadiantScore();
    int getDireScore();

    QList<Player> getPlayers();

signals:

public slots:

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

#endif // MATCH_H
