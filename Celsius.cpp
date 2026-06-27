#include <iostream>
using namespace std;
char opc;
float n1, resultado;

int main () {

    cout << "Conversor de Celsius a Fahrenheit, ingrese S\n";
    cout << "Calcular Metros a Centimetros, ingrese R\n";
    cout << "Calcular Dolares a Euros, ingrese M\n";
    cout << "Ingresar una letra: ";
    cin >> opc;

    switch (opc) {
    case 'S':
    case 's':
        cout << "Ingrese el valor de Celsius\n: ";
        cin >> n1;
        resultado = (n1 * 9 / 5) + 32;

        cout << "Resultado de conversion a Fahrenheit: " << resultado;
        break;
    
    case 'R':
    case 'r':
        cout << "Ingrese el valor de Metros\n: ";
        cin >> n1;
        resultado = n1 * 100;

        cout << "Resultado de conversion a Centimetros: " << resultado;
        break;

    case 'M':
    case 'm':
        cout << "Ingrese el valor en Dolares\n: ";
        cin >> n1;
        resultado = (n1 * 0.92);

        cout << "Resultado de conversion a Euros: " << resultado;
        break;

    default:
        cout << "Variable ingresada es incorrecta" << endl;
        break;
    }

    return 0;
}