#include "request_worker.h"
#include "image.h"
#include "image_bw.h"
#include "image_rgb.h"
#include <iostream>

void Request_Worker::processRequest(const QString &rawStr) {
    PUSH.connect("tcp://benternet.pxl-ea-ict.be:24041");

    QStringList Tokens = rawStr.split(">");

    if (Tokens.size() <= 2) {
        QString Error = "NoAplication";
        Send_Error(Error);
        std::cout << "Noaplicatio" << std::endl;
        emit finished();
        std::cout << "Pushed1 :"<< std::endl;
        return;
    }
    else{Aplication = Tokens[2];}

    if(Tokens.size() <= 3){
        QString Error = "NoID";
        Send_Error(Error);
        std::cout << "noid" << std::endl;
        emit finished();
        std::cout << "Pushed2 :"<< std::endl;
        return;
    }
    else{ID = Tokens[3];}

    if (Tokens.size() <= 7) { //should maybe check that IMGdata = height *width* channels
        QString Error = "InvalidImage";
        Send_Error(Error);
        std::cout << "InvalidImage" << std::endl;
        emit finished();
        std::cout << "Pushed3 :"<< std::endl;
        return;
    }

    std::cout << "application : " << Tokens[2].toStdString() << std::endl;
    std::cout << "ID : " << Tokens[3].toStdString() << std::endl;
    std::cout << "width : " << Tokens[4].toStdString() << std::endl;
    std::cout << "height : " << Tokens[5].toStdString() << std::endl;
    std::cout << "channels : " << Tokens[6].toStdString() << std::endl;

    std::string Topic_Buffer;

    if (QString::compare(Tokens[2], "BW", Qt::CaseInsensitive) == 0) {
        Image_BW image_Process(Tokens[2], Tokens[3], Tokens[7], Tokens[4].toInt(), Tokens[5].toInt(), Tokens[6].toInt());
        image_Process.filter();
        Topic_Buffer = image_Process.Get_Response().toStdString();
    }

    if (QString::compare(Tokens[2], "R", Qt::CaseInsensitive) == 0 ||
        QString::compare(Tokens[2], "G", Qt::CaseInsensitive) == 0 ||
        QString::compare(Tokens[2], "B", Qt::CaseInsensitive) == 0) {
        Image_RGB image_Process(Tokens[2], Tokens[3], Tokens[7], Tokens[4].toInt(), Tokens[5].toInt(), Tokens[6].toInt());
        image_Process.filter();
        Topic_Buffer = image_Process.Get_Response().toStdString();
    }

    //sending it back
    std::cout << "Pushing :"<< std::endl;
    const char* buffer = Topic_Buffer.c_str();
    PUSH.send(buffer, Topic_Buffer.length());
    std::cout << "Pushed4 :"<< std::endl;
    emit finished();
}

void Request_Worker::Send_Error(QString Error)
{
    QString error;
    error.append("LogicLab>IMG_SERVICE!");
    error.append(">");
    if (QString::compare(Error, "NoAplication", Qt::CaseInsensitive) == 0){}
    else if(QString::compare(Error, "NoID", Qt::CaseInsensitive) == 0){
        error.append(Aplication);
        error.append(">");
    }
    else{
            error.append(Aplication);
            error.append(">");
            error.append(ID);
            error.append(">");
    }

    error.append(Error);

    //sending it to client
    std::string std_error = error.toStdString();
    const char* buffer = std_error.c_str();
    PUSH.send(buffer, error.length());
    //emit requestProcessed(Error);
    return;
}
