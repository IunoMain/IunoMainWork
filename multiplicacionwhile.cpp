#include <iostream>
using namespace std;
char operacion, de = 'Y';
float num1, num2, num3, num4, num5, resultado;

int main () {

    while (de == 'Y') {

        cout << "Ingrese una letra: ";
        cin >> operacion;
        
        cout << "Ingrese el primer valor: ";
        cin >> num1;

        cout << "Ingrese el segundo valor: ";
        cin >> num2;
        
        cout << "Ingrese el tercero valor: ";
        cin >> num3;

        cout << "Ingrese el cuarto valor: ";
        cin >> num4;

        cout << "Ingrese el quinto valor: ";
        cin >> num5;

        switch (operacion) {
        case 'M':
        case 'm':
                resultado = num1 * num2 * num3 * num4 * num5;
                cout << "Resultado: " << num1 << " * " << num2 << " * " << num3 << " * " << num4 << " * " << num5 << " = " << resultado << endl;
                break;
    
        default:
                cout << "Operacion incorrecta." << endl;
                break;
        }

        cout << "Desea calcular nuevamente?\n" << "Si = Y\n" << "No = N\n";
        cin >> de;
    }
    
    return 0;
}