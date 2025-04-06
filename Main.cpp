// main.cpp
#include "Ejercicio1.cpp"
#include "Ejercicio4.cpp"
#include "Ejercicio6.cpp"
//#include "Ejercicio7.cpp"
#include <iostream>

// Declaraci�n de la funci�n del archivo operaciones.cpp
void operacionesBasicas();
void mostrarTablaMultiplicar();
string convertirANumeroEnLetras(int num);

string convertirUnidad(int num);
string convertirDecenas(int num);
string convertirCentenas(int num);
string convertirParteEntera(int num);
string convertirParteDecimal(int num);
string convertirANumeroConDecimalEnLetras(float num);
int main() {
    int opcion;
	int numero;
    // Mostrar el men�
    cout << "Seleccione el programa que desea ejecutar:" << endl;
    cout << "1. Operaciones Basicas (Suma, Resta, Multiplicacion, Division)" << endl;
    cout << "6. Convertir un numero a palabras (entre 0 y 999)" << endl;
    //cout << "7. Convertir un numero con decimales a palabras" << endl;
    cout << "8. Mostrar la tabla de multiplicar de un numero" << endl;
    cout << "Ingrese el numero correspondiente al programa: ";
    cin >> opcion;

    // Ejecutar el programa correspondiente seg�n la opci�n seleccionada
    switch (opcion) {
        case 1:
            operacionesBasicas();  // Llamar a la funci�n de operaciones b�sicas
            break;
        
            case 6:
            // Solicitar al usuario un n�mero
            cout << "Ingresa un numero entre 0 y 999: ";
            cin >> numero;

            // Validar el rango
            if (numero < 0 || numero > 999) {
                cout << "Numero fuera de rango, por favor ingresa un numero entre 0 y 999." << endl;
            } else {
                // Convertir y mostrar el n�mero en letras
                cout << "El numero " << numero << " en letras es: " << convertirANumeroEnLetras(numero) << endl;
            }
            break;
            /*
            case 7:
            ccout << "Ingresa un numero con decimales (por ejemplo, 654.68): ";
            cin >> numero;
            cout << "El numero " << numero << " en letras es: " << convertirANumeroConDecimalEnLetras(numero) << endl;
            */
            case 8:
             mostrarTablaMultiplicar(); 
       	 break;
       	 
    	default:
      		  cout << "Opcion no valida." << endl;
        	break;
}
        
    

    return 0;
}

