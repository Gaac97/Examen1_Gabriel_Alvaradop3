#include <iostream>
#include <string>
#include "Blanca.h"
#include <iostream>
#include <string>
#include "Blanca.h"
#include "Negra.h"
#include <stdlib.h>
#include "Espacio.h"


using namespace std;
using std::cout;
using std::endl;
using std::cin;
funciones*** createMatrix();
void printMatrix(funciones***);
void llenarMatrix(funciones***);
void deleteMatrix(funciones*** matrix);
bool Validar(funciones***,int,int,int,int);

int main(){

	bool deci=false;
	char resp='s';
	while(resp=='s'||resp=='S'){
	cout<<"Juego XCOM"<<endl;
	cout<<"Intrucciones: Las filas se representan con numero y las columnas con una letra separadas con guiones por ejemplo: OB-1B"<<endl;
	funciones*** Tablero = createMatrix();
	llenarMatrix(Tablero);
	printMatrix(Tablero);
	deleteMatrix(Tablero);
	int cont=1;//Turno

	if(cont==1){
	   string posicion;
           string primerX;
            string primerY;
            int posx,posy,newx,newy;
	
		bool deci=true;
		
		cout<<"Turno de jugador 1 Fichas B"<<endl;
		int x,x2,y,y2;
		cout<<"Ingrese la posicion  X"<<endl;
		cin>>x;
		do{

			 cout<<"ingrese posicion: "<<endl;
                          cin>>posicion;
                          primerX = posicion.substr(0,2);
                           primerY= posicion.substr(3,4);
                           posx= primerX[0]-65;
                        posy= primerX[1]-49;
                         newx= primerY[0]-65;
                        newy= primerY[1]-49;

		
			//printMatrix(Tablero);
	

		 }while(Validar(Tablero,posx,posy,newx,newy)==true);

	cont=2;

	}//FIn1
	if(cont==2){
	 string posicion;
           string primerX;
            string primerY;
            int posx,posy,newx,newy;

                bool deci=true;
                do{

	cout<<"Turno de jugador 2:"<<endl;

	cout<<"ingrese posicion: "<<endl;
          cin>>posicion;
          primerX = posicion.substr(0,2);
          primerY= posicion.substr(3,4);
           posx= primerX[0]-65;
             posy= primerX[1]-49;
              newx= primerY[0]-65;
            newy= primerY[1]-49;
		}while(Validar(Tablero,posx,posy,newx,newy)==true);


        printMatrix(Tablero);
	cont=1;//Cambio de turno

	}//Fin2
	cout<<"Desea continuar s/n"<<endl;
	cin>>resp;	
	deleteMatrix(Tablero);
	}//Fin del while	

}
bool Validar(funciones*** tablero,int posx ,int posy ,int newx ,int newy){
        if (posx<0 || posx >9 || newx<0 || newy>9 ){
		cout<<"Se salio del tablero"<<endl;

                return true;

        }/*
        if (tablero[posx][posy]->getIcon().Equals(new Espacio)){

                        cout<<"Selecciono posicon INCORRECTA";

                return true;
        }*/


}



//Imprime matriz
void printMatrix(funciones*** matriz){

 for(int i = 0; i<8;i++){
                for(int j =0; j<8;j++){
                        cout<<"["<<matriz[i][j]->getIcon()<<"]";
                }
        cout<<endl;

        }

}

//Hago el Tablero
funciones*** crearMatrixBlanca(funciones***tablero){
        for (int i = 0; i < 8; ++i){
                for (int j = 0; j < 8; ++j){
                              
                         	tablero[7][0]= new Blanca;//linea 1
                                tablero[7][2]= new Blanca;
                                tablero[7][4]= new Blanca;
                                tablero[7][6]= new Blanca;
                                tablero[6][1]= new Blanca;//linea 2
                                tablero[6][3]= new Blanca;
                                tablero[6][5]= new Blanca;
                                tablero[6][7]= new Blanca;
                                tablero[5][0]= new Blanca;//linea3
                                tablero[5][2]= new Blanca;
                                tablero[5][4]= new Blanca;
                                tablero[5][6]= new Blanca;

                }
        }
}

void llenarMatrix(funciones*** matrix){

        for (int i = 0; i < 8; ++i){
                for (int j = 0; j < 8; ++j){

                        if ((i==0 && j==1) || (i==0 && j==3) || (i==0 && j==5) || (i==0 && j==7) || (i==2 && j==1) || (i==2 && j==3) || (i==2 && j==5) || (i==2 && j==7) || (i==1 && j==0) || (i==1 && j==2) || (i==1 && j==4) || (i==1 && j==6)){
                                        matrix[i][j]=new Blanca;
                        }else if ((i==5 && j==0) || (i==5 && j==2) || (i==5 && j==4) || (i==5 && j==6) || (i==6 && j==1) || (i==6 && j==3) || (i==6 && j==5) || (i==6 && j==7) || (i==7 && j==0) || (i==7 && j==2) || (i==7 && j==4) || (i==7 && j==6)){
                                matrix[i][j]=new Negra;
                        }else {

                                matrix[i][j]=new Espacio;
                        }
                }
        }


}






//Llena la matriz de NULL
funciones*** createMatrix(){ 
        funciones*** retVal= new funciones**[8]; 
 
        for(int i=0 ; i<8 ; i++){ 
                retVal[i]=new funciones*[8]; 
        }

 
        for (int i = 0; i < 8; ++i){ 
                for (int j = 0; j < 8; ++j){ 
                        retVal[i][j]=NULL; 
                } 
        } 
 
        return retVal; 
}

//Libera memoria
void deleteMatrix(funciones*** matrix){
        for(int i=0; i<8 ; i++){
                delete matrix[i];
                matrix[i]=NULL;
        }
        delete [] matrix;
}




