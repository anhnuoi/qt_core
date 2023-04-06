#include "animal.h"

animal::animal(QObject *parent,QString type)
    : QObject{parent}
{
    qInfo()<<"The type of instance is "<<type;
}

animal::~animal()
{
   qInfo()<<"Decontructor class";
}
