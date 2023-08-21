#include <iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n=0, max, suma;
	do{
		cout<<"Ingrese el valor maximo: "<<endl;
		cin>>max;
	}while(max<=0);
	do{
		n++;
		suma=0;
		for(int i=1;i<=n;i++){
			suma+=(i*i)-i-2;
		}
	}while(suma<=max);
	cout<<"El numero n que cumple con las condiciones es: "<<n<<endl;
	cout<<"La diferencia entre la suma y n es: "<<suma-n<<endl;
	system("PAUSE");
	return 0;
}
