#ifndef ZMQ_HANDELER_H
#define ZMQ_HANDELER_H

#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>

class ZMQ_Handeler : public QObject
{
    Q_OBJECT
public slots:
    void mySlot(const std::string &response) {
        std::cout<< "Received text:";
    }
public:
    ZMQ_Handeler();
    bool event(QEvent *event) override;

private:
    zmq::context_t context = zmq::context_t(1);
    zmq::socket_t PUSH = zmq::socket_t(context, ZMQ_PUSH);
    zmq::socket_t SUB = zmq::socket_t(context, ZMQ_SUB);   
};

#endif // ZMQ_HANDELER_H
