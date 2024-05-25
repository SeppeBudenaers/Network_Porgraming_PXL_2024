#include "option_menu.h"
#include <iostream>

Option_Menu::Option_Menu()
{

}

int Option_Menu::Option_handeler(QString *string)
{
    if(QString::compare(*string, "Q", Qt::CaseInsensitive) == 0){return 1;}  // quit

    if(QString::compare(*string, "H", Qt::CaseInsensitive) == 0){            // help
        std::cout<<"Aplications: BW(grayscale), R(only Red), G(only Green), B(only Blue)"<<std::endl;
        std::cout<<"Image path: is relative path from the EXE to the image"<<std::endl;
        std::cout<<"Output Path: is relative path from the EXE to the output of a image"<<std::endl;
        std::cout<<"You can continue with the question above"<<std::endl;
        std::string temp;
        std::cin >> temp;
        *string = QString::fromStdString(temp);
        return Option_handeler(string);
    }

    return 0;
}
