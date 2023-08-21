/*
Dado la siguiente matriz, almacene en un vector PAR los números pares y en un vector IMPAR los números impares. 
Luego imprima la matriz y los vectores.

	A[3][3]={{12,6,20}, {15,13,1},{100,15,28}}
*/
#include <iostream>
using namespace std;
int main(){
    int pares[5], impares[5], i, j;
    int A[][]={{12,6,20},{15,13,1},{100,15,28}};
    int par=0, impar=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(A[i][j] mod 2 ==0){
                pares[par]=A[i][j];
            }else{
                impares[impar]=A[i][j];
            }
        }
    }
    //Salida
    cout<<"la matriz es: "<<endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<A[i][j]<"\t";
        }
        cout<<endl;
    }
    cout<<"el vector de los pares es: "<<endl;
    for (i=0;i<5; i++){
        cout<<pares[i]<<endl;
    }
    cout<<"el vector de los impares es: "<<endl;
    for (j=0; j<5; j++){
        cout<<impares[j]<<endl;
    }
}