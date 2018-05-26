#ifndef ESPACIO_H
#define ESPACIO_H
#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

class Espacio: public funciones{

private:
        char icon;
        funciones*** matrix;

public:
        Espacio();
        bool mover(funciones***,int, int,int,int);
        bool perder(funciones***, int);
        bool general(funciones***, int);
        bool comer(funciones***,int,int, int, int);
        char getIcon();


};

#endif

