#ifndef PLEC_H
#define PLEC_H
#include <QString>

class Plec
{
protected:
    QString plec;                       //zmienna dziedziczona
    virtual void wyniki(){};            //virtualna funkcja bazowa

public:
    Plec();

};

#endif // PLEC_H
