#ifndef CUSTOM_CLASS_H
#define CUSTOM_CLASS_H

#include <QVariant>

class Custom_Class
{
public:
    Custom_Class() = default;
    ~Custom_Class() = default;
    Custom_Class(const Custom_Class &) = default;
    Custom_Class &operator=(const Custom_Class &) = default;

    Custom_Class(int x, int y, int z);

    int x();
    void x(int x);
    int y();
    void y(int y);
    int z();
    void z(int z);

private:
    int _x;
    int _y;
    int _z;
};
Q_DECLARE_METATYPE(Custom_Class)

#endif // CUSTOM_CLASS_H
