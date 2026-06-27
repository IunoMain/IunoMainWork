#include <iostream>
#include <windows.h>
using namespace std;
char segi;
string contraseña, usuario, usu = "admin", con = "fernanfloo";

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    do {
       
        cout << "Ingrese el usuario:";
        cin >> usuario;

        cout << "ingrese su contraseña: ";
        cin >> contraseña;

        if (usuario == usu && contraseña == con) {

            cout << "Acceso concedido" << endl;
            return 0;

        }

        else {
            
            cout << "Acceso negado, tienes 3 intentos" << endl;
            
        }

        cout << "Intentar otra ves? Y=si N=no: ";
        cin >> segi;

    } while (segi == 'Y');

        cout << "Cuenta Bloqueada" << endl;

    return 0;
}