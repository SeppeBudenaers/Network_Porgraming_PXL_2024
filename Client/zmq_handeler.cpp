#include "zmq_handeler.h"
#include "filter.h"
#include <iostream>



#include"stb_image_write.h"

ZMQ_Handeler::ZMQ_Handeler()
{
    PUSH.connect( "tcp://benternet.pxl-ea-ict.be:24041" );
    SUB.connect( "tcp://benternet.pxl-ea-ict.be:24042" );
}

void ZMQ_Handeler::Push_Image(QString Filter, QString id, QString Image)
{
    QString Topic = "LogicLab>IMG_SERVICE?";
    Topic.append(">");
    Topic.append(Filter);
    Topic.append(">");
    Topic.append(id);
    Topic.append(">");
    Topic.append(Image);

    std::string Topic_Buffer = Topic.toStdString();
    const char* buffer = Topic_Buffer.c_str();
    PUSH.send(buffer, Topic_Buffer.length());
    std::cout << "Pushed :"<< std::endl;
}

QString ZMQ_Handeler::SUB_Image(QString Filter, QString id)
{
    if(SUB.connected()){
        QString Topic = "LogicLab>IMG_SERVICE!";
        Topic.append(">");
        Topic.append(Filter);
        Topic.append(">");
        Topic.append(id);

        std::string Topic_Buffer = Topic.toStdString();
        const char* buffer = Topic_Buffer.c_str();
        SUB.setsockopt(ZMQ_SUBSCRIBE, buffer, (Topic_Buffer.size()));
        std::cout << "Subscribed: " << buffer << std::endl;
        return Topic;
    }
    return "error";
}
#include <string> // Add missing header file

void ZMQ_Handeler::Receiving_Image(QString outputPath) {
    zmq::message_t message;
    SUB.recv(&message);

    QString RawData = QString::fromStdString(message.to_string());
    QStringList Tokens = RawData.split( ">" );
    //testing image save
    QByteArray decodedData = QByteArray::fromBase64(Tokens[7].toUtf8());
    stbi_write_jpg(outputPath.toStdString().c_str(), Tokens[4].toInt(), Tokens[5].toInt(), Tokens[6].toInt(), decodedData.constData(), Tokens[4].toInt() * Tokens[6].toInt());
    std::cout << "Image saved to: " << outputPath.toStdString() << std::endl;
}

