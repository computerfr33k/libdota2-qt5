#ifndef MATCHHISTORY_H
#define MATCHHISTORY_H

#include <QObject>
#include <QDebug>
#include <serializers/jsonserializable.h>

class MatchHistory : public JsonSerializable
{
public:
    MatchHistory();

    // JsonSerializable interface
    void read(const QJsonObject &jsonObj);
    void write(QJsonObject &jsonObj) const;

    /*
     * Getters
     */
    bool isSuccess();
    int getStatus();
    QString getStatusDetail();
    int getNumberOfResults();
    int getTotalResults();
    int getResultsRemaining();

    /*
     * Setters
     */

private:
    int status;
    QString statusDetail;
    int num_results;
    int total_results;
    int results_remaining;
};

#endif // MATCHHISTORY_H
