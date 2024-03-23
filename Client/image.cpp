#include "image.h"
#define STB_IMAGE_IMPLEMENTATION
#include"stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include"stb_image_write.h"
#include <iostream>
Image::Image(QString filepath) : FilePath(filepath)
{
    imgData = stbi_load(FilePath.toStdString().c_str(), &width, &height, &channels, 0);
    if (imgData == nullptr) {
        std::cerr << "Error in loading the image\n";
        exit(1);
    }
    std::cout << "Loaded image with dimensions: " << width << "x" << height << "x" << channels << std::endl;
}

void Image::saveImage(const QString& outputPath) {
    // Write the image to file
    std::cout << "Image saved to: " << outputPath.toStdString() << std::endl;
    stbi_write_png(outputPath.toStdString().c_str(), width, height, channels, imgData, width * channels);
    std::cout << "Image saved to: " << outputPath.toStdString() << std::endl;
}

