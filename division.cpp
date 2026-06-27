#include <iostream>
using namespace std;
float n1, n2, division;

int main () {

    cout << "Ingrese el valor del primer producto: ";
    cin >> n1;
    
    cout << "Ingrese el valor del segundo producto: ";
    cin >> n2;

    if (n2==0) {
        cout << "No puede dividirse entre 0" << endl;
    }

    else {
        division = n1 / n2;

        cout << "El resultado de la division es: " << division;
    }

    return 0;
} 