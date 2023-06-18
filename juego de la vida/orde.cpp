#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    srand(time(NULL));
    int vector[100], n;
    cout<<"digite el numero: "; cin>>n;
    for (int i=0; i<n;i++){
        vector[i]=rand()%(31);
    }
    for(int i=0; i<n/2;i++){
        temp=vector[i];
        vector[i]=vector[n-1-i];
        vector[n-1-i]=temp;
    }
    for(int i=0; i<n;i++){
        cout<<"El numero invertido es: "<<vector[i]<<endl;
    }
    getch();
    return 0;
}