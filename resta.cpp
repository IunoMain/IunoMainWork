#include <iostream>
using namespace std;
float n1, n2, resta;

int main() {

    cout << "Ingrese el valor del primer producto: ";
    cin >> n1;

    cout << "Ingrese el valor del segundo producto: ";
    cin >> n2;

    resta = n1 - n2;

    cout << "El resultado de la resta es: " << resta;
    
    return 0;
}