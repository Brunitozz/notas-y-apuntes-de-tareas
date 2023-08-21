#include <iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n=0, maximo, sum;
	do{
		cout<<"Ingrese el maximo valor: "<<endl;
		cin>>maximo;
	}while(maximo<=0);
	do{
		n++;
		sum=0;
		for(int i=1;i<=n;i++){
			sum+=(i*i)-i-2;
		}
	}while(sum<=maximo);
	cout<<"El numero n que cumple con las condiciones es: "<<n<<endl;
	cout<<"La diferencia entre la suma y n es: "<<sum-n<<endl;
	system("PAUSE");
	return 0;
}
