#ifndef REQUEST_WORKER_H
#define REQUEST_WORKER_H
#include <QObject>
#include <QString>
#include"zmq_handeler.h"

class Request_Worker : public QObject {
    Q_OBJECT
public:
    explicit Request_Worker(QObject *parent = nullptr) : QObject(parent){}

public slots:
    void processRequest(const QString &rawStr);

signals:
    void finished();
    // void requestProcessed(const std::string &response);
private:
    void Send_Error(QString Error);
    zmq::context_t context = zmq::context_t(1);
    zmq::socket_t PUSH = zmq::socket_t(context, ZMQ_PUSH);

    QString ID;
    QString Aplication;
};

#endif // REQUEST_WORKER_H
