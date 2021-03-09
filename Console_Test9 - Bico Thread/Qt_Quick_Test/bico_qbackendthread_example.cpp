#include "bico_qbackendthread_example.h"


void Bico_QBackendThread_Example::run()
{
    while (1)
    {
        Bico_QMessData input;
        if (qinDequeue(input))
        {
            QString mess = input.mess();
            QVariant data = input.data();

            if (mess == QString("1"))
            {
                qDebug() << mess << data.value<int>();
            }
            else if (mess == QString("2"))
            {
                qDebug() << mess << data.value<QString>();
            }
            else
            {

            }
        }


        if (_qout != nullptr)
        {
            static int i = 0;
            i++;

            Bico_QMessData mess_data;
            mess_data.mess(QString("1"));
            mess_data.data(QVariant(i));

            _qout->enqueue(mess_data);

            sleep(1);
        }

        qDebug() << QString("Hello from ") + this->objectName();
        sleep(1);
    }
}
