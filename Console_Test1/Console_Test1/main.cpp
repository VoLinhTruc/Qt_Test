#include <QCoreApplication>
#include <QDebug>
#include <QVariant>
#include <iostream>

using namespace std;

class My_Class
{
public:
    My_Class() = default;
    ~My_Class() = default;
    My_Class(const My_Class &) = default;
    My_Class &operator=(const My_Class &) = default;

    My_Class(int x, int y, int z);

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
Q_DECLARE_METATYPE(My_Class)

My_Class::My_Class(int x, int y, int z)
{
    _x = x;
    _y = y;
    _z = z;
}

int My_Class::x()
{
    return _x;
}

void My_Class::x(int x)
{
    _x = x;
}

int My_Class::y()
{
    return _y;
}

void My_Class::y(int y)
{
    _y = y;
}

int My_Class::z()
{
    return _z;
}

void My_Class::z(int z)
{
    _z = z;
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    My_Class my_class(1, 2, 3);
    qDebug() << my_class.x() << " " << my_class.y() << " " << my_class.z() << " " << Qt::endl;

    QVariant my_var = QVariant::fromValue(my_class);

    My_Class my_class_from_variant = my_var.value<My_Class>();

    qDebug() << my_class_from_variant.x() << " " << my_class_from_variant.y() << " " << my_class_from_variant.z() << " " << Qt::endl;

//    return a.exec();
}
