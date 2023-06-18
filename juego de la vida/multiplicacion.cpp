#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int numeros[100],;
    cout<<"digite el n de elementos del arreglo: "; cin>>n;
    for(i=0;i<n;i++){
        cout<<"digite un numero: ";
        cin>>numero[i]; //guardando todos los elementos de vector
    }
    //numeros de posicion de elementos
    for(i=0;i<n;i++){
        cout<<i<<"--> "<<numeros[i];
    }
    getch();
    return 0;
}