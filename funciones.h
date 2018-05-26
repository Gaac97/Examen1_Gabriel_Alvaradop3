#ifndef FUNCIONES_H
#define FUNCIONES_H

class funciones{
	public:
	int size;
	char** areaJuego();
	void printMatrix(char**);
	char** crearMatrix(char**);
	bool Comer(int**,int,int);
	bool moverM(int**,int,int);
	bool moverG(int**,int, int);
	void liberarMemoria();
		
};

#endif



