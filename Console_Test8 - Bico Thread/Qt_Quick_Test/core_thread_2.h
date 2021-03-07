#ifndef CORE_THREAD_2_H
#define CORE_THREAD_2_H

#include <QtDebug>
#include "bico_qbackendthread.h"


class Core_Thread_2 : public Bico_QBackendThread
{
public:
    Core_Thread_2(Bico_QMutexQueue<Bico_QMessData> *qin = nullptr, Bico_QMutexQueue<Bico_QMessData> *qout = nullptr) : Bico_QBackendThread(qin, qout)
    {

    }

    virtual void run();
};

#endif // CORE_THREAD_2_H
