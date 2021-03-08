#ifndef BICO_QUITHREAD_H
#define BICO_QUITHREAD_H

#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QtDebug>
#include "bico_qthread.h"


class Bico_QUIThread : public QThread, public Bico_QThread
{
public:
    Bico_QUIThread(Bico_QMutexQueue<Bico_QMessData> *qin = nullptr, Bico_QMutexQueue<Bico_QMessData> *qout = nullptr, QString ui_path = "");
    ~Bico_QUIThread();

    void start(QThread::Priority priority = InheritPriority);
private:
    QString _ui_path;
    QQmlApplicationEngine _engine;
};

#endif // BICO_QUITHREAD_H
