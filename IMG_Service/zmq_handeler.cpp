#include "zmq_handeler.h"
#include "filter.h"
#include <iostream>

#define STB_IMAGE_IMPLEMENTATION
#include"stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include"stb_image_write.h"


ZMQ_Handeler::ZMQ_Handeler()
{
    PUSH.connect( "tcp://benternet.pxl-ea-ict.be:24041" );
    SUB.connect( "tcp://benternet.pxl-ea-ict.be:24042" );

    QString Topic = "LogicLab>IMG_SERVICE?";
    std::string Topic_Buffer = Topic.toStdString();
    const char* buffer = Topic_Buffer.c_str();
    SUB.setsockopt(ZMQ_SUBSCRIBE, Topic.toStdString().c_str(), Topic.length());

    while( SUB.connected() )
    {
        zmq::message_t * msg = new zmq::message_t();
        SUB.recv( msg );
        Request_Handeler(msg->to_string());
    }
}

void ZMQ_Handeler::Request_Handeler(std::string RawStr) //kan dit gemultitheard worden
{
    QString RawData = QString::fromStdString(RawStr);
    QStringList Tokens = RawData.split( ">" );

    // size check  for safety

    std::cout<<"filter : "<<Tokens[2].toStdString()<<std::endl;
    std::cout<<"ID : "<<Tokens[3].toStdString()<<std::endl;
    std::cout<<"width : "<<Tokens[4].toStdString()<<std::endl;
    std::cout<<"height : "<<Tokens[5].toStdString()<<std::endl;
    std::cout<<"channels : "<<Tokens[6].toStdString()<<std::endl;

    Filter image_Process(Tokens[2],Tokens[3],Tokens[7],Tokens[4].toInt(),Tokens[5].toInt(),Tokens[6].toInt());

    std::string Topic_Buffer = image_Process.Get_Response().toStdString();
    const char* buffer = Topic_Buffer.c_str();
    PUSH.send(buffer, Topic_Buffer.length());
    std::cout << "Pushed :"<< std::endl;
}
