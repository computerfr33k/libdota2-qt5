#include "dota2api.h"

// Initialize static members
QUrl Dota2API::baseUrl = QUrl("https://api.steampowered.com/IDOTA2Match_570/");
QString Dota2API::key = "";
QString Dota2API::language  = "en_us";
QString Dota2API::format = "json";
// end initialize static

Dota2API::Dota2API()
{
    qnam = new QNetworkAccessManager;
    QNetworkDiskCache *cache = new QNetworkDiskCache;
    cache->setCacheDirectory(QStandardPaths::standardLocations(QStandardPaths::CacheLocation).first());
    qnam->setCache(cache);
}

Dota2API::~Dota2API()
{
    delete qnam;
}

Match Dota2API::getMatchDetails(QString matchId) const
{
    QString urlBuilder = baseUrl.toString();
    urlBuilder += QString("GetMatchDetails/v001/?key=%1&match_id=%2").arg(this->getKey()).arg(matchId);
    qDebug() << urlBuilder;

    QUrl url = QUrl::fromUserInput(urlBuilder);
    QNetworkRequest request(url);
    request.setAttribute(QNetworkRequest::CacheLoadControlAttribute, QNetworkRequest::PreferCache);
    QNetworkReply *reply = qnam->get(request);

    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QString response = reply->readAll();
    reply->close();
    reply->deleteLater();

    QJsonDocument json = QJsonDocument::fromJson(response.toUtf8());
    QJsonDocument doc;
    doc.setObject(json.object().value("result").toObject());

    Match match;
    MatchJsonSerializer::parse(doc.toJson(), match);

    return match;
}

/**
 * ref: https://wiki.teamfortress.com/wiki/WebAPI/GetMatchHistory
 *
 * @brief Dota2API::getMatchHistory
 * @param accountId
 * @return
 */
MatchHistory Dota2API::getMatchHistory(QString accountId) const
{
    QString urlBuilder = baseUrl.toString();
    urlBuilder.append("GetMatchHistory/v1/");
    urlBuilder.append("?key=" + this->key);
    urlBuilder.append("&account_id=" + accountId);

    QUrl url = QUrl(urlBuilder);
    QNetworkReply *reply = qnam->get(QNetworkRequest(url));

    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QJsonDocument json = QJsonDocument::fromJson(reply->readAll());
    reply->close();
    reply->deleteLater();

    int resultStatus = json.object().value("result").toObject().value("status").toInt();
    if (resultStatus == 15) {
        throw QException();
    }

    QJsonDocument resultJson;
    resultJson.setObject(json.object().value("result").toObject());

    MatchHistory history;
    MatchJsonSerializer::parse(resultJson.toJson(), history);

    return history;

    // throw MatchHistoryNotAvailableException("Player has private match history");
}

QList<Match> Dota2API::getMatchHistoryBySequenceNumber(qint64 start_match_seq_num) const
{
    QString urlBuilder = baseUrl.toString();
    urlBuilder.append("GetMatchHistoryBySequenceNum/v1/");
    urlBuilder.append("?key=" + this->key);
    urlBuilder.append("&start_at_match_seq_num=" + QString::number(start_match_seq_num));

    QUrl url = QUrl(urlBuilder);
    qDebug() << url.toString();
    QNetworkReply *reply = qnam->get(QNetworkRequest(url));

    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QJsonDocument json = QJsonDocument::fromJson(reply->readAll());
    reply->close();
    reply->deleteLater();

    int status = json.object().value("result").toObject().value("status").toInt();
    if (status == 8) {
        throw QException();
    }

    json.setObject(json.object().value("result").toObject());
    MatchContainer matches;
    MatchJsonSerializer::parse(json.toJson(), matches);

    return matches.getMatches();
}

HeroContainer Dota2API::getHeroes(QString language, bool itemizedOnly) const
{
    QString urlBuilder = "https://api.steampowered.com/";
    urlBuilder.append("IEconDOTA2_570/GetHeroes/v1");
    urlBuilder.append("?key=" + this->getKey());
    urlBuilder.append("&language=" + language);

    QUrl url = QUrl(urlBuilder);
    QNetworkRequest req(url);
    req.setAttribute(QNetworkRequest::CacheLoadControl, QNetworkRequest::PreferCache);
    QNetworkReply *reply = qnam->get(req);

    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QJsonDocument json = QJsonDocument::fromJson(reply->readAll());
    json.setObject(json.object().value("result").toObject());

    HeroContainer heroes;
    MatchJsonSerializer::parse(json.toJson(), heroes);

    reply->close();
    reply->deleteLater();

    return heroes;
}

void Dota2API::setFormat(QString format)
{
    this->format = format;
}

void Dota2API::setKey(QString key)
{
    Dota2API::key = key;
}

QString Dota2API::getKey() const
{
    return Dota2API::key;
}

void Dota2API::setLanguage(QString lang)
{
    this->language = lang;
}
