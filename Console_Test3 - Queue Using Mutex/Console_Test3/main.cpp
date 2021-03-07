#include <QCoreApplication>
#include <QDebug>
#include <QVariant>
#include <QDebug>

#include "mutex_queue.h"

// ------------------------------------------------------------------------------------------------

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
    return dbg.maybeSpace();
}

// ------------------------------------------------------------------------------------------------


int main(int argc, char *argv[])
{
    Mutex_Queue<QVariant> queue;

    queue.enqueue(69);
    queue.enqueue(QVariant::fromValue(Custom_Class(3, 5, 7)));  // enqueue the Custom_Class to queue
    queue.enqueue("96");

    qDebug().nospace() << queue.dequeue().value<QString>() << queue.dequeue().value<Custom_Class>() << queue.dequeue().value<int>() << Qt::endl; // dequeue the Custom_Class from queue

    return 1;
}
