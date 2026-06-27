#include <iostream>
using namespace std;
char n=0;

int main () {

    cout << "Ingresar una letra entre a y g: ";
    cin >> n;

    switch (n) {
    case 'a': 
        cout << "Lunes\n";
        break;
    case 'b': 
        cout << "Martes\n";
        break;
    case 'c': 
        cout << "Miercoles\n";
        break;
    case 'd': 
        cout << "Jueves\n";
        break;
    case 'e': 
        cout << "Viernes\n";
        break;
    case 'f': 
        cout << "Sabado\n";
        break;
    case 'g': 
        cout << "Domingo\n";
        break;

    default:
        cout << "La letra ingresada es invalido: ";
    }
    cout << "Fin del programa: ";

    return 0;
}
