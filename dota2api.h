#ifndef DOTA2API_H
#define DOTA2API_H

#include "libdota2_global.h"
#include "parsedreplaydata.h"

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

#include "parsedreplaydata.h"

class LIBDOTA2SHARED_EXPORT Dota2API : public QObject
{
    Q_OBJECT

public:
    Dota2API(QObject *parent = 0);
    ~Dota2API();

    QString getLibVersion();
    void getMatchInfo(QString match_id);
    void setApiKey(QString api_key);

public:
    static QString const matchDetailsURL;

signals:
    void matchInfoReady(QJsonDocument);

private:
    //Functions
    //

    // Members
    QString lib_version;
    QString apiKey;
    ParsedReplayData parser;

    QNetworkAccessManager *netManager;
    QNetworkRequest netRequest;
    QNetworkReply *netReply;
    //

private slots:
    void netError(QNetworkReply::NetworkError);
    void dlMatchInfoFinished();
    void downloadProgress(qint64, qint64);
    void netAccessChanged(QNetworkAccessManager::NetworkAccessibility);
};

#endif // DOTA2API_H
