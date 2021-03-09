#ifndef BICO_QUITHREAD_EXAMPLE_H
#define BICO_QUITHREAD_EXAMPLE_H

#include "bico_quithread.h"


class Bico_QUIThread_Example : public Bico_QUIThread
{
    Q_OBJECT
public:
    Bico_QUIThread_Example(Bico_QMutexQueue<Bico_QMessData> *qin = nullptr, Bico_QMutexQueue<Bico_QMessData> *qout = nullptr, QString ui_path = "") : Bico_QUIThread(qin, qout, ui_path)
    {

    }

    virtual void run();

    Q_INVOKABLE void test();

};

#endif // BICO_QUITHREAD_EXAMPLE_H
