#include "filter.h"
#include <iostream>

Filter::Filter(QString FilterType, QString UserName, QString ImageData,int width , int height,  int channels) : Filter_Type(FilterType),User_Name(UserName),Width(width), Height(height), Channels(channels), Image_Data(ImageData)
{
    std::cout<<"Filter Type : "<<Filter_Type.toStdString()<<std::endl;
    std::cout<<"User Name : "<<User_Name.toStdString()<<std::endl;



    Response.append("LogicLab>IMG_SERVICE!");
    Response.append(">");
    Response.append(Filter_Type);
    Response.append(">");
    Response.append(User_Name);
    Response.append(">");
    Response.append(QString::number(Width));
    Response.append(">");
    Response.append(QString::number(Height));
    Response.append(">");
    Response.append(QString::number(Channels));

    if(QString::compare(Filter_Type,"BW",Qt::CaseInsensitive) == 0)
    {
        Response.append(">");
        Response.append(Black_and_White(Image_Data,Width,Height,Channels));
    }
    else
    {
        Response.append(">");
        Response.append("Invalid Filter");
    }
}

QString Filter::Black_and_White(QString Data, int width, int height, int channels)
{
    QByteArray decodedImage = QByteArray::fromBase64(Data.toUtf8());
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            int sum = 0;
            for (int k = 0; k < channels; ++k) {
                int index = (i * width + j) * channels + k;
                sum += static_cast<unsigned char>(decodedImage.at(index));
            }
            unsigned char average = sum / channels;
            for (int k = 0; k < channels; ++k) {
                int index = (i * width + j) * channels + k;
                decodedImage[index] = average;
            }
        }
    }
    //encoding it again

    return decodedImage.toBase64();
}
