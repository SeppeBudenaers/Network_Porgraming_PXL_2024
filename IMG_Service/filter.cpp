#include "filter.h"
#include <iostream>

Filter::Filter(QString FilterType, QString UserName, QString ImageData) : Filter_Type(FilterType),User_Name(UserName),Image_Data(ImageData)
{
    std::cout<<"Filter Type : "<<Filter_Type.toStdString()<<std::endl;
    std::cout<<"User Name : "<<User_Name.toStdString()<<std::endl;
    std::cout<<"Image Data : "<<Image_Data.toStdString()<<std::endl;


    Response.append("LogicLab>IMG_SERVICE!");
    Response.append(">");
    Response.append(Filter_Type);
    Response.append(">");
    Response.append(User_Name);

    if(QString::compare(Filter_Type,"BW",Qt::CaseInsensitive) == 0)
    {
        Image_Data = Black_and_White(Image_Data);
    }
    else
    {
        Response.append(">");
        Response.append("Invalid Filter");
    }

    std::cout<<"Response : "<<Response.toStdString()<<std::endl;

}

QString Filter::Black_and_White(QString Data)
{
    std::cout<<"Inside BW filter"<<std::endl;
    return Data;
}
