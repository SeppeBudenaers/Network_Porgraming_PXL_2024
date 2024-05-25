#include "zmq_handeler.h"
#include "image.h"
#include "image_bw.h"
#include "image_rgb.h"
#include "request_worker.h"
#include <iostream>
#include <iostream>
#include <QThread>
#include <QString>
#include <QStringList>
#include <QObject>

#define STB_IMAGE_IMPLEMENTATION
#include"stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include"stb_image_write.h"


ZMQ_Handeler::ZMQ_Handeler(QObject *parent) : QObject(parent), SUB(ZMQ_context, ZMQ_SUB) {
    SUB.connect("tcp://benternet.pxl-ea-ict.be:24042");

    QString Topic = "LogicLab>IMG_SERVICE?";
    SUB.setsockopt(ZMQ_SUBSCRIBE, Topic.toStdString().c_str(), Topic.length());
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &ZMQ_Handeler::Service);
    timer->start(100); // Adjust the interval as needed
}
void ZMQ_Handeler::Service() {
    if (SUB.connected()) {
        std::cout << "Connected to the server" << std::endl;
        zmq::message_t *msg = new zmq::message_t();
        if (SUB.recv(msg)) {  // Check if a message is received
            QThread *thread = new QThread;
            Request_Worker *worker = new Request_Worker;
            worker->moveToThread(thread);

            connect(thread, &QThread::started, [worker, msg]() {
                worker->processRequest(QString::fromStdString(msg->to_string()));
                QThread::currentThread()->quit();
            });
            connect(worker, &Request_Worker::finished, thread, &QThread::quit);
            connect(thread, &QThread::finished, thread, &QThread::deleteLater);
            connect(thread, &QThread::finished, worker, &Request_Worker::deleteLater); // Ensure worker is deleted after finishing
            thread->start();
        } else {
            delete msg;  // Delete message if not received
        }
    }
}


