#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtDebug>

#include <iostream>

#include "bico_qbackendthread_example.h"
#include "bico_quithread_example.h"


using namespace std;

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    // ------------------------------------------------------------------------------------------------
//    Bico_QBackendThread_Example thread1(nullptr, new Bico_QMutexQueue<Bico_QMessData>);
//    Bico_QBackendThread_Example thread2(thread1.qout(), nullptr);

//    thread1.setObjectName("Thread 1");
//    thread2.setObjectName("Thread 2");

//    thread1.start();
//    thread2.start();

    Bico_QUIThread_Example ui_thread1(nullptr, new Bico_QMutexQueue<Bico_QMessData>, "qrc:/main.qml");
    Bico_QUIThread_Example ui_thread2(ui_thread1.qout(), nullptr, "qrc:/main1.qml");

    ui_thread1.setObjectName("UI Thread 1");
    ui_thread2.setObjectName("UI Thread 2");

    ui_thread2.start();
    ui_thread1.start();

    return app.exec();
}
