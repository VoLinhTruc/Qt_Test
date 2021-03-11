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


int Bico_QThread::qinEnqueue(Bico_QMessData &input)
{
    if (_qin != nullptr)
    {
        _qin->enqueue(input);
        return 1;
    }

    return 0;
}

int Bico_QThread::qinDequeue(Bico_QMessData &output)
{
    if (_qin != nullptr)
    {
        if (!_qin->isEmpty())
        {
            Bico_QMessData mess_data = _qin->dequeue();
            output = mess_data;
            return 1;
        }
    }

    return 0;
}

int Bico_QThread::qoutEnqueue(Bico_QMessData &input)
{
    if (_qout != nullptr)
    {
        _qout->enqueue(input);
        return 1;
    }

    return 0;
}
