#ifndef BICO_QUITHREAD_H
#define BICO_QUITHREAD_H

#include "bico_qthread.h"


class Bico_QUIThread : public QThread, public Bico_QThread
{
public:
    Bico_QUIThread(QString ui_path = "", Bico_QMutexQueue<Bico_QMessData> *qin = nullptr, Bico_QMutexQueue<Bico_QMessData> *qout = nullptr);
    ~Bico_QUIThread();
};

#endif // BICO_QUITHREAD_H
