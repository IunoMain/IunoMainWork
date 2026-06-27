#include <iostream>
using namespace std;
int n=0;

int main () {

    cout << "Ingresar un numero entre 1 y 7: ";
    cin >> n;

    switch (n) {
    case 1: 
        cout << "Lunes\n";
        break;
    case 2: 
        cout << "Martes\n";
        break;
    case 3: 
        cout << "Miercoles\n";
        break;
    case 4: 
        cout << "Jueves\n";
        break;
    case 5: 
        cout << "Viernes\n";
        break;
    case 6: 
        cout << "Sabado\n";
        break;
    case 7: 
        cout << "Domingo\n";
        break;

    default:
        cout << "El numero ingresado es invalido: ";
    }
    cout << "Fin del programa: ";

    return 0;
}