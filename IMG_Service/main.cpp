#include "zmq_handeler.h"
#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>
#define STB_IMAGE_WRITE_IMPLEMENTATION

int main( int argc, char *argv[] )
{
    QCoreApplication a(argc, argv);
    try
    {
        ZMQ_Handeler ZMQ;
        while(1)
        {
            ZMQ.Service();
        }
        while (a.exec())
        {

        }
    }
    catch( nzmqt::ZMQException & ex )
    {
        std::cerr << "Caught an exception : " << ex.what();
    }
}
