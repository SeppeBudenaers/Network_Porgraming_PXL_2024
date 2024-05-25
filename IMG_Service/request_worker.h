#ifndef REQUEST_WORKER_H
#define REQUEST_WORKER_H
#include <QObject>
#include <QString>
#include <zmq.hpp>
#include <iostream>
#include <nzmqt/nzmqt.hpp>

class Request_Worker : public QObject {
    Q_OBJECT
public:
    explicit Request_Worker(QObject *parent = nullptr) : QObject(parent){}

public slots:
    void finished();
    void processRequest(const QString &rawStr);

signals:
    void requestProcessed(const std::string &response);
private:
    zmq::context_t ZMQ_context = zmq::context_t(1);
    zmq::socket_t PUSH = zmq::socket_t(ZMQ_context, ZMQ_PUSH);
};

#endif // REQUEST_WORKER_H
