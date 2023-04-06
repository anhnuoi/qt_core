#include "station.h"


station::station(QObject *parent, int channel, QString name): QObject{parent}
{
    this->channel=channel;
    this->name=name;
}

void station::broadcast(QString msg)
{
    emit send(channel,name,msg);
}
