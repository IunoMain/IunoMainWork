#include <iostream>
using namespace std;
int n=0;

int main () {

    cout << "Ingrese un numero entero y negativo: ";
    cin >> n;

    if (n<0) {
        cout << "El numero ingresado es negativo";
    }
    else {
        cout << "El numero ingresado es positivo";
    }

    return 0;
}