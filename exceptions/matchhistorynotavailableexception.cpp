#include "matchhistorynotavailableexception.h"

MatchHistoryNotAvailableException::MatchHistoryNotAvailableException()
{
    this->message = "Match History Not Available.";
}

MatchHistoryNotAvailableException::MatchHistoryNotAvailableException(QString msg) : message(msg)
{
}

void MatchHistoryNotAvailableException::setMessage(QString message)
{
    this->message = message;
}

const QString MatchHistoryNotAvailableException::getExceptionMessage()
{
    return this->message;
}
