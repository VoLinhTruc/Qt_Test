#include "bico_quithread.h"

Bico_QUIThread::Bico_QUIThread(Bico_QMutexQueue<Bico_QMessData> *qin, Bico_QMutexQueue<Bico_QMessData> *qout, QString ui_path)
{
    _qin = qin;
    _qout = qout;
    _ui_path = ui_path;
//    _thread_stop_flag = 0;
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

        QQmlContext* root_context = _engine.rootContext();
        root_context->setContextProperty("thread", this);

        QObject* root_object = _engine.rootObjects().at(0);
        QObject::connect(this, SIGNAL(notifyToUI(QString)), root_object, SIGNAL(notifyFromBackend(QString)));
    }
    QThread::start(priority);
}


void Bico_QUIThread::fromUI(QString mess, QString data)
{
    Bico_QMessData mess_data;
    mess_data.mess(mess);
    mess_data.data(QVariant(data));

    qinEnqueue(mess_data);
}


void Bico_QUIThread::terminateThread()
{
    qDebug() << objectName() << "END";
    terminate();
}

QObject *Bico_QUIThread::getRootFirstObj()
{
    return _engine.rootObjects().at(0);
}
