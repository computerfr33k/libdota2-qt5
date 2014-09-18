#include "dota2api.h"

//const variables
const QString Dota2API::matchDetailsURL = "https://api.steampowered.com/IDOTA2Match_570/GetMatchDetails/V001/?key=<api_key>&match_id=<match_id>";
//end const variables

Dota2API::Dota2API(QObject *parent) : QObject(parent)
{
    this->lib_version = "0.1";
    this->netManager = new QNetworkAccessManager();
}

Dota2API::~Dota2API()
{
    delete netManager;
}

QString Dota2API::getLibVersion()
{
    return this->lib_version;
}

void Dota2API::setApiKey(QString api_key)
{
    this->apiKey = api_key;
}

void Dota2API::getMatch(QString match_id)
{
    QString matchUrl = Dota2API::matchDetailsURL;
    QUrl url = QUrl(matchUrl.replace("<api_key>", this->apiKey).replace("<match_id>", match_id));

    this->netReply = this->netManager->get(QNetworkRequest(url));
    connect(this->netReply, SIGNAL(finished()), this, SLOT(downloadReadyRead()));

    connect(netReply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(netError(QNetworkReply::NetworkError)));
}

void Dota2API::downloadReadyRead()
{
    QString tmp =  "{\"name\":\"test\"}";
    QJsonDocument json;
    json = QJsonDocument::fromJson(tmp.toLatin1());

    emit matchInfoReady(json);
}

QJsonDocument Dota2API::loadReplayFromFile(QString path)
{

    return QJsonDocument();
}

void Dota2API::netError(QNetworkReply::NetworkError netError)
{
    qDebug() << this->netReply->errorString();
}
