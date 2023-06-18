#include <iostream>
#include <conio.h>
using namespace std;
/*Ejercicio 1: Escriba una funcion llamada mult() que acepte dos numeros en punto 
flotante como parametros, multiplique estos dos numeros y despliegue el resultado.*/
//prototipo
void pedirDatos();
void mult( float x, float y);
float a,b;
int main(){
    pedirDatos();
    mult(a,b);
    
    getch();
    return 0;
}
void pedirDatos(){
    cout<<"escriba dos numeros: "; cin>>a>>b;
}
void mult( float x, float y){
    float multiplicacion=x*y;
    cout<<"la multiplicacion es: "<<multiplicacion<<endl;
}