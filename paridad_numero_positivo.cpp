#include <iostream>
using namespace std;

// Declaraci�n de la funci�n
void analizarNumeros(int numero);

/* Se elimina para k funcione el menu
int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    // Llamada a la funci�n
    analizarNumeros(numero);  // Se llama a la funci�n 'analizarNumeros' y pasa el n�mero ingresado como argumento

    return 0;
} */

// Definici�n de la funci�n
void analizarNumeros(int numero) {
    for (int a = 1; a <= numero; a++) {
        if (a % 2 == 0) {
            cout << a << " es un numero par" << endl;
        } else {
            cout << a << " es un numero impar" << endl;
        }
    }
}
