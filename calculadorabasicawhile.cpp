#include <iostream>
using namespace std;
char operacion, de = 'Y';
float num1, num2, resultado;

int main () {

    while (de == 'Y') {
        
        cout << "Bienvenidos/as a mi calculadora Basica\n" << "Para sumar ingrese S\n" << "Para restar ingrese R\n" << "Para multiplicar ingrese M\n" << "Para dividir ingrese D\n";

        cout << "Ingrese una letra: ";
        cin >> operacion;

        cout << "Ingrese el primer numero: ";
        cin >> num1;

        cout << "Ingrese el segundo numero: ";
        cin >> num2;

        switch (operacion) {
        case 'S':
        case 's':
                resultado = num1 + num2;
                cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << endl;
                break;
    
        case 'R':
        case 'r':
                resultado = num1 - num2;
                cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado << endl;
                break;
    
        case 'M':
        case 'm':
                resultado = num1 * num2;
                cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << endl;
                break;
    
        case 'D':
        case 'd':
                if (num2 !=0) {
                resultado = num1 / num2;
                cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado << endl;
            } 
        
        else {
            cout << "Error: No puede dividirse entre cero." << endl;
        }
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