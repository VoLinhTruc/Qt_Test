#include "message_data.h"

Message_Data::Message_Data()
{

}

Message_Data::Message_Data(QString mess, QVariant data)
{
    _mess = mess;
    _data = data;
}

QString Message_Data::mess()
{
    return _mess;
}

void Message_Data::mess(QString mess)
{
    _mess = mess;
}

QVariant Message_Data::data()
{
    return _data;
}

void Message_Data::data(QVariant data)
{
    _data = data;
}
