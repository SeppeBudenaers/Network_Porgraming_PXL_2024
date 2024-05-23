#include "image_bw.h"
#include <iostream>

void Image_BW::filter()
{
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

    QByteArray decodedImage = QByteArray::fromBase64(Image_Data.toUtf8());
    for (int i = 0; i < Height; ++i) {
        for (int j = 0; j < Width; ++j) {
            int sum = 0;
            for (int k = 0; k < Channels; ++k) {
                int index = (i * Width + j) * Channels + k;
                sum += static_cast<unsigned char>(decodedImage.at(index));
            }
            unsigned char average = sum / Channels;
            for (int k = 0; k < Channels; ++k) {
                int index = (i * Width + j) * Channels + k;
                decodedImage[index] = average;
            }
        }
    }
    //encoding it again
    Response.append(decodedImage.toBase64());
}
