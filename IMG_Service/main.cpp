#include "zmq_handeler.h"
#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>
#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION

int main( int argc, char *argv[] )
{
    try
    {
        ZMQ_Handeler ZMQ;
        ZMQ.Heartbeat();
        while(1)
        {
            ZMQ.Service();
        }
    }
    catch( nzmqt::ZMQException & ex )
    {
        std::cerr << "Caught an exception : " << ex.what();
    }
}
