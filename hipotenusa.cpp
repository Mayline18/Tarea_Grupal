//Programa para calcular la hipotenusa

/*
#include <iostream>
using namespace std;
#include <cmath> 

int main(){
	
	double a; double b; double c;
	
	cout<<"Ingrese el lado A: ";
	cin>> a; 
	
	cout<<"Ingrese el lado B: ";
	cin>> b; 
	
	//Elevar a una potencia de 2 a los lados por medio de la funcion pow.
	a = pow(a, 2);  
	b = pow(b, 2); 
	
	//Calculo de hipotenusa por medio de raiz cuadrada (sqrt)
	c = sqrt (a+b);
	
	cout<<"El valor de la hipotenusa es: "<<c<<endl;
	
	return 0;
} */

//Modificando para menu:
#include <iostream>
#include <cmath>
using namespace std;

// Definici�n de la funci�n para calcular la hipotenusa
void calcularHipotenusa() {
    double a, b, c;
    
    cout << "Ingrese el lado A: ";
    cin >> a; 
    
    cout << "Ingrese el lado B: ";
    cin >> b; 
    
    // Elevar a una potencia de 2 a los lados por medio de la funci�n pow.
    a = pow(a, 2);  
    b = pow(b, 2); 
    
    // C�lculo de la hipotenusa por medio de ra�z cuadrada (sqrt)
    c = sqrt(a + b);
    
    cout << "El valor de la hipotenusa es: " << c << endl;
}

