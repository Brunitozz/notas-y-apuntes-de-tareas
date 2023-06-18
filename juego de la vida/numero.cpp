#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int vector[]={
        1,2,3,4,5,
    };
    int suma=0;
    for (int i=0;i<5;i++){
        suma+=vector[i];
    }
    cout<<"la suma de elementos es: "<<suma;
    getch();
    return 0;
}