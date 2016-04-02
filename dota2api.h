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
#include <QDebug>

#include "dota2api_global.h"
#include "Protobuf/generated/Match.pb.h"
#include <pbjson.hpp>
#include "dependencies/pbjson/src/rapidjson/document.h"
#include "dependencies/pbjson/src/rapidjson/writer.h"
#include "dependencies/pbjson/src/rapidjson/rapidjson.h"
#include "dependencies/pbjson/src/rapidjson/stringbuffer.h"

using computerfr33k::dota2::entities::Match;

class DOTA2APISHARED_EXPORT Dota2API
{
public:
    explicit Dota2API();
    ~Dota2API();

    const Match getMatchInfo(QString matchId);

    const QString getKey();

    /*
     * Set API settings
     */
    void setKey(QString key);
    void setLanguage(QString lang);
    void setFormat(QString format);

protected:
    QUrl baseUrl = QUrl("https://api.steampowered.com/IDOTA2Match_570/");
    QString key;
    QString language = "en_us";
    QString format = "json";

private:
    QNetworkAccessManager *qnam;
};

#endif // DOTA2API_H
