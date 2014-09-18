#include "dota2api.h"

//const variables
const QString Dota2API::matchDetailsURL = "http://api.steampowered.com/IDOTA2Match_570/GetMatchDetails/V001/?key=<api_key>&match_id=<match_id>";
//end const variables

Dota2API::Dota2API(QObject *parent) : QObject(parent)
{
    this->lib_version = "0.1";
    this->netManager = new QNetworkAccessManager();
}

Dota2API::~Dota2API()
{
    delete netManager;
    //delete eventLoop;
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
    //connect(this->netManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(downloadReadyRead()));
    connect(this->netReply, SIGNAL(finished()), this, SLOT(downloadReadyRead()));
    connect(this->netReply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(downloadProgress(qint64,qint64)));

    QEventLoop eventLoop;
    connect(this->netReply, SIGNAL(finished()), &eventLoop, SLOT(quit()));
    eventLoop.exec();
}

void Dota2API::downloadProgress(qint64 curr, qint64 tot)
{
    qDebug() << " " << curr << " " << tot;
}

void Dota2API::downloadReadyRead()
{
    // emits the signal so the caller knows when dl is complete.
    // also sends the data as a json document to the caller's slot
    emit matchInfoReady(QJsonDocument::fromJson( this->netReply->readAll() ));
}

QJsonDocument Dota2API::loadReplayFromFile(QString path)
{

    return QJsonDocument();
}

void Dota2API::netError(QNetworkReply::NetworkError netError)
{
    qDebug() << this->netReply->errorString();
}
