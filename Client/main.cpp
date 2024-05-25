#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>
#include <QTimer>
#include <QDateTime>


#include "zmq_handeler.h"



int main( int argc, char *argv[] )
{
    QCoreApplication a(argc, argv);
    try
    {
        
        ZMQ_Handeler ZMQ(argv[1]);
        ZMQ.Client();

    }
    catch( nzmqt::ZMQException & ex )
    {
        std::cerr << "Caught an exception : " << ex.what();
    }
    //return a.exec();
}
