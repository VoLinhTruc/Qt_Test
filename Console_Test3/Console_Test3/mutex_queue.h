#ifndef MUTEX_QUEUE_H
#define MUTEX_QUEUE_H

#include <QQueue>
#include <QMutex>

template <class T>
class Mutex_Queue : public QQueue<T>
{
public:
    Mutex_Queue() = default;
    ~Mutex_Queue() = default;
    Mutex_Queue(const Mutex_Queue &) = default;
    Mutex_Queue &operator=(const Mutex_Queue &) = default;

    void enqueueToFront(const T &t);
    void enqueue(const T &t);
    T dequeue();
    T dequeueFromBack();

private:
    QMutex mutex;
};

// -------------------------------------------------------------------------------------------------------------------

template<class T>
void Mutex_Queue<T>::enqueueToFront(const T &t)
{
    mutex.lock();
    QQueue<T>::prepend(t);
    mutex.unlock();
}

template<class T>
void Mutex_Queue<T>::enqueue(const T &t)
{
    mutex.lock();
    QQueue<T>::append(t);
    mutex.unlock();
}

template<class T>
T Mutex_Queue<T>::dequeue()
{
    mutex.lock();
    T value = QQueue<T>::takeFirst();
    mutex.unlock();

    return value;
}

template<class T>
T Mutex_Queue<T>::dequeueFromBack()
{
    mutex.lock();
    T value = QQueue<T>::takeLast();
    mutex.unlock();

    return value;
}



#endif // Mutex_Queue_H
