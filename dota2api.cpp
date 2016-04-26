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

const Match Dota2API::getMatchInfo(QString matchId)
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

const QList<QString> Dota2API::getMatchHistory(QString steamId)
{
    QString urlBuilder = baseUrl.toString();
    urlBuilder.append("GetMatchHistory/v1/");
    urlBuilder.append("?key=" + this->key);
    urlBuilder.append("&account_id=" + steamId);

    QUrl url = QUrl(urlBuilder);
    QNetworkReply *reply = qnam->get(QNetworkRequest(url));

    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QJsonDocument json = QJsonDocument::fromJson(reply->readAll());
    qDebug() << json.toJson();

    return QList<QString>();

    /**
{
    "result": {
        "status": 15,
        "statusDetail": "Cannot get match history for a user that hasn't allowed it"
    }
}
    */

    // throw MatchHistoryNotAvailableException("Player has private match history");
}

void Dota2API::setFormat(QString format)
{
    this->format = format;
}

void Dota2API::setKey(QString key)
{
    Dota2API::key = key;
}

const QString Dota2API::getKey()
{
    return Dota2API::key;
}

void Dota2API::setLanguage(QString lang)
{
    this->language = lang;
}
