#include <iostream>
using namespace std;
char de = 'Y';
float notas [6], prom, suma=0;
string nombre;

int main () {

    do {

        cout << "Ingrese su nombre: " << endl;
        getline (cin, nombre); 

        for (int i = 1; i <= 5; i++) {

        cout << "Ingrese su nota  " << i <<" : ";
        cin >> notas [i];
        
        suma = suma + notas [i]; }

        prom = suma / 5;
    
        if (prom >= 6) {

        cout << "Aprobado, tu promedio es: " << prom << endl;

        }

        else {

        cout << "Reprobado, tu promedio es: " << prom << endl;

        }

        cout << "Desea calcular nuevamente?\n" << "Si = Y\n" << "No = N\n";
        cin >> de;
 
    } while (de == 'Y');
    
    return 0;
}