#include <iostream>
using namespace std;
void MostrarSuma(int y);
int NumCuadrado(int a);
void Validacion_Datos(int &num);
void Entrada_Enteros(int &numeros);

int main(){
	int n;
    Entrada_Enteros(n);
    return 0;
}

void Validacion_Datos(int &num){
    cout<<"Escriba un numero para hallar su cuadrado: ";
    do{
        cin>>num;
        if(num<0){
            cout<<"Ingrese un numero positivo diferente de 0.";
        }
    }while (num<0);
}

void Entrada_Enteros(int &numeros){
    do{
        Validacion_Datos(numeros);
        if(numeros>0){
        	MostrarSuma(numeros);
        }
        else{
        	cout<<"Fin";
        }
    }while(numeros!=0);
}
void MostrarSuma(int y){
    int cuadrado;
    cuadrado= NumCuadrado(y);
    cout<<" = "<<cuadrado<<endl;
    cout<<"El cuadrado del numero es: "<<cuadrado<<endl;
}

int NumCuadrado(int x){
    int suma, num[x];
    suma=0;
    for(int i=0; i<x;i++){
        num[i]=2*i+1;
        suma+=num[i];
    }
    for(int j=0; j<x;j++){
    	if(j<x-1){
    		cout<<num[j]<<" + ";
    	}
        else{
        	cout<<num[j];
        }
    }
    return suma;
}