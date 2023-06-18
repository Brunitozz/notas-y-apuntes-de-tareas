#include <iostream>
using namespace std;
int main(){
    int n, c=0;
    cout<<"ingrese un numero: "; cin>>n;
    for (int i=1; i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        cout<<"el numero es primo";
    }
    else{
        cout<<"el numero no es primo";
    }
    return 0;
}