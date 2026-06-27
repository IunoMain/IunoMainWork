#include <iostream>
using namespace std;
float nota, prom, suma=0;
string nombre;

int main () {

    cout << "Ingrese su nombre completo: ";
    getline(cin, nombre);

    for (int i = 1; i <= 5; i++) {
    
        cout << "Ingrese su nota "<< i <<": ";
        cin >> nota;
        suma = suma + nota;

    }
    
    prom = suma / 5;

    if (prom >= 6) {

        cout << nombre << " Aprobado, tu promedio es: " << prom;
    
    }

    else {

        cout << nombre << " Reprobado, tu promedio es: " << prom;
    }
    
    return 0;
}