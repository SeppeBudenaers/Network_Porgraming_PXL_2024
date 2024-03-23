#ifndef ZMQ_HANDELER_H
#define ZMQ_HANDELER_H

#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>

class ZMQ_Handeler
{
public:
    ZMQ_Handeler();
    void Push_Image(QString Filter, QString id , QString Image);
    QString SUB_Image(QString Filter, QString id);
    void Receiving_Image(QString outputPath);
private:
    zmq::context_t context = zmq::context_t(1);
    zmq::socket_t PUSH = zmq::socket_t(context, ZMQ_PUSH);
    zmq::socket_t SUB = zmq::socket_t(context, ZMQ_SUB);
};

#endif // ZMQ_HANDELER_H
