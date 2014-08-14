#ifndef DOTA2API_H
#define DOTA2API_H

#include "libdota2_global.h"
#include <QObject>
#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonDocument>
#include <QJsonObject>
#include <QEventLoop>

class LIBDOTA2SHARED_EXPORT Dota2API : public QObject
{
    Q_OBJECT

public:
    Dota2API(QObject *parent = 0);
    ~Dota2API();

    QString getLibVersion();
    QByteArray getMatch(QString match_id);
    void setApiKey(QString api_key);
    QJsonDocument loadReplayFromFile(QString path /*full path including filename*/);

private:
    static QString const matchDetailsURL;

    QString lib_version;
    QString apiKey;
    QNetworkAccessManager *netManager;
    QNetworkRequest netRequest;
    QNetworkReply *netReply;

private slots:
    void netError(QNetworkReply::NetworkError);
};

#endif // DOTA2API_H