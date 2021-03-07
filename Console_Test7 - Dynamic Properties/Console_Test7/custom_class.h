#ifndef CUSTOM_CLASS_H
#define CUSTOM_CLASS_H

#include <QVariant>
#include <QDebug>

class Custom_Class
{
public:
    Custom_Class() = default;
    ~Custom_Class() = default;
    Custom_Class(const Custom_Class &) = default;
    Custom_Class &operator=(const Custom_Class &) = default;

    int var1() const;
    void setVar1(int var1);

    int var2() const;
    void setVar2(int var2);

    friend QDebug operator<<(QDebug dbg, const Custom_Class &obj);

private:
    int _var1;
    int _var2;
};
Q_DECLARE_METATYPE(Custom_Class)

#endif // CUSTOM_CLASS_H
