#include "image.h"
#include <iostream>
#include <filesystem>
#include "stb_image_write.h"

void Image::SaveImage(QString SaveName)
{
    QString outputPath = "./";
    outputPath.append(User_Name);
    outputPath.append("/");
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
