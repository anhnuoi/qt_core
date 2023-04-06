#ifndef Q_PROPERTY_WATCH_H
#define Q_PROPERTY_WATCH_H

#include <QObject>
#include <QDebug>
class q_property_watch : public QObject
{
    Q_OBJECT
public:
    explicit q_property_watch(QObject *parent = nullptr);

signals:

public slots:
    void printMsg(QString msg);
};

#endif // Q_PROPERTY_WATCH_H
