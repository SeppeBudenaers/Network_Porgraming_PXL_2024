#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>
#include <QTimer>
#include <QDateTime>

#include "image.h"
#include "zmq_handeler.h"


int main( int argc, char *argv[] )
{
    QCoreApplication a(argc, argv);
    try
    {
        QString Filter = "BW";
        QString Path = "../pcb.jpg";
        QString outputPath = "../pcb-output.png";
        QString ID = QString::fromUtf8(argv[1]);


        ZMQ_Handeler ZMQ;
        ZMQ.SUB_Image(Filter,ID);

        Image Preprocessed_IMG(Path);
        Preprocessed_IMG.saveImage(outputPath);

    }
    catch( nzmqt::ZMQException & ex )
    {
        std::cerr << "Caught an exception : " << ex.what();
    }
    return a.exec();
}
