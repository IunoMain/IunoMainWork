#include <iostream>
#include <windows.h>
#include <string> 
using namespace std;
string nombreCompleto;

int main () {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    cout << "Ingrese su nombre completo: ";
    getline (cin, nombreCompleto);

    cout << "El nombre registrado es: ";

    for (int i = 0; i < nombreCompleto.length(); i++) {

        cout << nombreCompleto [i];

    }

    return 0;
}