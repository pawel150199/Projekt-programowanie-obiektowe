#include "wektor.h"
#include <fstream>
#include <string>
#include <QDebug>

wektor::wektor()
{

}

void wektor::advektor()                                                                 //dodawanie liczb do wektora z pliku
{

    std::string line;
    std::fstream normy;

    normy.open("normy.txt",std::ios::in);                                                //otwieranie pliku
    if( normy.good())
    {
        while(getline(normy,line))
        {
            wektorNorm.push_back(line);
        }

        normy.close();
    }
}
