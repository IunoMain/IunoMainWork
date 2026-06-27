#include <iostream>
using namespace std;
int ano;

int main () {

    cout << "Ingrese un año: ";
    cin >> ano;

    if (ano % 4 == 0) {
        cout << "El año " << ano << " es bisiesto." << endl;
    } 
    
    else {
        cout << "El año " << ano << " no es bisiesto." << endl;
    }

    return 0;
}