#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int cantidad;
string nombre, apellido;

int main () {
    
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    cout << "¿Cuántas personas desea registrar? ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << "\n--- Registro #" << i << " ---" << endl;
        
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        
        cout << "Ingrese el apellido: ";
        cin >> apellido;

        cout << "Nombre completo registrado: " << nombre << " " << apellido << endl;
    }

    return 0;
}