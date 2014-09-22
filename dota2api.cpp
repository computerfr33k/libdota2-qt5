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
}

/* Public Methods */

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

    if(this->netManager->networkAccessible() != QNetworkAccessManager::Accessible)
    {
        qDebug() << "Network Not Connected or cannot be reached!";
        return;
    }

    this->netReply = this->netManager->get(QNetworkRequest(url));
    connect(this->netManager, SIGNAL(networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility)), this, SLOT(netAccessChanged(QNetworkAccessManager::NetworkAccessibility)));

    connect(this->netReply, SIGNAL(finished()), this, SLOT(downloadReadyRead()));
    connect(this->netReply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(downloadProgress(qint64,qint64)));
    connect(this->netReply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(netError(QNetworkReply::NetworkError)));

    //slots for deleting after finished
    connect(this->netManager, SIGNAL(finished(QNetworkReply*)), this->netManager, SLOT(deleteLater()));
    connect(this->netReply, SIGNAL(finished()), this->netReply, SLOT(deleteLater()));

    QEventLoop eventLoop;
    //connect(this->netReply, SIGNAL(finished()), &eventLoop, SLOT(quit()));

    qDebug() << "Event Loop (library)[bool]: " << eventLoop.processEvents();
}

QJsonDocument Dota2API::loadReplayFromFile(QString path)
{

    return QJsonDocument();
}

/* End Public Methods */

/* Private Methods */
/* End Private Methods */

/* Private Slots */
void Dota2API::downloadReadyRead()
{
    // emits the signal so the caller knows when dl is complete.
    // also sends the data as a json document to the caller's slot
    emit matchInfoReady(QJsonDocument::fromJson( this->netReply->readAll() ));
}

void Dota2API::downloadProgress(qint64 curr, qint64 tot)
{
    qDebug() << " " << curr << " " << tot;
}

void Dota2API::netError(QNetworkReply::NetworkError netError)
{
    qDebug() << this->netReply->errorString();
}

void Dota2API::netAccessChanged(QNetworkAccessManager::NetworkAccessibility state)
{
    qDebug() << state;
}

/* End Private Slots */
