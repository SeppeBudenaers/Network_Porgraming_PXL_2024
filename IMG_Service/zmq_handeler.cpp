#include "zmq_handeler.h"
#include "request_worker.h"
#include <iostream>
#include <QThread>
#include <QObject>

#define STB_IMAGE_IMPLEMENTATION
#include"stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include"stb_image_write.h"


ZMQ_Handeler::ZMQ_Handeler() {}

void ZMQ_Handeler::Service(){

    SUB.connect("tcp://benternet.pxl-ea-ict.be:24042");
    QString Topic = "LogicLab>IMG_SERVICE?";

    SUB.setsockopt(ZMQ_SUBSCRIBE, Topic.toStdString().c_str(), Topic.length());

    while (SUB.connected()) {
        zmq::message_t *msg = new zmq::message_t();
        SUB.recv(msg);
        QThread *thread = new QThread;
        Request_Worker *worker = new Request_Worker(nullptr);
        worker->moveToThread(thread);

        QEventLoop::connect(thread, &QThread::started, [worker, msg]() {
            worker->processRequest(QString::fromStdString(msg->to_string()));
        });
        thread->start();
    }
}

