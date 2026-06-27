#include <iostream>
using namespace std;
float angulo;

int main () {

    cout << "Ingrese la medida del angulo en grados: ";
    cin >> angulo;

    if (angulo == 90) {
        cout << "El angulo es un angulo recto" << endl;
    } 
    
    else {
        cout << "El angulo no es un angulo recto" << endl;
    }

    return 0;
}