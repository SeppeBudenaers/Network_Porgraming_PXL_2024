#ifndef HEARTBEAT_H
#define HEARTBEAT_H
#include <QObject>
#include <QString>
#include"zmq_handeler.h"

class Heartbeat : public QObject {
    Q_OBJECT
public:
    explicit Heartbeat(QObject *parent = nullptr): QObject(parent){}
public slots:
    void HeartBeat_Service();
private:
    zmq::context_t context = zmq::context_t(1);
    zmq::socket_t PUSH = zmq::socket_t(context, ZMQ_PUSH);
};

#endif // HEARTBEAT_H

