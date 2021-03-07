#ifndef BICO_QMESSDATA_H
#define BICO_QMESSDATA_H

#include <QString>
#include <QVariant>


class Bico_QMessData
{
public:
    Bico_QMessData();
    Bico_QMessData(QString mess, QVariant data);

    QString mess();
    void mess(QString mess);
    QVariant data();
    void data(QVariant data);

private:
    QString _mess;
    QVariant _data;
};

#endif // BICO_QMESSDATA_H
