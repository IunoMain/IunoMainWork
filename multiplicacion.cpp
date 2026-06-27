#include <iostream>
using namespace std;
float n1, n2, multiplicacion;

int main () {

    cout << "Ingrese el valor del primer producto: ";
    cin >> n1;

    cout << "Ingrese el valor del segundo producto: ";
    cin >> n2;

    multiplicacion = n1 * n2;

    cout << "El resultado de la multiplicacion es: " << multiplicacion;
    
    return 0;
}