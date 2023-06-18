/*Escriba un programa en C++ que devuelva la
            parte fraccionaria de
cualquier número introducido por el usuario.
    Por ejemplo, si se introduce el número
  256.879, debería desplegarse el número
                   0.879.
*/

#include <iostream>
#include <conio.h>
using namespace std;
double n, decimal
void pedirNum();
void frac(double x);
int main(){
    pediNum();
    frac(n);
    getch();
    return 0;
}
void pediNum(){
    cout<<"Escriba un numero: "; cin>>n;
}
void frac(double x){
    decimal=x-int(x);
    cout<<"la parte decimal del numero es: "<<decimal;
}