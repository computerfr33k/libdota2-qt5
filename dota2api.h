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
#include <QThread>
#include <QCoreApplication>

class LIBDOTA2SHARED_EXPORT Dota2API : public QObject
{
    Q_OBJECT

public:
    Dota2API(QObject *parent = 0);
    ~Dota2API();

    QString getLibVersion();
    void getMatch(QString match_id);
    void setApiKey(QString api_key);
    QJsonDocument loadReplayFromFile(QString path /*full path including filename*/);

signals:
    void matchInfoReady(QJsonDocument);

private:
    //Functions
    //

    // Members
    static QString const matchDetailsURL;

    QString lib_version;
    QString apiKey;

    QNetworkAccessManager *netManager;
    QNetworkRequest netRequest;
    QNetworkReply *netReply;
    //

private slots:
    void netError(QNetworkReply::NetworkError);
    void downloadReadyRead();
    void downloadProgress(qint64, qint64);
    void netAccessChanged(QNetworkAccessManager::NetworkAccessibility);
};

#endif // DOTA2API_H
