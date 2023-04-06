#ifndef ANIMAL_H
#define ANIMAL_H
#include <QDebug>
#include <QObject>
#include <QString>
class animal : public QObject
{
    Q_OBJECT
public:
    explicit animal(QObject *parent = nullptr,QString type="");
    ~animal();
signals:

};

#endif // ANIMAL_H
