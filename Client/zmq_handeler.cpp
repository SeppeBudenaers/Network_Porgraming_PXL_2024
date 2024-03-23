#include "zmq_handeler.h"
#include "filter.h"
#include <iostream>

ZMQ_Handeler::ZMQ_Handeler()
{
    PUSH.connect( "tcp://benternet.pxl-ea-ict.be:24041" );
    SUB.connect( "tcp://benternet.pxl-ea-ict.be:24042" );
}

void ZMQ_Handeler::Push_Image(QString Filter, QString id, QString Image)
{
    QString Topic = "LogicLab>IMG_SERVICE?";
    Topic.append(">");
    Topic.append(Filter);
    Topic.append(">");
    Topic.append(id);

    //still need to do image paresing ect.

    std::string Topic_Buffer = Topic.toStdString();
    const char* buffer = Topic_Buffer.c_str();
    PUSH.send(buffer, Topic_Buffer.length());
    std::cout << "Pushed :"<<Topic.toStdString()<< std::endl;
}

QString ZMQ_Handeler::SUB_Image(QString Filter, QString id)
{
    if(SUB.connected()){
        QString Topic = "LogicLab>IMG_SERVICE!";
        Topic.append(">");
        Topic.append(Filter);
        Topic.append(">");
        Topic.append(id);

        std::string Topic_Buffer = Topic.toStdString();
        const char* buffer = Topic_Buffer.c_str();
        SUB.setsockopt(ZMQ_SUBSCRIBE, &buffer, Topic_Buffer.length());
        std::cout << "Subscribed: " << Topic.toStdString() << std::endl;
        return Topic;
    }
    return "error";
}

