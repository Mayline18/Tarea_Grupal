/*#include <iostream>
using namespace std;

main() {
    double num1, num2;

    // Solicitar al usuario que ingrese dos n�meros
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    // Suma
    cout << "La suma de " <<num1<< " y " <<num2<< " es: " <<num1 + num2 << endl;

    // Resta
    cout << "La resta de " <<num1<< " y " <<num2<< " es: " <<num1 - num2 << endl;

    // Multiplicaci�n
    cout << "La multiplicacion de " <<num1<< " y " <<num2 << " es: " <<num1 * num2 << endl;

    // Divisi�n (Verificar que el segundo n�mero no sea cero)
    if (num2 != 0) {
        cout << "La division de " <<num1<< " entre " <<num2 << " es: " <<num1 / num2 << endl;
    } else {
        cout << "Error: No se puede dividir entre cero." <<endl;
    }

    return 0; 
}

*/

// operaciones.cpp
#include <iostream>
using namespace std;

// Funci�n para realizar operaciones matem�ticas
void operacionesBasicas() {
    double num1, num2;

    // Solicitar al usuario que ingrese dos n�meros
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    // Suma
    cout << "La suma de " << num1 << " y " << num2 << " es: " << num1 + num2 << endl;

    // Resta
    cout << "La resta de " << num1 << " y " << num2 << " es: " << num1 - num2 << endl;

    // Multiplicaci�n
    cout << "La multiplicacion de " << num1 << " y " << num2 << " es: " << num1 * num2 << endl;

    // Divisi�n (Verificar que el segundo n�mero no sea cero)
    if (num2 != 0) {
        cout << "La division de " << num1 << " entre " << num2 << " es: " << num1 / num2 << endl;
    } else {
        cout << "Error: No se puede dividir entre cero." << endl;
    }
}

