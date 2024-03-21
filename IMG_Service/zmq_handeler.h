#ifndef ZMQ_HANDELER_H
#define ZMQ_HANDELER_H

#include <nzmqt/nzmqt.hpp>

class ZMQ_Handeler
{
public:
    ZMQ_Handeler();

private:
    void Request_Handeler(std::string RawStr);

    zmq::socket_t * PUSH;
    zmq::socket_t * SUB;


};

#endif // ZMQ_HANDELER_H
