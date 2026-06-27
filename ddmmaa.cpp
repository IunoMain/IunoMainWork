#include <iostream>
#include <windows.h>
int dd, mm, aa, díasDelMes;
using namespace std;

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // Entrada de datos
    cout << "Ingrese día (dd): "; 
    cin >> dd;

    cout << "Ingrese mes (mm): "; 
    cin >> mm;

    cout << "Ingrese año (aa): "; 
    cin >> aa;

    // 1. Determinar el límite de días según el mes
    if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
        díasDelMes = 30;
    } 
    else if (mm == 2) {
        // Lógica de año bisiesto
        if ((aa % 4 == 0 && aa % 100 != 0) || (aa % 400 == 0)) {
            díasDelMes = 29;
        } else {
            díasDelMes = 28;
        }
    } 
    else {
        díasDelMes = 31;
    }

    // 2. Calcular el día siguiente
    if (dd < díasDelMes) {
        dd++; // Solo sumamos un día
    } 
    else {
        // Es el último día del mes, reiniciamos el día a 1
        dd = 1;
        if (mm < 12) {
            mm++; // Pasamos al siguiente mes
        } else {
            // Es 31 de diciembre, reiniciamos mes y sumamos año
            mm = 1;
            aa++;
        }
    }

    // Salida de resultados
    cout << "\nEl día siguiente es: " << dd << "/" << mm << "/" << aa << endl;

    return 0;
}