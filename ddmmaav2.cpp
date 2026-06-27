#include <iostream>
#include <windows.h>
using namespace std;
int dd, mm, aa;

int main () {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // Entrada de datos
    cout << "Ingrese día (dd): "; 
    cin >> dd;

    cout << "Ingrese mes (mm): "; 
    cin >> mm;

    cout << "Ingrese año (aa): "; 
    cin >> aa;

    // --- Inicio de la estructura de decisión del diagrama ---

    // Primer rombo: ¿Es 31 de diciembre?
    if (mm == 12 && dd == 31) {
        dd = 1;
        mm = 1;
        aa = aa + 1;
    } 
    // Segundo rombo: ¿Es fin de mes de 31 días? (excepto diciembre)
    else if (dd == 31 && (mm == 1, mm == 3, mm == 5, mm == 7, mm == 8, mm == 10)) {
        dd = 1;
        mm = mm + 1;
    }
    // Tercer rombo: ¿Es fin de mes de 30 días?
    else if (dd == 30 && (mm == 4, mm == 6, mm == 9, mm == 11)) {
        dd = 1;
        mm = mm + 1;
    }
    // Cuarto rombo: ¿Es 28 de febrero?
    else if (dd == 28 && mm == 2) {
        dd = 1;
        mm = mm + 1;
    }
    // Camino "Falso" final: Solo sumar un día
    else {
        dd = dd + 1;
    }

    // --- Fin de la estructura de decisión ---

    // Salida de resultados
    cout << "\nDía siguiente: " << dd << "/" << mm << "/" << aa << endl;

    return 0;
}