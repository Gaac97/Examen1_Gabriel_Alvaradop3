#include <iostream>

using namespace std;
using std::cout;
using std::endl;
using stD::cin;
int main(){
char** matriz=NULL;;
funciones* f = new funciones();
string nombre1, nombre2;
bool deci=false;
/*
cout<<"Ingrese el nombre del primero jugador"<<endl;
cin>>nombre1;
cout<<"ingrese el nombre del segundo jugador"<<endl;
cin>>nombre2;
*/

while(deci!=true){
int cont=0;
int x,y,x2,y2;
if(cont%2==0){
cout<<"Turno del jugador 1:<<endl;
cout<<"Piezas M"<<endl;
matriz = f->crearMatrix(matriz);
f->printMatrix(matriz);

cout<<"Elija una pieza (Ingrese la posicion ejem(0,0))"<<endl;
cin>>x;
cin>>y;
cout<<"Donde se desea mover"<<endl;
cin>>x2;
cin>>y2;

if(f->moverM(matriz,x,y,x2,y2)==true){
m[x][y]=' ';
m[x2][y2] = 'M';



cont++;
}else{
cout<<"Movimiento invalido"<<endl;

}


}else{


}

}
return 0;
}

