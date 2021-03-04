#include "bico_qthread.h"
#include <QDebug>

Bico_QThread::Bico_QThread()
{

}

void Bico_QThread::run()
{
    qDebug() << "Running";
}

