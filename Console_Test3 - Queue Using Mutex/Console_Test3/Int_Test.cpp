#include <QCoreApplication>
#include <QDebug>

#include "bico_qmutexqueue.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Bico_QMutexQueue<int> bico_queue;

    for (int i = 0; i < 2; i++)
    {
        bico_queue.enqueue(i);
    }

    for (int i = 0; i < 2; i++)
    {
        bico_queue.enqueueToFront(5*i);
    }

    for (int i = 0; i < 2; i++)
    {
        bico_queue.enqueue(10*i);
    }

    qDebug() << bico_queue.size() << Qt::endl;

    for (int i = 0; i < 6; i++)
    {
        qDebug() << bico_queue.dequeueFromBack();// << "\t";
    }

    return 1;
}
