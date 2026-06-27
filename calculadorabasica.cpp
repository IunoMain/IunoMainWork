#include <iostream>
using namespace std;
char operacion;
float num1, num2, resultado;

int main () {

    cout << "Bienvenidos/as a mi calculadora Basica: " << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (operacion) {
    case '+':
        resultado = num1 + num2;
        cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << endl;
        break;
    
    case '-':
        resultado = num1 - num2;
        cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado << endl;
        break;
    
    case '*':
        resultado = num1 * num2;
        cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << endl;
        break;
    
    case '/':
        
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

    return 0;
}