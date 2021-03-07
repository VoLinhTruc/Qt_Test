#include "core_thread_2.h"

void Core_Thread_2::run()
{
    while (1)
    {
        if (_qin != nullptr)
        {
            if (!_qin->isEmpty())
            {
                Bico_QMessData mess_data = _qin->dequeue();
                QString mess = mess_data.mess();
                QVariant data = mess_data.data();

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

//                qDebug() << "Thread 2 is running";
//                msleep(1300);
            }
        }
    }
}
