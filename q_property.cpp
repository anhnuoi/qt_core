#include "q_property.h"

QString q_property::getMessage()
{
    return message;
}

void q_property::setMessage(QString newMessage)
{
    message = newMessage;
    emit messageChanged(message);
}

q_property::q_property(QObject *parent)
    : QObject{parent}
{

}
