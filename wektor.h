#ifndef WEKTOR_H
#define WEKTOR_H

#include <QDialog>
#include <algorithm>

class wektor
{
public:
    wektor();
    void advektor();            //funkcja wczytująca dane do wektora

protected:


    std::vector<std::string>wektorNorm;  //tworzenie wektora stringów

};


#endif // WEKTOR_H
