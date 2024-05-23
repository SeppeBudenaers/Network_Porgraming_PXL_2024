#ifndef IMAGE_BW_H
#define IMAGE_BW_H
#include "image.h"
#include <QCoreApplication>

class Image_BW : public Image
{
    public:
        Image_BW(QString FilterType, QString UserName, QString ImageData, int height, int width, int channels) : Image(FilterType,UserName,ImageData,height,width,channels){}
        void filter();
    private:

};


#endif // IMAGE_BW_H
