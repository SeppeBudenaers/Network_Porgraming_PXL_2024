#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>
#include <QTimer>
#include <QDateTime>

int main( int argc, char *argv[] )
{
    QCoreApplication a(argc, argv);
    try
    {
        zmq::context_t context(1);
        zmq::socket_t PUSH(context, ZMQ_PUSH );
        zmq::socket_t SUB(context, ZMQ_SUB );

        PUSH.connect( "tcp://benternet.pxl-ea-ict.be:24041" );
        SUB.connect( "tcp://benternet.pxl-ea-ict.be:24042" );

        char Topic[100];
        sprintf(Topic,"LogicLab>IMG_SERVICE>BW!>%s",argv[1]);
        SUB.setsockopt( ZMQ_SUBSCRIBE, Topic, strlen(Topic));
        std::cout << "Subscribed :"<<Topic<< std::endl;

        if(PUSH.connected()){
            char Buffer[100];
            sprintf(Buffer,"LogicLab>IMG_SERVICE>BW?>%s",argv[1]);
            PUSH.send(Buffer, strlen(Buffer) );
            std::cout << "Pushed :"<<Buffer<< std::endl;
        }


        while( SUB.connected() )
        {
            zmq::message_t * msg = new zmq::message_t();
            SUB.recv( msg );
            std::cout << "Subscribed Message : [" << std::string( (char*) msg->data(), msg->size() ) << "]" << std::endl;
        }

    }
    catch( nzmqt::ZMQException & ex )
    {
        std::cerr << "Caught an exception : " << ex.what();
    }
    return a.exec();
}
