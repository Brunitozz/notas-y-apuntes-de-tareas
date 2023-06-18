#include <iostream>
using namespace std;
int main(){
    int n, suma=0;
    cout<<"Escribe n: "; cin>>n;
    for ( int i=1; i<=n; i++){
        suma += i;
    }
    cout<<"la suma de los numeros es: "<<suma;
    return 0;
}