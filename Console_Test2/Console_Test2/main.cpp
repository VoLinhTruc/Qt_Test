#include <QCoreApplication>
#include <QDebug>
#include <QThread>

class Bico_QThread : public QThread
{
public:
    Bico_QThread() = default;
    ~Bico_QThread() = default;
    Bico_QThread(const Bico_QThread &) = default;
    Bico_QThread &operator=(const Bico_QThread &) = default;

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
