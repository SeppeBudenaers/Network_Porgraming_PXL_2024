#ifndef ZMQ_HANDELER_H
#define ZMQ_HANDELER_H

#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>


class ZMQ_Handeler
{
public:
    ZMQ_Handeler(char* agrv);
    void Client();

private:
    void Push_Image(QString Image);
    void Push_Save_Image(QString Image);
    void Push_Retrive_Image();

    void SUB_Heartbeat();
    QString SUB_Image();
    void Receiving_Image();

    QString Filter;
    QString Path;
    QString OutputPath;
    QString ID;
    zmq::context_t context = zmq::context_t(1);
    zmq::socket_t PUSH = zmq::socket_t(context, ZMQ_PUSH);
    zmq::socket_t SUB = zmq::socket_t(context, ZMQ_SUB);


};

#endif // ZMQ_HANDELER_H
