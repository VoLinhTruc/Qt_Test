#include <QCoreApplication>
#include <QDebug>
#include "a_class.h"



int main(int argc, char *argv[])
{
    Custom_Class cus;
    cus.setVar1(123);
    cus.setVar2(321);

    A_Class a;
    a.setX(69);
    a.setY(96);
    a.setCus(cus);

    QObject *obj = &a;
    int x = obj->property("x").value<int>();
    int y = obj->property("y").value<int>();
//    Custom_Class cus1 = obj->property("cus").value<Custom_Class>();

    qDebug() << x << y << a.cus();


    return 1;
}
