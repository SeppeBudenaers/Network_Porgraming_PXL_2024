#include "zmq_handeler.h"
#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>

int main( int argc, char *argv[] )
{
    QCoreApplication a(argc, argv);
    try
    {
        ZMQ_Handeler ZMQ;
        a.exec();
    }
    catch( nzmqt::ZMQException & ex )
    {
        std::cerr << "Caught an exception : " << ex.what();
    }
    return a.exec();
}
