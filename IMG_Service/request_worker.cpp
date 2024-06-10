#include "request_worker.h"
#include "image.h"
#include "image_bw.h"
#include "image_rgb.h"
#include <iostream>
#include <fstream>

void Request_Worker::processRequest(const QString &rawStr) {
    std::string Topic_Buffer;
    QStringList Tokens = rawStr.split(">");
    PUSH.connect("tcp://benternet.pxl-ea-ict.be:24041");

    /*ERROR HANDELING*/
    if (Tokens.size() <= 2) {
        QString Error = "NoAplication";
        Send_Error(Error);
        std::cout << Error.toStdString() << std::endl;
        return;
    }
    else{Aplication = Tokens[2];}

    if(Tokens.size() <= 3 ){
        QString Error = "NoID";
        Send_Error(Error);
        std::cout << Error.toStdString() << std::endl;
        return;
    }
    else{ID = Tokens[3];}

    //PASWORD SHIT

    if(Tokens.size() <= 4 ){
        QString Error = "NoPWD";
        Send_Error(Error);
        std::cout << Error.toStdString() << std::endl;
        return;
    }

    if (QString::compare(Tokens[2], "REGISTER", Qt::CaseInsensitive) == 0 ) {
        Image image_Process(Tokens[2], Tokens[3]);
        image_Process.Register(Tokens[4]);
        Topic_Buffer = image_Process.Get_Response().toStdString();

        /*PUSHING AWSNER BACK*/
        const char* buffer = Topic_Buffer.c_str();
        PUSH.send(buffer, Topic_Buffer.length());
        std::cout << "Pushed4 :"<< Topic_Buffer << std::endl;
        emit finished();
        return;
    }

    if(!validate_user(Tokens[3],Tokens[4])){
        QString Error = "IncorrectPWD";
        Send_Error(Error);
        std::cout << Error.toStdString() << std::endl;
        return;
    }









    if (QString::compare(Tokens[2], "LIST", Qt::CaseInsensitive) == 0 ) {
        Image image_Process(Tokens[2], Tokens[3]);
        image_Process.ListImage();
        Topic_Buffer = image_Process.Get_Response().toStdString();

        /*PUSHING AWSNER BACK*/
        const char* buffer = Topic_Buffer.c_str();
        PUSH.send(buffer, Topic_Buffer.length());
        std::cout << "Pushed4 :"<< Topic_Buffer << std::endl;
        emit finished();
        return;
    }

    /*ERROR HANDELING RETRIVING IMAGES*/
     if(Tokens.size() <= 5 ){
        QString Error = "NoFileName";
        Send_Error(Error);
        std::cout << Error.toStdString() << std::endl;
        return;
    }

    /*RETRIVING IMAGE*/
    if (QString::compare(Tokens[2], "RETRIVE", Qt::CaseInsensitive) == 0 ) {
        Image image_Process(Tokens[2], Tokens[3]);
        image_Process.RetriveImage(Tokens[5]);
        Topic_Buffer = image_Process.Get_Response().toStdString();

        /*PUSHING AWSNER BACK*/
        const char* buffer = Topic_Buffer.c_str();
        PUSH.send(buffer, Topic_Buffer.length());
        std::cout << "Pushed4 :"<< std::endl;
        emit finished();
        return;
    }




    /*ERROR HANDELING IMAGES*/
    if (Tokens.size() <= 8 ) {
        QString Error = "InvalidImage";
        Send_Error(Error);
        std::cout << Error.toStdString() << std::endl;
        return;
    }

    if(QByteArray::fromBase64(Tokens[8].toUtf8()).size() != (Tokens[5].toInt() * Tokens[6].toInt() * Tokens[7].toInt()) ){
        QString Error = "InvalidImageSize";
        Send_Error(Error);
        std::cout << Error.toStdString() << std::endl;
        return;
    }


    /*IMAGE FILTERS*/
    if (QString::compare(Tokens[2], "BW", Qt::CaseInsensitive) == 0 ) {
        Image_BW image_Process(Tokens[2], Tokens[3], Tokens[8], Tokens[5].toInt(), Tokens[6].toInt(), Tokens[7].toInt());
        image_Process.filter();
        Topic_Buffer = image_Process.Get_Response().toStdString();

        /*PUSHING AWSNER BACK*/
        const char* buffer = Topic_Buffer.c_str();
        PUSH.send(buffer, Topic_Buffer.length());
        std::cout << "Pushed4 :"<< std::endl;
        emit finished();
        return;
    }

    if (QString::compare(Tokens[2], "R", Qt::CaseInsensitive) == 0 || QString::compare(Tokens[2], "G", Qt::CaseInsensitive) == 0 ||QString::compare(Tokens[2], "B", Qt::CaseInsensitive) == 0 ) {
        Image_RGB image_Process(Tokens[2], Tokens[3], Tokens[8], Tokens[5].toInt(), Tokens[6].toInt(), Tokens[7].toInt());
        image_Process.filter();
        Topic_Buffer = image_Process.Get_Response().toStdString();

        /*PUSHING AWSNER BACK*/
        const char* buffer = Topic_Buffer.c_str();
        PUSH.send(buffer, Topic_Buffer.length());
        std::cout << "Pushed4 :"<< std::endl;
        emit finished();
        return;
    }


    /*ERROR HANDELING SAVING IMAGES*/
    if (Tokens.size() <= 9 ) {
        QString Error = "InvalidSavingName";
        Send_Error(Error);
        std::cout << Error.toStdString() << std::endl;
        return;
    }

    /*SAVING IMAGES*/
    if (QString::compare(Tokens[2], "SAVE", Qt::CaseInsensitive) == 0 ){
        Image image_Process(Tokens[2], Tokens[3], Tokens[8], Tokens[5].toInt(), Tokens[6].toInt(), Tokens[7].toInt());
        image_Process.SaveImage(Tokens[9]);
        Topic_Buffer = image_Process.Get_Response().toStdString();

        /*PUSHING AWSNER BACK*/
        const char* buffer = Topic_Buffer.c_str();
        PUSH.send(buffer, Topic_Buffer.length());
        std::cout << "Pushed4 :"<< std::endl;
        emit finished();
        return;
    }

    /*ERROR HANDELING APLICATION*/
    if(Topic_Buffer.empty()){
        QString Error = "CouldNotFindAplication";
        Send_Error(Error);
        std::cout << Error.toStdString() << std::endl;
        return;
    }
}

