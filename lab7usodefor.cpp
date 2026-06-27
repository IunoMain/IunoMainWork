#include <iostream>
using namespace std;
int suma, num;

int main () {

    cout << "Ingrese un numero: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {

        if (i%2==1) {
            
            cout << i << endl;
            suma = suma + i;
        }
        
    }

    cout << "La suma de los impares es: " << suma;

    return 0;
}