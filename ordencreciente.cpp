#include <iostream>
using namespace std;
float n1, n2;

int main () {
    
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    if (n1 < n2) {
        cout << "Los numeros estan en orden creciente." << endl;
    } 
    
    else if (n1 > n2) { 
        cout << "Los numeros NO estan en orden creciente (estan en orden decreciente)." << endl;
    } 
    
    else {
        cout << "Los numeros son iguales, por lo tanto no son estrictamente crecientes." << endl;
    }

    return 0;
}