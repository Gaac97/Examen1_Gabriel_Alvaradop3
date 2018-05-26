#include "funciones.h"
#include <iostream>
using namespace std;
using std::cout;
using std::endl;

class Tablero2{

void printMatrix(char** matriz){
 	for(int i = 0; i<7;i++){
                for(int j =0; j<7;j++){
			cout<<"["<<matriz[i][j]<<"]";
                }
        cout<<endl;

        }


}

char crearMatrix(char** m){
	for(int i=0; i<7;i++){
		for(int j =0; j<7;j++ ){
		
			if(m[i][0]%2!=0&&i==0){
				m[i][j] = 'M';
			}
			 if(m[i][0]%2==0&&i==1){
                                m[i][j] = 'M';
                        }
			if(m[i][0]%2!=0&&i==2){
                                m[i][j] = 'M';
                        }

			if(m[i][0]%2==0&&i==5){
                                m[i][j] = 'G';
                        }
			if(m[i][0]%2!=0&&i==6){
                                m[i][j] = 'G';
                        }

			if(m[i][0]%2==0&&i==7){
                                m[i][j] = 'M';

                       }	

		}
		
	}
	
}
bool moverM(char** m, int x,int y,int x2,int y2){
	int cont=1;
	char pos=' ';
	for(int i=0; j<7;j++){
		for(int j=0; j<7;j++){
			pos=m[i][j];
			if(pos=='M'){
				if(j==y2){
					return true;
				}
			
			}else{
			return false;
			}//FIN

		}
	}
}

bool moverG(char** m, int x, int y, int x2, int y2){
char pos=' ';
 int cont=1;
        for(int i=0; j<7;j++){
                for(int j=0; j<7;j++){
                        if(pos=='G'){
                                if(j==y2){
                                        return true;
                                }
				

                        }else{
                        return false;
                        }//FIN

                }
        }

}



