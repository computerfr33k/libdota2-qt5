#include "dota2api.h"

Dota2API::Dota2API()
{
    qnam = new QNetworkAccessManager;
}

Dota2API::~Dota2API()
{
    delete qnam;
}

const Match Dota2API::getMatchInfo(QString matchId)
{
    QString urlBuilder = baseUrl.toString();
    urlBuilder.append("GetMatchDetails/v001/");
    urlBuilder.append("?key=" + this->key);
    urlBuilder.append("&match_id=" + matchId);

    QUrl url = QUrl(urlBuilder);
    QNetworkReply *reply = qnam->get(QNetworkRequest(url));

    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QString response = reply->readAll();
    reply->close();
    reply->deleteLater();

    Match match_response;
    std::string err;

    rapidjson::Document d;
    d.Parse(response.toStdString().c_str());

    rapidjson::Value &result = d["result"];

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    result.Accept(writer);

    pbjson::json2pb(buffer.GetString(), &match_response, err);

    return match_response;
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
    this->key = key;
}

const QString Dota2API::getKey()
{
    return this->key;
}

void Dota2API::setLanguage(QString lang)
{
    this->language = lang;
}
