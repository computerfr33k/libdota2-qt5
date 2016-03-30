#ifndef DOTA2API_H
#define DOTA2API_H

#include <QJsonDocument>
#include <QFile>
#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <QDebug>

#include "dota2api_global.h"
#include "entities/player.h"

class DOTA2APISHARED_EXPORT Dota2API
{
public:
    explicit Dota2API();
    ~Dota2API();
    const QMap<int,QJsonObject> getItems();
    const QString getMatchInfo(qint32 matchId);

    /*
     * Set API settings
     */
    void setKey(QString key);
    void setLanguage(QString lang);
    void setFormat(QString format);

protected:
    QUrl baseUrl = QUrl("https://api.steampowered.com/IDOTA2Match_205790/");
    QString key;
    QString language = "en_us";
    QString format = "json";

private:
    QNetworkAccessManager *qnam;
};

#endif // DOTA2API_H
