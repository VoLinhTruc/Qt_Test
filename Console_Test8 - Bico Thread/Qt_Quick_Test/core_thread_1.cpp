#include "core_thread_1.h"


void Core_Thread_1::run()
{
    while (1)
    {
        if (_qout != nullptr)
        {
            static int i = 0;
            i++;

            Bico_QMessData mess_data;
            mess_data.mess(QString("1"));
            mess_data.data(QVariant(i));

            _qout->enqueue(mess_data);

//            qDebug() << "Thread 1 is running";
            sleep(1);
        }
    }
}
