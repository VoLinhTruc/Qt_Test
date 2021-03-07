#include "custom_class.h"


int Custom_Class::var1() const
{
    return _var1;
}

void Custom_Class::setVar1(int var1)
{
    _var1 = var1;
}

int Custom_Class::var2() const
{
    return _var2;
}

void Custom_Class::setVar2(int var2)
{
    _var2 = var2;
}


QDebug operator<<(QDebug dbg, const Custom_Class &obj)
{
    dbg.nospace() << "{" << "x=" << obj._var1 << ", " << "y=" << obj._var2 << "}";
    return dbg.nospace();
}
