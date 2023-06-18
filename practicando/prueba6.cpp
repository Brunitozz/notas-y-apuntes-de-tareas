#include <iostream>
using namespace std;
int main(){
    float a=52, b=85;
    const float ia=0.06,ib=0.04;
    float time=0;
    do{
        time=time + 1;
        a=a+a*ia*time;
        b=b+b*ib*time;
    } while (b>a);
    cout<<"El año en que A supera a B es: "<<time;
    return 0;
}