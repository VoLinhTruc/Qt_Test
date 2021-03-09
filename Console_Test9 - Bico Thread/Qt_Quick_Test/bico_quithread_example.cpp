#include "bico_quithread_example.h"

void Bico_QUIThread_Example::run()
{
    do
    {
        Bico_QMessData input;
        if (qinDequeue(input))
        {
            QString mess = input.mess();
            QVariant data = input.data();

            if (mess == QString("1"))
            {
                qDebug() << QThread::objectName() << mess << data.value<int>();
            }
            else if (mess == QString("2"))
            {
                qDebug() << QThread::objectName() << mess << data.value<QString>();
                if(getRootFirstObj()->findChild<QObject*>("qmess") != nullptr)
                {
                    qDebug() << getRootFirstObj()->findChild<QObject*>("qmess")->setProperty("text", data);
                }
            }
            else
            {

            }
        }

        qDebug() << QString("Hello from ") + QThread::objectName();
        sleep(1);
    } while (1);

    qDebug() << objectName() << "END";
}



void Bico_QUIThread_Example::test(QString mess, QString data)
{
    Bico_QMessData mess_data;
    mess_data.mess(mess);
    mess_data.data(QVariant(data));

    qoutEnqueue(mess_data);
}
