#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>
#include <QDebug>
class destination : public QObject
{
    Q_OBJECT
public:
    explicit destination(QObject *parent = nullptr);

signals:

public slots:
    void mySlot(QString msg);
};

#endif // DESTINATION_H
