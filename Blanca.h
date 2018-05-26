#ifndef BLANCA_H
#define BLANCA_H
#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

class Blanca: public funciones{

private:
        char icon;
        funciones*** matrix;

public:
        Blanca();
        bool mover(funciones***,int, int,int,int);
        bool perder(funciones***, int);
        bool comer(funciones***,int, int,int,int);
        char getIcon();


};

#endif

