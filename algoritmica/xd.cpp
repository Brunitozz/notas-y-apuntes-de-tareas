#include<iostream>
using namespace std;

bool fibonacci(int num);
bool primo(int num);
void generarPrimosFibonacci(int N, int m);
void consistenciar(int &N, int &M);

int main() {
    int N, m;
    consistenciar(N,m);
    generarPrimosFibonacci(N, m);
    return 0;
}

void consistenciar(int &N, int &m){
	do {
        cout << "Ingrese N: ";
        cin >> N;
        cout << "Ingrese M: ";
        cin >> m;
        if (m < 0 || N < m || N < 0)
            cout << "Error. N, m deben ser mayores a 0 y N mayor a m" << endl;
    } while (m < 0 || N < m || N < 0);
}

bool primo(int num) {
    int cont=0;
    for(int i=1; i<=num;i++){
        if(num%i==0){
            cont++;
        }
    }
    if(cont==2){
        return true;
    }else{
        return false;
    }
}

bool fibonacci(int num) {
    int a = 0;
    int b = 1;

    while (b < num) {
        int temp = b;
        b = a + b;
        a = temp;
    }

    return (b == num);
}

void generarPrimosFibonacci(int N, int m) {
    int primos[m];
    int contarPrimos = 0;
    int num = 2;

    while (contarPrimos < m) {
        if (primo(num)) {
            primos[contarPrimos] = num;
            contarPrimos++;
        }
        num++;
    }

    cout << "Los numeros primos son: ";
    for (int i = 0; i < m; i++) {
        cout << primos[i] << " ";
    }
    cout << endl;

    int contarFibonacci = 0;
    cout << "Numeros primos Fibonacci: ";
    for (int i = 0; i < m; i++) {
        if (fibonacci(primos[i])) {
            cout << primos[i] << " ";
            contarFibonacci++;
        }
    }
    cout << endl;

    cout << "Cantidad de números primos Fibonacci: " << contarFibonacci << endl;
}