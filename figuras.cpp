#include <iostream>
using namespace std;
int opc;
double base, altura, lado, area;

int main () {

    cout << "Menu de Areas de Figuras: ";
    cout << "1. Area de Cuadrado" << endl;
    cout << "2. Area de Rectangulo" << endl;
    cout << "3. Area de Triangulo" << endl;
    cout << "Escoge una opción (1-3): ";
    cin >> opc;

    switch (opc) {
    case '1':
        cout << "Ingrese el valor del lado: ";
        cin >> lado;

        area = lado * lado;

        cout << "El area del Cuadrado es: " << area << endl;
        break;
    
    case '2':
        cout << "Ingrese su base: ";
        cin >> base;

        cout << "Ingrese su altura: ";
        cin >> altura;

        area = base * altura;

        cout << "El area del Rectangulo es: " << area << endl;
        break;
    
    case '3':
        cout << "Ingrese su base: ";
        cin >> base;

        cout << "Ingrese su altura: ";
        cin >> altura;

        area = (base * altura) / 2;

        cout << "El area del Triangulo es: " << area << endl;
        break;
    
    default:
        cout << "Error" << endl;
        break;

    }
    
    return 0;
}
    