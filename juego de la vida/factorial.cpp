/*
#include<stdlib.h>
#include<time.h>
srand(time(NULL));
num = rand()*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    int numero, dato, contador=0;
    srand(time(NULL)); //genera un numero aleatorio
    dato=1+rand()%(100);
    do{
        cout<<"digite un numero: "; cin>>numero;
        if(numero>dato){
            cout<<"\nDigite un numero menor\n";
        }else if (numero<dato){
            cout<<"\nDigite un numero mayor\n";
        }
        contador++
    } while(numero !=dato);
    cout<<"\nFelicidades adivinaste\n";
    cout<<"Numero de intentos: "<<contador<<endl;
    system("PAUSE");
    return 0;
}
