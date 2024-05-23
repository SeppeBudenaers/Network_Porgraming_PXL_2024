#ifndef ZMQ_HANDELER_H
#define ZMQ_HANDELER_H
#include <QObject>
#include <QTimer>
#include <QThread>
#include <zmq.hpp>
#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>

class ZMQ_Handeler : public QObject
{
    Q_OBJECT

public:
    ZMQ_Handeler(QObject *parent = nullptr);
    ~ZMQ_Handeler(){};

public slots:
    void Service();
    
private:
    QTimer *timer;
    zmq::context_t ZMQ_context = zmq::context_t(1);
    zmq::socket_t SUB = zmq::socket_t(ZMQ_context, ZMQ_SUB);
};

#endif // ZMQ_HANDELER_H
