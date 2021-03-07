#include "bico_qbackendthread.h"

Bico_QBackendThread::Bico_QBackendThread(Bico_QMutexQueue<Bico_QMessData> *qin, Bico_QMutexQueue<Bico_QMessData> *qout)
{
    _qin = qin;
    _qout = qout;
}

Bico_QBackendThread::~Bico_QBackendThread()
{
    delete _qin;
    delete _qout;
}
