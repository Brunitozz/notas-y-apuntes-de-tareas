/*Hacer un programa en C++ que utilice un arreglo de tamaño N en donde se
llene con los M primero numeros primos y luego determinar cuantos de esos primos son números
fibonaci. Ejemplo: N = 100, m = 10, los números primos que se muestran son: 2, 3, 5, 7, 11, 13, 17, 19,
23, 29. Numeros primos Fibonacci: 2, 3, 5, 13; cantidad 4. Los valores de N y m se ingresan por teclado.*/

#include <iostream>
#include <math.h>
using namespace std;

bool num_Fibonacci(int num);
bool escuadradoperfecto(int x);
bool num_primo(int num);
void ingreso_validacion_datos(int &N, int &m);
void mostrar_Numeros(int N, int m);

int main(){
    int N, m;
    ingreso_validacion_datos(N, m);
    mostrar_Numeros(N, m);
    return 0;
}

void ingreso_validacion_datos(int &N, int &m){
    cout << "Ingrese el tamaño de N: "; 
    do{
        cin >> N;
        if (N <= 0){
            cout << "Ingrese un número positivo mayor o igual que 0." << endl;
        }
    } while(N <= 0);
    
    cout << "Ingrese el número m: ";
    do{
        cin >> m;
        if(m <= 0){
            cout << "Ingrese un número positivo mayor que 0." << endl;
        } else if(m > N){
            cout << "El número no debe ser mayor que el tamaño." << endl;
        }
    } while(m <= 0 || m > N);
}

bool num_primo(int num){
    int contador = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            contador++;
        }
    }
    return (contador == 2);
}

bool escuadradoperfecto(int x){
    int s = sqrt(x);
    return (x == s * s);
}

bool num_Fibonacci(int num){
    return (escuadradoperfecto(5 * num * num + 4) || escuadradoperfecto(5 * num * num - 4));
}

void mostrar_Numeros(int N, int m){
    int tamano[N], numprimos[m], numfibonaccis[m];
    int primos = 0, fibonaccis = 0, i = 0;
    do{
        i++;
        if(num_primo(i)){
            numprimos[primos] = i;
            primos++;
            if(num_Fibonacci(i)){
                numfibonaccis[fibonaccis] = i;
                fibonaccis++;
            }
        }
    } while(primos < m);
    
    // Mostrando primos
    cout << "Los números primos que se muestran son: ";
    for(int j = 0; j < m; j++){
        cout << numprimos[j] << "\t";        
    }
    
    // Mostrando finbonaccis
    cout << endl;
    cout << "Los números Fibonacci son los siguientes: ";
    for(int j = 0; j < fibonaccis; j++){
        cout << numfibonaccis[j] << "\t";
    }
}
