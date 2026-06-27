#include <iostream>
using namespace std;
char operacion;
float num1, num2, resultado;

int main () {

    cout << "Bienvenidos/a: " << endl;

    switch (operacion) {
    case 1:
        cout << "Ingrese el primer valor: ";
        cin >> num1;
        cout << "Ingrese el segundo valor: ";
        cin >> num2;
        resultado = num1 + num2;
        cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << endl;
        break;
    
    case 2:
        cout << "Ingrese el primer valor: ";
        cin >> num1;
        cout << "Ingrese el segundo valor: ";
        cin >> num2;
        resultado = num1 / num2;
        cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado << endl;
        break;

    case 3:
        cout << "Ingrese el primer valor: ";
        cin >> num1;
        cout << "Ingrese el segundo valor: ";
        cin >> num2;
        resultado = num1 * num2;
        cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << endl;
        break;

    default:
        cout << "Error" << endl;
        break;
    }

    return 0;
}