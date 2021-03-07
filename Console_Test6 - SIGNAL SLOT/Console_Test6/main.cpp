#include <QCoreApplication>
#include <QObject>
#include <QDebug>

#include "counter.h"


int main(int argc, char *argv[])
{
    Counter a, b;

    qDebug() << "a" << a.value();
    qDebug() << "b" << b.value() << Qt::endl;

    // #define SIGNAL(x) "2"x
    // #define SLOT(x) "1"x
    // That mean SIGNAL(valueChanged(int)) is "2valueChanged(int)"
    // That mean SLOT(setValue(int)) is "1setValue(int)"
    QObject::connect(&a, SIGNAL(valueChanged(int)), &b, SLOT(setValue(int)));

    // This one is also vailid
//    QObject::connect(&a, "2valueChanged(int)", &b, "1setValue(int)");

    a.setValue(69);

    qDebug() << "a" << a.value();
    qDebug() << "b" << b.value() << Qt::endl;

    return 1;
}
