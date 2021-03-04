#ifndef BICO_QTHREAD_H
#define BICO_QTHREAD_H

#include <QThread>

class Bico_QThread : public QThread
{
public:
    Bico_QThread();

    virtual void run();
};

#endif // BICO_QTHREAD_H
