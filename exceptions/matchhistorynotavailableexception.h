#ifndef MATCHHISTORYNOTAVAILABLEEXCEPTION_H
#define MATCHHISTORYNOTAVAILABLEEXCEPTION_H

#include <QtConcurrent/QtConcurrent>
#include <QString>

class MatchHistoryNotAvailableException : public QtConcurrent::Exception
{
public:
    MatchHistoryNotAvailableException();
    MatchHistoryNotAvailableException(QString msg);

    void raise() const { throw *this; }
    void setMessage(QString message);
    const QString getExceptionMessage();

private:
    QString message;
};

#endif // MATCHHISTORYNOTAVAILABLEEXCEPTION_H
