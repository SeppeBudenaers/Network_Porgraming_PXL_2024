#include "image.h"
#include <iostream>
#include "stb_image_write.h"
#include"stb_image.h"

void Image::SaveImage(QString SaveName)
{
    // would like to make custom folders for each user idk how to do that windows.h doesn't work and filesystem doesnt work
    QString outputPath = "./";
    outputPath.append(User_Name);
    outputPath.append("_");
    outputPath.append(SaveName);
    QByteArray decodedData = QByteArray::fromBase64(Image_Data.toUtf8());
    stbi_write_jpg(outputPath.toStdString().c_str(), Width, Height, Channels, decodedData.constData(), Width * Channels);
    std::cout << "Image saved to: " << outputPath.toStdString() << std::endl;

    Response.append("LogicLab>IMG_SERVICE!");
    Response.append(">");
    Response.append(Filter_Type);
    Response.append(">");
    Response.append(User_Name);
    Response.append(">");
    Response.append("Saved");
}

void Image::RetriveImage(QString filepath)
{
    QString FilePath = "./";
    FilePath.append(User_Name);
    FilePath.append("_");
    FilePath.append(filepath);
    unsigned char* imgData = stbi_load(FilePath.toStdString().c_str(), &Width, &Height, &Channels, 0);
    if (imgData == nullptr) {
        std::cerr << "Error in loading the image\n";
        exit(1);
    }
    std::cout << "Loaded image with dimensions: " << Width << "x" << Height << "x" << Channels << std::endl;
    QByteArray byteArray(reinterpret_cast<const char*>(imgData), Width * Height * Channels);
    Image_Data = byteArray.toBase64();

    stbi_image_free(imgData);

    std::cout << "generating response" << std::endl;
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
    Response.append(">");
    Response.append(Image_Data);
}
