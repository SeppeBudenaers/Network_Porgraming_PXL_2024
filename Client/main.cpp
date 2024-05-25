#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>
#include <QTimer>
#include <QDateTime>

#include "image.h"
#include "zmq_handeler.h"
#include "option_menu.h"


int main( int argc, char *argv[] )
{
    QCoreApplication a(argc, argv);
    try
    {
        QString Filter;
        QString Path;
        QString OutputPath;
        QString ID = QString::fromUtf8(argv[1]);
        std::string filter;
        std::string path;
        std::string outputPath;
        ZMQ_Handeler ZMQ;
        Option_Menu menu;
        std::cout << "Welcome to Logiclabs Image service client"<<std::endl;
        std::cout << "to quit the aplication : Q"<<std::endl;
        std::cout << "to open help menu : H"<<std::endl;
        while (true) {
            filter.clear();
            std::cout << "Enter Aplication: ";
            std::cin >> filter;
            Filter = QString::fromStdString(filter);
            if (menu.Option_handeler(&Filter)) {break;} // Quit the program

            path.clear();
            std::cout << "Enter image path: ";
            std::cin >> path;
            Path = QString::fromStdString(path);
            if (menu.Option_handeler(&Path)) {break;} // Quit the program

            outputPath.clear();
            std::cout << "Enter output path: ";
            std::cin >> outputPath;
            OutputPath = QString::fromStdString(outputPath);
            if (menu.Option_handeler(&OutputPath)) {break;} // Quit the program

            ZMQ.SUB_Image(Filter, ID);

            Image Preprocessed_IMG(Path);
            ZMQ.Push_Image(Filter, ID, Preprocessed_IMG.Get_imgData());
            ZMQ.Receiving_Image(OutputPath);
        }
        std::cout << "shutting down the program"<<std::endl;
    }
    catch( nzmqt::ZMQException & ex )
    {
        std::cerr << "Caught an exception : " << ex.what();
    }
    //return a.exec();
}
