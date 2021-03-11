#ifndef BICO_QTHREAD_H
#define BICO_QTHREAD_H

#include <QThread>
#include "bico_qmutexqueue.h"
#include "bico_qmessdata.h"

class Bico_QThread
{
public:

    Bico_QMutexQueue<Bico_QMessData> *qin() const;
    void setQin(Bico_QMutexQueue<Bico_QMessData> *qin);

    Bico_QMutexQueue<Bico_QMessData> *qout() const;
    void setQout(Bico_QMutexQueue<Bico_QMessData> *qout);

protected:
    Bico_QMutexQueue<Bico_QMessData> *_qin;
    Bico_QMutexQueue<Bico_QMessData> *_qout;

    int qinEnqueue(Bico_QMessData &input);
    int qinDequeue(Bico_QMessData &output);
    int qoutEnqueue(Bico_QMessData &input);
};

#endif // BICO_QTHREAD_H
