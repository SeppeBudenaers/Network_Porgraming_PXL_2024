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

        char Topic[] = "example>quest!>Seppe Budenaers>";
        SUB.setsockopt( ZMQ_SUBSCRIBE, Topic, strlen(Topic));

        if(PUSH.connected()){
            char buffer[] = "example>quest?>Seppe Budenaers>";
            PUSH.send(buffer, strlen(buffer) );
            std::cout << "Pushed : [ping]" << std::endl;
        }


        while( SUB.connected() )
        {
            zmq::message_t * msg = new zmq::message_t();
            SUB.recv( msg );
            std::cout << "Subscribed : [" << std::string( (char*) msg->data(), msg->size() ) << "]" << std::endl;
        }

    }
    catch( nzmqt::ZMQException & ex )
    {
        std::cerr << "Caught an exception : " << ex.what();
    }
    return a.exec();
}
