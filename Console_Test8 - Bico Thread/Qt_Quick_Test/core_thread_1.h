#ifndef CORE_THREAD_1_H
#define CORE_THREAD_1_H

#include <QtDebug>
#include "bico_qbackendthread.h"


class Core_Thread_1 : public Bico_QBackendThread
{
public:
    Core_Thread_1(Bico_QMutexQueue<Bico_QMessData> *qin = nullptr, Bico_QMutexQueue<Bico_QMessData> *qout = nullptr) : Bico_QBackendThread(qin, qout)
    {

    }

    virtual void run();
};

#endif // CORE_THREAD_1_H
