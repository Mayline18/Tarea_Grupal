// convertirNumero.cpp
#include <iostream>
#include <string>
using namespace std;

// Funci�n para convertir los n�meros del 1 al 19
string convertirUnidad(int num) {
    switch (num) {
        case 1: return "uno";
        case 2: return "dos";
        case 3: return "tres";
        case 4: return "cuatro";
        case 5: return "cinco";
        case 6: return "seis";
        case 7: return "siete";
        case 8: return "ocho";
        case 9: return "nueve";
        case 10: return "diez";
        case 11: return "once";
        case 12: return "doce";
        case 13: return "trece";
        case 14: return "catorce";
        case 15: return "quince";
        case 16: return "diecis�is";
        case 17: return "diecisiete";
        case 18: return "dieciocho";
        case 19: return "diecinueve";
        default: return "";
    }
}

// Funci�n para convertir decenas
string convertirDecenas(int num) {
    switch (num) {
        case 2: return "veinte";
        case 3: return "treinta";
        case 4: return "cuarenta";
        case 5: return "cincuenta";
        case 6: return "sesenta";
        case 7: return "setenta";
        case 8: return "ochenta";
        case 9: return "noventa";
        default: return "";
    }
}

// Funci�n para convertir centenas
string convertirCentenas(int num) {
    switch (num) {
        case 1: return "cien";
        case 2: return "doscientos";
        case 3: return "trescientos";
        case 4: return "cuatrocientos";
        case 5: return "quinientos";
        case 6: return "seiscientos";
        case 7: return "setecientos";
        case 8: return "ochocientos";
        case 9: return "novecientos";
        default: return "";
    }
}

// Funci�n principal para convertir n�meros a letras
string convertirANumeroEnLetras(int num) {
    if (num == 0) return "cero";
    if (num < 20) return convertirUnidad(num);

    string resultado = "";

    // Verificar centenas
    if (num >= 100) {
        int centenas = num / 100;
        resultado += convertirCentenas(centenas) + " ";
        num %= 100;
    }

    // Verificar decenas
    if (num >= 20) {
        int decenas = num / 10;
        resultado += convertirDecenas(decenas) + " ";
        num %= 10;
    }

    // Verificar unidades
    if (num > 0) {
        resultado += convertirUnidad(num);
    }

    // Retirar el espacio extra al final
    return resultado;
}

