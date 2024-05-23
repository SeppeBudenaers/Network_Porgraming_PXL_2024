#ifndef IMAGE_RGB_H
#define IMAGE_RGB_H
#include "image.h"
#include <QCoreApplication>

class Image_RGB : public Image
{
public:
    Image_RGB(QString FilterType, QString UserName, QString ImageData, int height, int width, int channels) : Image(FilterType,UserName,ImageData,height,width,channels){}
    void filter();
};

#endif // IMAGE_RGB_H

