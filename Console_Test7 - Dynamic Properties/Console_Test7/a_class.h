#ifndef A_CLASS_H
#define A_CLASS_H

#include <QObject>
#include <custom_class.h>

class A_Class : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int x MEMBER _x)
    Q_PROPERTY(int y MEMBER _y)
//    Q_PROPERTY(Custom_Class cus MEMBER _cus)

public:
    explicit A_Class(QObject *parent = nullptr);

    int x() const;
    void setX(int x);

    int y() const;
    void setY(int y);

    Custom_Class cus() const;
    void setCus(const Custom_Class &cus);

private:
    int _x, _y;
    Custom_Class _cus;

signals:

};

#endif // A_CLASS_H
