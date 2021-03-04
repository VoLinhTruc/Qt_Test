#include <QCoreApplication>
#include <QDebug>
#include <QVariant>
#include "custom_class.h"


int main(int argc, char *argv[])
{
    Custom_Class cus_obj(1, 2, 3);
    qDebug() << cus_obj.x() << " " << cus_obj.y() << " " << cus_obj.z() << " " << Qt::endl;

    QVariant my_var = QVariant::fromValue(cus_obj);

    Custom_Class cus_obj_from_var = my_var.value<Custom_Class>();

    qDebug() << cus_obj_from_var.z() << " " << cus_obj_from_var.y() << " " << cus_obj_from_var.x() << " " << Qt::endl;

    return 1;
}
