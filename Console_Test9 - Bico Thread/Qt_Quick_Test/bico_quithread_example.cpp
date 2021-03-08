#include "bico_quithread_example.h"

void Bico_QUIThread_Example::run()
{
    while (1)
    {
        if (_qin != nullptr)
        {
//            if (!_qin->isEmpty())
//            {
//                Bico_QMessData mess_data = _qin->dequeue();
//                QString mess = mess_data.mess();
//                QVariant data = mess_data.data();

//                if (mess == QString("1"))
//                {
//                    qDebug() << mess << data.value<int>();
//                }
//                else if (mess == QString("2"))
//                {
//                    qDebug() << mess << data.value<QString>();
//                }
//                else
//                {

//                }
//            }
        }


        if (_qout != nullptr)
        {
//            static int i = 0;
//            i++;

//            Bico_QMessData mess_data;
//            mess_data.mess(QString("1"));
//            mess_data.data(QVariant(i));

//            _qout->enqueue(mess_data);

//            sleep(1);
        }

        qDebug() << QString("Hello from ") + QThread::objectName();
        sleep(1);
    }
}

}

void Bico_QUIThread_Example::test()
{
    qDebug() << objectName();
}
