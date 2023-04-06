#ifndef Q_PROPERTY_H
#define Q_PROPERTY_H

#include <QObject>

class q_property : public QObject
{
    Q_OBJECT
    QString message;
public:
    explicit q_property(QObject *parent = nullptr);
    Q_PROPERTY(QString message READ getMessage WRITE setMessage NOTIFY messageChanged)
    QString getMessage();
    void setMessage(QString newMessage);

signals:

    void messageChanged(QString msg);

};

#endif // Q_PROPERTY_H
