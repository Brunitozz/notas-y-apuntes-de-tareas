#include <iostream>
using namespace std;
int sumCuadrados_3_Cifras() {
    int sumNumeros = 0;
    for (int num = 100; num < 1000; num++) {
        int digito1 = num / 100;
        int digito2 = (num / 10) % 10;
        int digito3 = num % 10;

        int sumaCuadrados = digito1 * digito1 + digito2 * digito2 + digito3 * digito3;
        int cociente = num / 3;

        if (sumaCuadrados == cociente) {
            sumNumeros += num;
        }
    }
    return sumNumeros;
}

int main() {
    int resultado = sumCuadra_dos3_Cifras();
    cout << resultado << endl;

    return 0;
}