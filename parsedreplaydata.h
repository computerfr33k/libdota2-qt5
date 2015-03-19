#ifndef PARSEDREPLAYDATA
#define PARSEDREPLAYDATA

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

class ParsedReplayData : public QObject
{
    Q_OBJECT

public:
    explicit ParsedReplayData(QObject *parent = 0);
    void parse(const QJsonDocument &replayData);

signals:
    void parseFinished();
};

#endif // PARSEDREPLAYDATA

