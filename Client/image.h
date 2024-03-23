#ifndef IMAGE_H
#define IMAGE_H

#include <QCoreApplication>
#include"stb_image.h"
#include"stb_image_write.h"

class Image
{
public:
    Image(QString filepath);
    void saveImage(const QString& outputPath);

private:
    QString FilePath;
    int width = 0;
    int height = 0;
    int channels = 0;
    unsigned char* imgData;
};

#endif // IMAGE_H
