#include "bico_qthread.h"

Bico_QMutexQueue<Bico_QMessData> *Bico_QThread::qin() const
{
    return _qin;
}

void Bico_QThread::setQin(Bico_QMutexQueue<Bico_QMessData> *qin)
{
    _qin = qin;
}

Bico_QMutexQueue<Bico_QMessData> *Bico_QThread::qout() const
{
    return _qout;
}

void Bico_QThread::setQout(Bico_QMutexQueue<Bico_QMessData> *qout)
{
    _qout = qout;
}
