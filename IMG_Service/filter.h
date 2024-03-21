#ifndef FILTER_H
#define FILTER_H

#include <QCoreApplication>

class Filter
{
public:
    Filter(QString FilterType,QString UserName,QString ImageData);
    QString Get_Response() {return Response;};
private:
    QString Black_and_White(QString Data);

    QString Response;

    QString Filter_Type;
    QString User_Name;
    QString Image_Data;
};

#endif // FILTER_H
