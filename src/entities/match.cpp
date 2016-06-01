#include "match.h"

namespace entities
{

    Match::Match()
    {

    }

    void Match::read(const QJsonObject & jsonObj)
    {
        this->radiant_win = jsonObj["radiant_win"].toBool();
        this->duration = jsonObj["duration"].toInt();
        this->start_time = jsonObj["start_time"].toInt();
        this->match_id = lrint(jsonObj["match_id"].toDouble());
        this->match_seq_num = lrint(jsonObj["match_seq_num"].toDouble());
        this->tower_status_radiant = jsonObj["tower_status_radiant"].toInt();
        this->tower_status_dire = jsonObj["tower_status_dire"].toInt();
        this->barracks_status_radiant = jsonObj["barracks_status_radiant"].toInt();
        this->barracks_status_dire = jsonObj["barracks_status_dire"].toInt();
        this->cluster = jsonObj["cluster"].toInt();
        this->first_blood_time = jsonObj["first_blood_time"].toInt();
        this->lobby_type = jsonObj["lobby_type"].toInt();
        this->human_players = jsonObj["human_players"].toInt();
        this->leagueid = jsonObj["leagueid"].toInt();
        this->positive_votes = jsonObj["positive_votes"].toInt();
        this->negative_votes = jsonObj["negative_votes"].toInt();
        this->game_mode = jsonObj["game_mode"].toInt();
        this->flags = jsonObj["flags"].toInt();
        this->engine = jsonObj["engine"].toInt();
        this->radiant_score = jsonObj["radiant_score"].toInt();
        this->dire_score = jsonObj["dire_score"].toInt();

        // Parse Players
        QJsonDocument doc;
        doc.setObject(jsonObj);
        PlayerContainer players;
        PlayerJsonSerializer::parse(doc.toJson(), players);

        this->players = players;
    }

    void Match::write(QJsonObject & jsonObj) const
    {
        jsonObj["radiant_win"] = this->radiant_win;
        jsonObj["duration"] = this->duration;
    }

    bool Match::getRadiantWin()
    {
        return this->radiant_win;
    }

    int Match::getDuration() const
    {
        return this->duration;
    }

    int Match::getStartTime() const
    {
        return start_time;
    }

    qint64 Match::getMatchId() const
    {
        return match_id;
    }

    qint64 Match::getMatchSequenceNumber() const
    {
        return this->match_seq_num;
    }

    int Match::getTowerStatusRadiant() const
    {
        return this->tower_status_radiant;
    }

    int Match::getTowerStatusDire() const
    {
        return this->tower_status_dire;
    }

    int Match::getBarracksStatusRadiant() const
    {
        return this->barracks_status_radiant;
    }

    int Match::getBarracksStatusDire() const
    {
        return this->barracks_status_dire;
    }

    int Match::getCluster() const
    {
        return this->cluster;
    }

    int Match::getFirstBloodTime() const
    {
        return this->first_blood_time;
    }

    int Match::getLobbyType() const
    {
        return this->lobby_type;
    }

    int Match::getHumanPlayers() const
    {
        return this->human_players;
    }

    int Match::getLeagueId() const
    {
        return this->leagueid;
    }

    int Match::getPositiveVotes() const
    {
        return this->positive_votes;
    }

    int Match::getNegativeVotes() const
    {
        return this->negative_votes;
    }

    int Match::getGameMode() const
    {
        return this->game_mode;
    }

    int Match::getFlags() const
    {
        return this->flags;
    }

    int Match::getEngine() const
    {
        return this->engine;
    }

    int Match::getRadiantScore() const
    {
        return this->radiant_score;
    }

    int Match::getDireScore() const
    {
        return this->dire_score;
    }

    QList < Player > Match::getPlayers() const
    {
        return this->players.getPlayers();
    }

}
