#ifndef STATION_H
#define STATION_H

#include <QObject>

class station : public QObject
{
    Q_OBJECT
public:
    explicit station(QObject *parent = nullptr,int channel=0,QString name="unkown");
    QString name;
    int channel;
signals:
    void send(int channel,QString name,QString msg);
public slots:
    void broadcast(QString msg);
};

#endif // STATION_H
