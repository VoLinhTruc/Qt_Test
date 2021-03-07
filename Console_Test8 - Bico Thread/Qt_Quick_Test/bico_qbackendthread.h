#ifndef BICO_QBACKENDTHREAD_H
#define BICO_QBACKENDTHREAD_H

#include "bico_qthread.h"

class Bico_QBackendThread : public QThread, public Bico_QThread
{
public:
    Bico_QBackendThread(Bico_QMutexQueue<Bico_QMessData> *qin = nullptr, Bico_QMutexQueue<Bico_QMessData> *qout = nullptr);
    ~Bico_QBackendThread();
};

#endif // BICO_QBACKENDTHREAD_H