bool Request_Worker::validate_user(QString UserName, QString PWD)
{
    std::string filename = "./database_PWD.txt";
    std::ifstream file; // Use ifstream for reading
    std::vector<QString> lines;
    file.open(filename, std::ios_base::in);
    if (!file.is_open()) {
        return false; // Maybe make a error
    }

    std::string line;
    while (std::getline(file, line)) { // Read the file line by line
        lines.push_back(QString::fromStdString(line)); // Convert std::string to QString and store in vector
    }

    file.close(); // Close the file
    QString UsersCredentials;
    UsersCredentials.append(UserName);
    UsersCredentials.append("_");
    UsersCredentials.append(PWD);

    for (const QString& qLine : lines) {
        if(QString::compare(qLine, UsersCredentials, Qt::CaseInsensitive) == 0 ){
        return true;
        }

    }
    return false;
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
    emit finished();
    return;
}



//    std::cout << "application : " << Tokens[2].toStdString() << std::endl;
//    std::cout << "ID : " << Tokens[3].toStdString() << std::endl;
//    std::cout << "width : " << Tokens[4].toStdString() << std::endl;
//    std::cout << "height : " << Tokens[5].toStdString() << std::endl;
//    std::cout << "channels : " << Tokens[6].toStdString() << std::endl;
