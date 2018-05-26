#ifndef FUNCIONES_H
#define FUNCIONES_H
#include  <iostream>
#include <string>

class funciones{
	public:
	funciones();
	bool mover(funciones***,int,int,int,int);
	bool pierde(funciones***,int);
	bool comer(funciones***,int,int,int,int);
	char icono();
	virtual char getIcon()=0;

};


#endif



