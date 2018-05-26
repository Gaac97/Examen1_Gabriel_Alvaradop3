#ifndef NEGRA_H
#define NEGRA_H
#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

class Negra: public funciones{

private:

        char icon;
        funciones*** matrix;

public:
        Negra();
        //Negra(Pieza***);
        bool mover(funciones***,int, int,int,int);
        bool perder(funciones***, int);
        bool comer(funciones***,int, int ,int ,int);
        char getIcon();


};

#endif

