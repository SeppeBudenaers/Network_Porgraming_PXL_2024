#include "image_rgb.h"

void Image_RGB::filter()
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

    int channelToKeep = 0;
    if(QString::compare(Filter_Type,"R",Qt::CaseInsensitive) == 0){channelToKeep = 0;}
    else if(QString::compare(Filter_Type,"G",Qt::CaseInsensitive) == 0){channelToKeep = 1;}
    else if(QString::compare(Filter_Type,"B",Qt::CaseInsensitive) == 0){channelToKeep = 2;}

    for (int i = 0; i < Height; ++i) {
        for (int j = 0; j < Width; ++j) {
            int baseIndex = (i * Width + j) * Channels;
            unsigned char channelValue = static_cast<unsigned char>(decodedImage.at(baseIndex + channelToKeep));

            // Set the desired channel to the original value and set the other channels to zero
            for (int k = 0; k < Channels; ++k) {
                int index = baseIndex + k;
                if (k == channelToKeep) {
                    decodedImage[index] = channelValue;
                } else {
                    decodedImage[index] = 0;
                }
            }
        }
    }
    //encoding it again
    Response.append(decodedImage.toBase64());
}
