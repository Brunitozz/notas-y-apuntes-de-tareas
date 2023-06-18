#include <iostream>
using namespace std;
int main(){
    const int monedas[4]={10,5,2,1};
    int pesos[4];
    int numero, sumaPesos = 0;
    cout<<"Digite un numero: "; cin>>numero;
    for(int i=0; i<4 ; i++){
        pesos[i]=int (numero/monedas[i]);
        numero=numero%monedas[i];
        sumaPesos += pesos[i];
    }
    cout<<"El total es: "<<sumaPesos<<endl;
    for(int j=0;j<4;j++){
        if(pesos[j] !=0){
            cout<<pesos[j]<<" moneda(s) de "<<monedas[j]<<endl;
        }
    }
    return 0;
}
