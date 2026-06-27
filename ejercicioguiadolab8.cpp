#include <iostream>
using namespace std;
int numero, suma =0;

int main () {

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero !=0) {
	suma += numero;

	cout << "Ingrese un numero: ";
	cin >> numero;

    }

    cout << "La suma total es: " << suma << endl;

    return 0;
}