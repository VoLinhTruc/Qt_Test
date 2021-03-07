#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtDebug>

#include <iostream>

#include "core_thread_1.h"
#include "core_thread_2.h"


using namespace std;

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

//    Bico_QThread main_thread(QString("qrc:/main.qml"), &app);
//    main_thread.start();

//    Bico_QThread main_thread1(QString("qrc:/main1.qml"), &app);
//    main_thread1.start();

//    main_thread.terminate();
//    main_thread1.terminate();

//    QQmlApplicationEngine engine("qrc:/main1.qml");
//    engine.thread()->terminate();

    Core_Thread_1 thread1(nullptr, new Bico_QMutexQueue<Bico_QMessData>);
    Core_Thread_2 thread2(thread1.qout(), nullptr);

    thread1.start();
    thread2.start();

    return app.exec();
}
