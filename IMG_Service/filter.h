#ifndef FILTER_H
#define FILTER_H

#include <QCoreApplication>

class Filter
{
public:
    Filter(QString FilterType, QString UserName, QString ImageData, int height, int width, int channels);
    QString Get_Response() {return Response;};
private:
    QString Black_and_White(QString Data, int width, int height, int channels);

    QString Response;

    QString Filter_Type;
    QString User_Name;

    int Width = 0;
    int Height = 0;
    int Channels = 0;

    QString Image_Data;
};

#endif // FILTER_H
