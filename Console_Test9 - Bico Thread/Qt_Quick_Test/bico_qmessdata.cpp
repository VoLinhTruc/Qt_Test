#include "bico_qmessdata.h"

Bico_QMessData::Bico_QMessData()
{

}

Bico_QMessData::Bico_QMessData(QString mess, QVariant data)
{
    _mess = mess;
    _data = data;
}

QString Bico_QMessData::mess()
{
    return _mess;
}

void Bico_QMessData::mess(QString mess)
{
    _mess = mess;
}

QVariant Bico_QMessData::data()
{
    return _data;
}

void Bico_QMessData::data(QVariant data)
{
    _data = data;
}
