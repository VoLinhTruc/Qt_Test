#include <QCoreApplication>
#include <QDebug>


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

    friend QDebug operator<<(QDebug dbg, const Custom_Class &obj);

private:
    int _x;
    int _y;
    int _z;
};
Q_DECLARE_METATYPE(Custom_Class)


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


QDebug operator<<(QDebug dbg, const Custom_Class &obj)
{
    dbg.nospace() << "{" << "x=" << obj._x << ", " << "y=" << obj._y << ", " << "z=" << obj._z << "}";
    return dbg.nospace();
}

// ------------------------------------------------------------------------------------------------------------------------------------


int main(int argc, char *argv[])
{
    Custom_Class abc(1, 3, 5);

    qDebug().nospace() << "Test" << abc << endl << Custom_Class(6, 9, 6);

    return 1;
}
