#include "a_class.h"

A_Class::A_Class(QObject *parent) : QObject(parent)
{

}

int A_Class::x() const
{
    return _x;
}

void A_Class::setX(int x)
{
    _x = x;
}

int A_Class::y() const
{
    return _y;
}

void A_Class::setY(int y)
{
    _y = y;
}

Custom_Class A_Class::cus() const
{
    return _cus;
}

void A_Class::setCus(const Custom_Class &cus)
{
    _cus = cus;
}
