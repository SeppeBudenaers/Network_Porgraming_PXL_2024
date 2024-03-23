#include "image.h"
#define STB_IMAGE_IMPLEMENTATION
#include"stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include"stb_image_write.h"
#include <iostream>
Image::Image(QString filepath) : FilePath(filepath)
{
    unsigned char* imgData = stbi_load(FilePath.toStdString().c_str(), &width, &height, &channels, 0);
    if (imgData == nullptr) {
        std::cerr << "Error in loading the image\n";
        exit(1);
    }
    std::cout << "Loaded image with dimensions: " << width << "x" << height << "x" << channels << std::endl;
    QByteArray byteArray(reinterpret_cast<const char*>(imgData), width * height * channels);
    base64Data = byteArray.toBase64();
    stbi_image_free(imgData);
}

QString Image::Get_imgData()
{
    QString Image;
    Image.append(QString::number(width));
    Image.append(">");
    Image.append(QString::number(height));
    Image.append(">");
    Image.append(QString::number(channels));
    Image.append(">");
    Image.append(base64Data);
    return Image;
}

void Image::saveImage(const QString& outputPath) {
    // Write the image to file
    QByteArray decodedData = QByteArray::fromBase64(base64Data.toUtf8());
    stbi_write_jpg(outputPath.toStdString().c_str(), width, height, channels, decodedData.constData(), width * channels);
    std::cout << "Image saved to: " << outputPath.toStdString() << std::endl;
}

