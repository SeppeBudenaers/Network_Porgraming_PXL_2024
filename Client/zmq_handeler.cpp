#include "zmq_handeler.h"
#include <iostream>
#include <QCoreApplication>
#include "option_menu.h"
#include "image.h"


#include"stb_image_write.h"

ZMQ_Handeler::ZMQ_Handeler(char* agrv) :ID(QString::fromStdString(agrv))
{
    PUSH.connect( "tcp://benternet.pxl-ea-ict.be:24041" );
    SUB.connect( "tcp://benternet.pxl-ea-ict.be:24042" );
}

void ZMQ_Handeler::Push_Image(QString Image)
{
    QString Topic = "LogicLab>IMG_SERVICE?";
    Topic.append(">");
    Topic.append(Filter);
    Topic.append(">");
    Topic.append(ID);
    Topic.append(">");
    Topic.append(Image);

    std::string Topic_Buffer = Topic.toStdString();
    const char* buffer = Topic_Buffer.c_str();
    PUSH.send(buffer, Topic_Buffer.length());
    std::cout << "Pushed :"<< std::endl;
}

QString ZMQ_Handeler::SUB_Image()
{
    if(SUB.connected()){
        QString Topic = "LogicLab>IMG_SERVICE!";
        Topic.append(">");
        Topic.append(Filter);
        Topic.append(">");
        Topic.append(ID);

        std::string Topic_Buffer = Topic.toStdString();
        const char* buffer = Topic_Buffer.c_str();
        SUB.setsockopt(ZMQ_SUBSCRIBE, buffer, (Topic_Buffer.size()));
        std::cout << "Subscribed: " << buffer << std::endl;
        return Topic;
    }
    return "error";
}
#include <string> // Add missing header file

void ZMQ_Handeler::Receiving_Image() {
    zmq::message_t message;
    SUB.recv(&message);

    QString RawData = QString::fromStdString(message.to_string());
    QStringList Tokens = RawData.split( ">" );
    //testing image save
    if(Tokens.size() <= 7){ std::cout <<  message <<std::endl; }
    else{
        QByteArray decodedData = QByteArray::fromBase64(Tokens[7].toUtf8());
        stbi_write_jpg(OutputPath.toStdString().c_str(), Tokens[4].toInt(), Tokens[5].toInt(), Tokens[6].toInt(), decodedData.constData(), Tokens[4].toInt() * Tokens[6].toInt());
        std::cout << "Image saved to: " << OutputPath.toStdString()<<std::endl;
    }
}
void ZMQ_Handeler::Client() {
        std::string filter;
        std::string path;
        std::string outputPath;
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

            SUB_Image();

            Image Preprocessed_IMG(Path);
            Push_Image(Preprocessed_IMG.Get_imgData());
            Receiving_Image();
        }
        std::cout << "shutting down the program"<<std::endl;
}
