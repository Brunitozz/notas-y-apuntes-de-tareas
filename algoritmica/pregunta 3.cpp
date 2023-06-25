#include <iostream>
using namespace std;
void Validacion( int &numero);
int CalcularCambio(int numero, const int monedas[], int tipoMoneda[]);
void ImprimirMonedas(const int tipoMoneda[], const int monedas[]);
int main() {
    const int monedas[4] = {10, 5, 2, 1};
    int tipoMoneda[4];
    int numero, sumaCant_Monedas;
    Validacion(numero);
    sumaCant_Monedas = CalcularCambio(numero, monedas, tipoMoneda);
    cout << "El minimo de monedas es: " << sumaCant_Monedas << endl;
    ImprimirMonedas(tipoMoneda, monedas);
    return 0;
}
// Función para calcular la cantidad de monedas y el total
int CalcularCambio(int numero, const int monedas[], int tipoMoneda[]) {
    int sumaCant_Monedas = 0;

    for (int i = 0; i < 4; i++) {
        tipoMoneda[i] = numero / monedas[i];
        numero = numero % monedas[i];
        sumaCant_Monedas += tipoMoneda[i];
    }
    return sumaCant_Monedas;
}
// Función para imprimir la cantidad de monedas de cada valor
void ImprimirMonedas(const int tipoMoneda[], const int monedas[]) {
    for (int j = 0; j < 4; j++) {
        if (tipoMoneda[j] != 0) {
            cout << tipoMoneda[j] << " moneda(s) de " << monedas[j] << endl;
        }
    }
}
//Procedimiento para verificar datos
void Validacion( int &numero){
    cout << "Cambio a devolver: ";
	do{
		cin >> numero;
    	if (numero <= 0) {
        	cout << "El numero debe ser mayor a cero." << endl;
    	}
	}while(numero<=0);
}