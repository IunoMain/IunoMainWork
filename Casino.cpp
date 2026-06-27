#include <iostream>
#include <cstdlib> 
int opcion;
char de = 'Y';
float saldo = 666;

using namespace std;

int main() {
    
    system("chcp 65001 > nul");

    while (de == 'Y') {
        
        cout << "\nSaldo Actual: $" << saldo << endl;
        cout << "╔══════════════════════════════╗" << endl;
        cout << "║        CASINO - MENU         ║" << endl;
        cout << "╠══════════════════════════════╣" << endl;
        cout << "║    1. Tragamonedas           ║" << endl;
        cout << "║    2. Ruleta                 ║" << endl;
        cout << "║    3. Blackjack              ║" << endl;
        cout << "║    0. Salir                  ║" << endl;
        cout << "╚══════════════════════════════╝" << endl;
        
        cout << "\nElige una opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1:
                cout << "\n--- BIENVENIDO A TRAGAMONEDAS ---\n";
                break;

            case 2:
                cout << "\n--- BIENVENIDO A RULETA ---\n";
                break;

            case 3:
                cout << "\n--- BIENVENIDO A BLACKJACK ---\n";
                break;

            case 0:
                cout << "\nRetirando tus fondos... Saliendo del casino.\n";
                saldo = 0; 
                break;

            default:
                cout << "\nOpcion no valida. Por favor, ingresa un numero del 0 al 3.\n";
                break;
        }

        cout << "Desea jugar nuevamente?\n" << "Si = Y\n" << "No = N\n";

    }
    
    return 0;
}