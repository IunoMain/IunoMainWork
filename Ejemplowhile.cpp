#include <iostream>
#include <windows.h>
using namespace std;
char opc, seguir;
float n1, n2, suma, resta, multiplicacion, division, resultado;

int main () {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    do {
        
        cout << "Bienvenidos a calculadora basica\n"
             << "Para suma --> Ingrese a\n"
             << "Para resta --> Ingrese b\n"
             << "Para multiplicacion --> Ingrese c\n"
             << "Para division --> Ingrese d\n";

        cout << "Ingrese una opcion entre a y d: ";
        cin >> opc;

        cout << "Ingrese el primer numero: ";
        cin >> n1;

        cout << "Ingrese el segundo numero: ";
        cin >> n2;

        switch (opc) {

        case 'a':
        case 'A':

            suma = n1 + n2;
            cout << "El resultado de la suma es: " << suma <<endl;
            break;

        case 'b':
        case 'B':

            resta = n1 - n2;
            cout << "El resultado de la resta es: " << resta <<endl;
            break;

        case 'c':
        case 'C':

            multiplicacion = n1 * n2;
            cout << "El resultado de la multiplicacion es: " << multiplicacion <<endl;
            break;

        case 'd':
        case 'D':

            if (n2 == 0.0f) {
                
                cout << "no se puede dividir entre 0" << endl;

            }

            else {
                
                division = n1 / n2;
                cout << "El resultado de la division es: " << division <<endl;

            }

            break;

        default:

            cout << "La letra ingresada no es valida: ";

        }

        cout << "Quiere seguir usando la calculadora\n"
             << "Y = si\n"
             << "N = no\n";
        cin >> seguir;

    } while (seguir == 'Y' || seguir == 'y');

    return 0;
}