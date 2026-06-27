#include <iostream>
using namespace std;
char n;

int main () {

    cout << "Ingresar una letra: ";
    cin >> n;

    switch (n) {
    case 'R':
    case 'r': 
        cout << "Rojo\n";
        break;
    case 'Y':
    case 'y': 
        cout << "Amarillo\n";
        break;
    case 'B':
    case 'b': 
        cout << "Azul\n";
        break;
    case 'W':
    case 'w': 
        cout << "Blanco\n";
        break;
    case 'K':
    case 'k': 
        cout << "Negro\n";
        break;
    case 'C':
    case 'c': 
        cout << "Cian\n";
        break;
    case 'G':
    case 'g': 
        cout << "Verde\n";
        break;

    default:
        cout << "La letra ingresada es incorrecta: ";
    }
    cout << "Fin del programa: ";

    return 0;
}