#include "custom_class.h"


Custom_Class::Custom_Class(int x, int y, int z)
{
    _x = x;
    _y = y;
    _z = z;
}

int Custom_Class::x()
{
    return _x;
}

void Custom_Class::x(int x)
{
    _x = x;
}

int Custom_Class::y()
{
    return _y;
}

void Custom_Class::y(int y)
{
    _y = y;
}

int Custom_Class::z()
{
    return _z;
}

void Custom_Class::z(int z)
{
    _z = z;
}
