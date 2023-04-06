#include <QCoreApplication>
#include <animal.h>
#include <destination.h>
#include <source.h>
#include <station.h>
#include <radio.h>
#include <iostream>
#include <QTextStream>
#include <q_property.h>
#include <q_property_watch.h>
#include <generic.h>
#include <QDateTime>
#include <QTime>
#include <QDate>
using namespace std;
/*!
 * A function to learn  try catch throw
 * @author Pham Anh <anhlbvbnd26@gmail.com>
 * @param devided an int number that will be deivide by "vaule"
 * "value" use to explain about try catch throw
 */
bool doDivison(int devided){
    try {
        int value;
        qInfo()<<"Enter a number to devide";
        cin>>value;
        if(value==0) throw "Can not divide by zero!";
        if(value>100) throw -1;
        if (value==1) throw runtime_error("Should be another number than 1");
        int result=devided/value;
        qInfo()<<"Result: "<<result;

    }
    catch(exception const&e){
        qWarning()<<"we caught an std exception: "<<e.what();
        return false;
    }
    catch(int e){
        qWarning()<<"we caught an number: "<<e;
        return false;
    }
    catch(QString e){
        qWarning()<<"we caught an error String: "<<e;
        return false;
    }
    catch (...) {
        qWarning()<<"Something wrong but not kwon what is";
        return false;
    }
    return true;
}
void test(QVariant value){
    qInfo()<<value;
    int test=0;
    bool ok=false;
    test=value.toInt(&ok);
    if(ok) qInfo()<<"Test is number: "<<test;
    else qInfo()<<"Test is not a number";
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
 //   generic<int> addInt;
    generic<QString> addSt;
    animal cat(&a,"cat");
   // animal dog;
   // animal mouse;
    destination des;
    source src;
    QObject::connect(&src,&source::mySignal,&des,&destination::mySlot);
    src.test();
    q_property q_p;
    q_property_watch q_pw;
    QObject::connect(&q_p, &q_property::messageChanged,&q_pw,&q_property_watch::printMsg);
//   q_p.setProperty("message","ngocanhnu");
    int devided=100;
    q_p.setMessage("ngocanhnu");
//    do{
//        qInfo()<<"Keep going";
//    }while (doDivison(devided));
    qInfo()<<"Nothing here";
    qInfo()<<"generic cua ham la: ";
   // addInt.add(5,6);
    qInfo()<<addSt.add("15","35");

    // qint ********
    qint8 int8=0;
    qint16 int16=0;
    qintptr intptr=0;
    qInfo()<<sizeof(int8)<<" "<<sizeof(int16)<<" "<<sizeof(intptr)<<" ";

    //qdate******
    QDate today=QDate::currentDate();
    qInfo()<<today;
    qInfo()<<today.toString(Qt::DateFormat::TextDate);

    QTime now=QTime::currentTime();
    qInfo()<<now.toString();

    //qByteArray
    QString greeting="Hello NGoc Anh nu";
    QByteArray buffer(greeting.toLatin1());
    buffer.append("!!!");
    qInfo()<<buffer;
    qInfo()<<buffer.rightJustified(30,'.');
    QString modified(buffer);
    qInfo()<<modified;

    //qVariant
    QVariant value=1; QVariant value2="naruto";
    test(value);test(value2);
    return a.exec();
}
