#include <iostream>
using namespace std;
int n=0;

int main () {

    cout << "Ingresar un numero entre 1 y 12: ";
    cin >> n;

    switch (n) {
    case 1: 
        cout << "Enero\n";
        break;
    case 2: 
        cout << "Febrero\n";
        break;
    case 3: 
        cout << "Marzo\n";
        break;
    case 4: 
        cout << "Abril\n";
        break;
    case 5: 
        cout << "Mayo\n";
        break;
    case 6: 
        cout << "Junio\n";
        break;
    case 7: 
        cout << "Julio\n";
        break;
    case 8: 
        cout << "Agosto\n";
        break;
    case 9: 
        cout << "Septiembre\n";
        break;
    case 10: 
        cout << "Octubre\n";
        break;
    case 11: 
        cout << "Noviembre\n";
        break;
    case 12: 
        cout << "Diciembre\n";
        break;

    default:
        cout << "El numero ingresado es invalido";
    }
    
    return 0;
}