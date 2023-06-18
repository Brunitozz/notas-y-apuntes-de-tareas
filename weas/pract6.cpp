#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
float num1;
void asknumbers();
void al_cuadrado(float x);
int main(){
    asknumbers();
    al_cuadrado(num1);
    getch();
    return 0;
}
void asknumbers(){
    cout<<"introduzca los numeros"; cin>>num1;
}
void al_cuadrado(float x){
    cuadrado=pow(x,2);
    cout<<"el cuadrado del numero es: "<<cuadrado;
}