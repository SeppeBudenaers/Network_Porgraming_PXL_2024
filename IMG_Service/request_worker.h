#ifndef REQUEST_WORKER_H
#define REQUEST_WORKER_H
#include <QObject>
#include <QString>
#include"zmq_handeler.h"

class Request_Worker : public QObject {
    Q_OBJECT
public:
    explicit Request_Worker(QObject *parent = nullptr, ZMQ_Handeler * ZMQ_HANDELER = nullptr) : QObject(parent), ZMQ_Handeler(ZMQ_HANDELER){}

public slots:
    void processRequest(const QString &rawStr);

signals:
    void requestProcessed(const std::string &response);
private:
    zmq::context_t context = zmq::context_t(1);
    zmq::socket_t PUSH = zmq::socket_t(context, ZMQ_PUSH);
    ZMQ_Handeler * ZMQ_Handeler;
};

#endif // REQUEST_WORKER_H
