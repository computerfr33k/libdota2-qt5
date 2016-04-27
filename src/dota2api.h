#ifndef DOTA2API_H
#define DOTA2API_H

#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <QList>
#include <QDebug>
#include <QNetworkDiskCache>
#include <QStandardPaths>

#include "dota2api_global.h"
#include <entities/player.h>
#include <entities/playercontainer.h>
#include <entities/match.h>
#include <entities/matchcontainer.h>
#include <entities/matchhistory.h>

using namespace entities;

class DOTA2APISHARED_EXPORT Dota2API
{
public:
    explicit Dota2API();
    ~Dota2API();

    Match getMatchDetails(QString matchId) const;
    MatchHistory getMatchHistory(QString accountId) const;
    QList<Match> getMatchHistoryBySequenceNumber(qint64 start_match_seq_num) const;

    QString getKey() const;

    /*
     * Set API settings
     */
    void setKey(QString key);
    void setLanguage(QString lang);
    void setFormat(QString format);

protected:
    static QUrl baseUrl;
    static QString key;
    static QString language;
    static QString format;

private:
    QNetworkAccessManager *qnam;
};

#endif // DOTA2API_H