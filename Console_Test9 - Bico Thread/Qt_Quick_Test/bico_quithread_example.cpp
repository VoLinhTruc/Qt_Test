#include "bico_quithread_example.h"

void Bico_QUIThread_Example::run()
{
    do
    {
        Bico_QMessData input;
        if (qinDequeue(input))
        {
            QString mess = input.mess();
            QVariant data = input.data();

            if (mess == QString("mess_from_ui"))
            {
                QJsonDocument json_doc = QJsonDocument::fromJson(data.value<QString>().toUtf8());
                QJsonObject json_obj  = json_doc.object();

                Bico_QMessData output;
                if(json_obj.contains("mess"))
                {
                    output.mess(json_obj["mess"].toString());
                }
                if(json_obj.contains("data"))
                {
                    output.data(QVariant(json_obj["data"].toString()));
                }

                qoutEnqueue(output);
            }
            if (mess == QString("1"))
            {
                qDebug() << QThread::objectName() << mess << data.value<int>();
            }
            else if (mess == QString("2"))
            {
                qDebug() << QThread::objectName() << mess << data.value<QString>();
                emit notifyToUI(data.value<QString>());
            }
            else
            {

            }
        }

        qDebug() << QString("Hello from ") + QThread::objectName();
        msleep(100);
    } while (1);

    qDebug() << objectName() << "END";
}

