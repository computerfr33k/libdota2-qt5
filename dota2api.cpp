#include "dota2api.h"

Dota2API::Dota2API()
{
    qnam = new QNetworkAccessManager;
}

Dota2API::~Dota2API()
{
    delete qnam;
}

/* not the best solution, but maybe I can optimize it later on. Or maybe somebody can submit an idea for how to make this better. */
const QMap<int,QJsonObject> Dota2API::getItems()
{
    QMap<int,QJsonObject> list;

    QFile file("content/data/items.json");
    if(!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();

        /* list will be empty since we never populated due to reading file error */
        return list;
    }

    QJsonDocument items = QJsonDocument::fromJson(file.readAll());
    file.close();

    QJsonArray itemArray = items.object().value("items").toArray();

    int size = itemArray.size();
    for(int i=0; i < size; i++) {
        /* for whatever reason, Qt likes to convert numbers in JSON to doubles. ugh! */
        int id = QString::number(itemArray.at(i).toObject().value("id").toDouble(), 'f', 0).toInt();
        list[id] = itemArray.at(i).toObject();
    }

    return list;
}

const QString Dota2API::getMatchInfo(qint32 matchId)
{
    QString urlBuilder = baseUrl.toString();
    urlBuilder.append("GetMatchDetails/v001/");
    urlBuilder.append("?key=" + this->key);
    urlBuilder.append("&match_id=" + matchId);

    QUrl url = QUrl(urlBuilder);

    QNetworkRequest request = QNetworkRequest(url);
    QNetworkReply *reply = qnam->get(request);

    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    qDebug() << reply->readAll();

    reply->close();
    reply->deleteLater();
}

void Dota2API::setFormat(QString format)
{
    this->format = format;
}

void Dota2API::setKey(QString key)
{
    this->key = key;
}

void Dota2API::setLanguage(QString lang)
{
    this->language = lang;
}
