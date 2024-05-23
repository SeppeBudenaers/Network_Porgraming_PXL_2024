#include "request_worker.h"
#include "image.h"
#include "image_bw.h"
#include "image_rgb.h"
#include <iostream>

void Request_Worker::processRequest(const QString &rawStr) {
    PUSH.connect("tcp://benternet.pxl-ea-ict.be:24041");
    QStringList Tokens = rawStr.split(">");
    if (Tokens.size() < 7) {
        QString error;
        error.append("LogicLab>IMG_SERVICE!");
        error.append(">");
        error.append(Tokens[2]);
        error.append(">");
        error.append(Tokens[3]);
        error.append(">");
        std::string Error = error.toStdString();
        const char* buffer = Error.c_str();
        PUSH.send(buffer, error.length());
        std::cout << "Pushed :"<< std::endl;
        //emit requestProcessed(Error);
        return;
    }

    std::cout << "filter : " << Tokens[2].toStdString() << std::endl;
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
    std::cout << "Pushing :"<< std::endl;
    const char* buffer = Topic_Buffer.c_str();
    PUSH.send(buffer, Topic_Buffer.length());
    std::cout << "Pushed :"<< std::endl;
    emit finished();
}
