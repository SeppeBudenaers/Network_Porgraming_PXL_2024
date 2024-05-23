#ifndef ZMQ_HANDELER_H
#define ZMQ_HANDELER_H

#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>

class ZMQ_Handeler
{
public:
    ZMQ_Handeler();
    void Service();
private:
    zmq::context_t context = zmq::context_t(1);
    zmq::socket_t SUB = zmq::socket_t(context, ZMQ_SUB);
};

#endif // ZMQ_HANDELER_H
