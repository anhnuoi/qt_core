#include "q_property_watch.h"

q_property_watch::q_property_watch(QObject *parent)
    : QObject{parent}
{

}

void q_property_watch::printMsg(QString msg)
{
    qInfo()<<"Message: "<<msg;
}
