#include "image.h"
#include "stb_image_write.h"
#include"stb_image.h"

#include <iostream>
#include <fstream>

void Image::SaveImage(QString SaveName)
{
    // would like to make custom folders for each user idk how to do that windows.h doesn't work and filesystem doesnt work
    QString outputPath = "./";
    outputPath.append(User_Name);
    outputPath.append("_");
    outputPath.append(SaveName);

    std::string filename = "./database.txt";
    std::ofstream file;
    file.open(filename, std::ios_base::app);
    if (!file.is_open()) {
        Response.append("LogicLab>IMG_SERVICE!");
        Response.append(">");
        Response.append(Filter_Type);
        Response.append(">");
        Response.append(User_Name);
        Response.append(">");
        Response.append("Could not find database");
        return;
    }
    file <<outputPath.toStdString()<<"\n";

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
        Response.append("LogicLab>IMG_SERVICE!");
        Response.append(">");
        Response.append(Filter_Type);
        Response.append(">");
        Response.append(User_Name);
        Response.append(">");
        Response.append("CouldNotFindImage");
        return;
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

void Image::ListImage()
{
    std::string filename = "./database.txt";
    std::ifstream file; // Use ifstream for reading
    std::vector<QString> lines;

    file.open(filename, std::ios_base::in);
    if (!file.is_open()) {
        Response.append("LogicLab>IMG_SERVICE!");
        Response.append(">");
        Response.append(Filter_Type);
        Response.append(">");
        Response.append(User_Name);
        Response.append(">");
        Response.append("Could not find database");
        return; // Exit with an error code
    }

    std::string line;
    while (std::getline(file, line)) { // Read the file line by line
        lines.push_back(QString::fromStdString(line)); // Convert std::string to QString and store in vector
    }

    file.close(); // Close the file
    QString Usersfiles;
    Usersfiles.append("./");
    Usersfiles.append(User_Name);
    bool foundItem = false;
    Response.append("LogicLab>IMG_SERVICE!");
    Response.append(">");
    Response.append(Filter_Type);
    Response.append(">");
    Response.append(User_Name);
    Response.append(">");

    for (const QString& qLine : lines) {
        QStringList Tokens = qLine.split("_");
        if(QString::compare(Tokens[0], Usersfiles, Qt::CaseInsensitive) == 0 ){
            if(!foundItem){foundItem = true;}
            std::cout <<"FOUND: " <<qLine.toStdString() << std::endl; // Print each line
            Response.append(qLine);
            Response.append(",");
        }

    }

    if(!foundItem){Response.append("NoFileForThisUserName");}
}
