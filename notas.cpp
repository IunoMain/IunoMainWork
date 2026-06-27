#include <iostream>
using namespace std;
float n1, n2, n3, n4, n5, prom;

int main () {
    
    cout << "Ingrese su nota 1: ";
    cin >> n1;

    cout << "Ingrese su nota 2: ";
    cin >> n2;

    cout << "Ingrese su nota 3: ";
    cin >> n3;

    cout << "Ingrese su nota 4: ";
    cin >> n4;

    cout << "Ingrese su nota 5: ";
    cin >> n5;

    prom = (n1 + n2 + n3 + n4 + n5) / 5;
    
    if (prom >= 6) {
        cout << "Aprobado, tu promedio es: " << prom;
    }

    else {
        cout << "Reprobado, tu promedio es: " << prom;
    }
    
    return 0;
}