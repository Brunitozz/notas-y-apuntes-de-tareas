#include <iostream>
using namespace std;
int main(){
    int n, suelmayor=1, obr=1;
    float sueldo, total=0;
    cout<<"escriba el numero de trabajadores: "; cin>>n;
    do{
        cout<<"escriba el sueldo del trabajador: "; cin>>sueldo;
        if(sueldo>=5000){
            suelmayor +=1;
        }
        total += sueldo
        obr =+ 1
    } while( obr<=n)
    cout<<"el total que paga la organizacion a los trabajadores es: "<<total<<endl;
    cout<<"la cantidad de obreros que gana mas de 5000 son: "<<suelmayor;
    return 0;
}