#include "heartbeat.h"
#include <iostream>
#include <QString>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void Heartbeat::HeartBeat_Service()
{
    PUSH.connect("tcp://benternet.pxl-ea-ict.be:24041");
    QString Heartbeat = "LogicLab>IMG_SERVICE!>BIEP";
    std::string Buffer = Heartbeat.toStdString();
    const char* buffer = Buffer.c_str();

    while(1){
        if(PUSH.connected()){
            PUSH.send(buffer, Heartbeat.length());
            std::cout<<"BIEP"<<std::endl;
            Sleep(10000);
        }
    }
}
