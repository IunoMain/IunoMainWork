#include <iostream>
using namespace std;
float nota, prom, suma=0;

int main () {

    for (int i = 1; i <= 6; i++) {
        cout << "Ingrese su nota  "<< i <<" : ";
        cin >> nota;
        suma = suma + nota; 
    }

    prom = suma / 5;
    
    if (prom >= 6) {
        cout << "Aprobado, tu promedio es: " << prom;
    }

    else {
        cout << "Reprobado, tu promedio es: " << prom;
    }
    
    return 0;
}