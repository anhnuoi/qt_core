#include "destination.h"

destination::destination(QObject *parent)
    : QObject{parent}
{

}

void destination::mySlot(QString msg)
{
    qInfo()<<"mySlot have a message: "<<msg;
}
