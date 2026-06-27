#include <iostream>
using namespace std;
int n=0;

int main () {

    cout << "Ingresar un numero entre 1 y 12: ";
    cin >> n;

    switch (n) {
    case 1: 
        cout << "Enero tiene 31 dias\n";
        break;
    case 2: 
        cout << "Febrero tiene 28 dias\n";
        break;
    case 3: 
        cout << "Marzo tiene 31 dias\n";
        break;
    case 4: 
        cout << "Abril tiene 30 dias\n";
        break;
    case 5: 
        cout << "Mayo tiene 31 dias\n";
        break;
    case 6: 
        cout << "Junio tiene 30 dias\n";
        break;
    case 7: 
        cout << "Julio tiene 31 dias\n";
        break;
    case 8: 
        cout << "Agosto tiene 31 dias\n";
        break;
    case 9: 
        cout << "Septiembre tiene 30 dias\n";
        break;
    case 10: 
        cout << "Octubre tiene 31 dias\n";
        break;
    case 11: 
        cout << "Noviembre tiene 30 dias\n";
        break;
    case 12: 
        cout << "Diciembre tiene 31 dias\n";
        break;

    default:
        cout << "El numero ingresado es invalido";
    }
    
    return 0;
}