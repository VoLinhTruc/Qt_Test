#ifndef SIGNAL_SLOT_CONNECT_H
#define SIGNAL_SLOT_CONNECT_H


#include <QQmlApplicationEngine>
#include <QObject>


class Signal_Slot_Connect
{
public:
    Signal_Slot_Connect();

    static void connect(QQmlApplicationEngine* engine, QObject* obj);
};

#endif // SIGNAL_SLOT_CONNECT_H
