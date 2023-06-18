#include <iostream>
#include <conio.h>
using namespace std;
long long int factorial(int n);
int main(){
    int num;
    cout<<"ingrese un numero"<<endl; cin>>num;
    cout<<"el factorial es: "<<factorial(num);
    return 0;
}
long long int factorial(int n){
    long long int resultado;
    if(n==0){
        resultado=1;
    }
    else{
        resultado=n*factorial(n-1);
    }
    return resultado;
}