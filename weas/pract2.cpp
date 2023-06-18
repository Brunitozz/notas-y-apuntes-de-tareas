/* Calcule la suma de la siguiente expresión :
1/2 + 2/3 + 3/4 +...+ 100/101*/

#include <iostream>
using namespace std;
int main(){
    float suma=0;
    for ( float i=1; i<=100; i++){
        suma= suma + i/(i+1);
    }
    cout<<suma;
    return 0;
}