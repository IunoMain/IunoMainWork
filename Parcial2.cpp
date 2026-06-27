#include <iostream>
#include <windows.h>
using namespace std;
int opc, seguir;
char nombre;
float boletos, total;

int main () {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

        cout << "Nombre Completo del Empleado: ";
        cin >> nombre;

        cout << "Menú de Películas: " << endl;
        cout << "1. Película Acción Extrema" << endl;
        cout << "2. Película Comedia Total" << endl;
        cout << "3. Película Terror en la Noche" << endl;
        cout << "4. Película Aventuras Espaciales" << endl;
        cout << "5. Película Animación Kids" << endl;
        cout << "Escoge una opción (1-5): " << endl;
        cin >> opc;

        switch (opc) {
        case 1: 
        cout << "Película Acción Extrema, ingrese la cantidad de boletos que desea comprar";
        cin >> boletos;
        total = 4.50 * boletos;
        break;

        case 2: 
        cout << "Película Comedia Total, ingrese la cantidad de boletos que desea comprar";
        cin >> boletos;
        total = 4.00 * boletos;
        break;

        case 3:
        cout << "Película Terror en la Noche, ingrese la cantidad de boletos que desea comprar";
        cin >> boletos;
        total = 4.20 * boletos;
        break;

        case 4:
        cout << "Película Aventuras Espaciales, ingrese la cantidad de boletos que desea comprar";
        cin >> boletos;
        total = 5.00 * boletos;
        break;

        case 5:
        cout << "Película Animación Kids, ingrese la cantidad de boletos que desea comprar";
        cin >> boletos;
        total = 3.50 * boletos;
        break;
        
        default:
                cout << "Error" << endl;
                break;

        }

    return 0;
}