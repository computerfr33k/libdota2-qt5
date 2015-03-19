#include "parsedreplaydata.h"

ParsedReplayData::ParsedReplayData(QObject *parent) : QObject(parent)
{
}

void ParsedReplayData::parse(const QJsonDocument &replayData)
{
    replayData.object().value("");
}
