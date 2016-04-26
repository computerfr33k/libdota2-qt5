#include "matchhistory.h"

MatchHistory::MatchHistory()
{

}


void MatchHistory::read(const QJsonObject &jsonObj)
{
    // TODO: Parse matches

    this->status = jsonObj["status"].toInt();
    if (!this->isSuccess()) {
        this->statusDetail = jsonObj["statusDetail"].toString();
    }

    this->num_results = jsonObj["num_results"].toInt();
    this->total_results = jsonObj["total_results"].toInt();
    this->results_remaining = jsonObj["results_remaining"].toInt();
}

void MatchHistory::write(QJsonObject &jsonObj) const
{
    // TODO: Implement serializer
}

/**
 * status code of 1 means success
 *
 * @brief MatchHistory::isSuccess
 * @return
 */
bool MatchHistory::isSuccess()
{
    return this->status == 1;
}

int MatchHistory::getStatus()
{
    return this->status;
}

QString MatchHistory::getStatusDetail()
{
    return this->statusDetail;
}

int MatchHistory::getNumberOfResults()
{
    return this->num_results;
}

int MatchHistory::getTotalResults()
{
    return this->total_results;
}

int MatchHistory::getResultsRemaining()
{
    return this->results_remaining;
}
