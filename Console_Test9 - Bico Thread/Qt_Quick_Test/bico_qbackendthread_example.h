#ifndef BICO_QBACKENDTHREAD_EXAMPLE_H
#define BICO_QBACKENDTHREAD_EXAMPLE_H

#include <QtDebug>
#include "bico_qbackendthread.h"


class Bico_QBackendThread_Example : public Bico_QBackendThread
{
public:
    Bico_QBackendThread_Example(Bico_QMutexQueue<Bico_QMessData> *qin = nullptr, Bico_QMutexQueue<Bico_QMessData> *qout = nullptr) : Bico_QBackendThread(qin, qout)
    {

    }

    virtual void run();
};

#endif // BICO_QBACKENDTHREAD_EXAMPLE_H
