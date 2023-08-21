#include <iostream>
using namespace std;
int main(){
    int num, hastanum;
    cout<<"que numero de tabla: "; cin>>num;
    cout<<"ingrese hasta que numero: "; cin>>hastanum;
    cout<<"Tabla de multiplicar\t"<<endl;
    for (int i=1; i<=hastanum; i++){
        cout<<i<<" * "<<num<<" = "<<i*num<<endl;
    }
    return 0;
}