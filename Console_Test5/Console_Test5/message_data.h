#ifndef MESSAGE_DATA_H
#define MESSAGE_DATA_H

#include <QString>
#include <QVariant>


class Message_Data
{
public:
    Message_Data();
    Message_Data(QString mess, QVariant data);

    QString mess();
    void mess(QString mess);
    QVariant data();
    void data(QVariant data);

private:
    QString _mess;
    QVariant _data;
};

#endif // MESSAGE_DATA_H
