#include "zmq_handeler.h"
#include "filter.h"
#include <iostream>

ZMQ_Handeler::ZMQ_Handeler()
{
    zmq::context_t context(1);
    zmq::socket_t push(context, ZMQ_PUSH);
    zmq::socket_t sub(context, ZMQ_SUB);

    PUSH = &push;
    SUB = &sub;

    PUSH->connect( "tcp://benternet.pxl-ea-ict.be:24041" );
    SUB->connect( "tcp://benternet.pxl-ea-ict.be:24042" );

    char Topic[] = "LogicLab>IMG_SERVICE?";
    SUB->setsockopt( ZMQ_SUBSCRIBE, &Topic, strlen(Topic));
    std::cout << "Subscribed :"<<Topic<< std::endl;

    while( SUB->connected() )
    {
        zmq::message_t * msg = new zmq::message_t();
        SUB->recv( msg );
        Request_Handeler(msg->to_string());
    }
}

void ZMQ_Handeler::Request_Handeler(std::string RawStr) //kan dit gemultitheard worden //I like qtsrings need more logic like that client side.
{
    QString RawData = QString::fromStdString(RawStr);
    QStringList Tokens = RawData.split( ">" );

    Filter filter(Tokens[2],Tokens[3],Tokens[4]);

    if (PUSH->connected()) {
        std::string response = filter.Get_Response().toStdString();
        const char* buffer = response.c_str();
        PUSH->send(buffer, response.length());
    }
}
