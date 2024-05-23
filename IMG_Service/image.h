#ifndef IMAGE_H
#define IMAGE_H
#include <QCoreApplication>

class Image
{
    public:
    Image(QString FilterType, QString UserName, QString ImageData, int width,int height, int channels) : Filter_Type(FilterType),User_Name(UserName), Width(width), Height(height), Channels(channels), Image_Data(ImageData){}
        QString Get_Response() {return Response;}
    virtual void filter(){};
    protected:


        QString Response;

        QString Filter_Type;
        QString User_Name;

        int Width = 0;
        int Height = 0;
        int Channels = 0;
        QString Image_Data;
};

#endif // IMAGE_H
