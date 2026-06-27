#include <iostream>
using namespace std;
int n=0;

int main () {

    cout << "Ingrese un numero: ";
    cin >> n;
    
    if (n%2==0) {
        cout << "El numero ingresado es par";
    }
    
    else {
        cout << "El numero ingresado es impar";
    }
    
    return 0;
}