/*Escriba una plantilla de función llamada
     maximo() que devuelva el valor
máximo de tres argumentos que se transmitan
    a la función cuando sea llamada.
Suponga que los tres argumentos serán del
          mismo tipo de datos.
*/

#include <iostream>
#include <conio.h>
using namespace std;


int main(){
    int a,b,c;
    cout<<"ingrese cada tipo de dato: "<<endl; cin>>a>>b>>c;
    maximo(a;b;c);
    getch();
    return 0;
}

template <class TIPOD>
void maximo(TIPOD dato1; TIPOD dato2;TIPOD 3){
    if (dato1>dato2 && dato1>dato3){
        cout<<"el dato maximo es: "<<dato1;
    }else if (dato2>dato1 && dato2>dato3){
        cout<<"el dato maximo es: "<<dato2;
    }else {
        cout<<"el dato maximo es: "<<dato3;
    }
}

