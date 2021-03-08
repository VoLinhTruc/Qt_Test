#include "bico_quithread.h"

Bico_QUIThread::Bico_QUIThread(Bico_QMutexQueue<Bico_QMessData> *qin, Bico_QMutexQueue<Bico_QMessData> *qout, QString ui_path)
{
    _qin = qin;
    _qout = qout;
    _ui_path = ui_path;
}

Bico_QUIThread::~Bico_QUIThread()
{
    delete _qin;
    delete _qout;
}

void Bico_QUIThread::start(QThread::Priority priority)
{
    if (_ui_path != "")
    {
        _engine.load(_ui_path);
        QQmlContext* context = _engine.rootContext();
        context->setContextProperty("thread", this);
    }
    QThread::start(priority);
}
