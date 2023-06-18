/*El cuadrado de un número entero es igual a la suma de tantos números impares
consecutivos (desde la unidad) como unidades tiene el número. Es decir, 3**2 es igual
a 1+3+5 y 5**2 es igual a 1+3+5+7+9. Implementa un programa que solicite enteros al
usuario y muestre en la pantalla su cuadrado calculado con el algoritmo indicado. El
programa deberá finalizar cuando se introduzca el valor 0. Usará una función para
calcular los cuadrados.*/


#include <iostream>
using namespace std;

int main(){
	int n, cuadrado;
	cout<<"ingrese el numero: "; cin>>n;
	cuadrado=NumCuadrado(n);
	cout<<"="<<cuadrado<<endl;
	cout<<"el cuadrado del numero es: "<<cuadrado;
	return 0;
}
int NumCuadrado(int a){
	int suma=0;
	int num[a];
	for(int i=0;i<a;i++){
		num[i]=2*i+1;
		suma+=num[i];
	}
	for(int j=0;j<a;j++){
		cout<<num[j]<<"+";
	}
	return suma;
}