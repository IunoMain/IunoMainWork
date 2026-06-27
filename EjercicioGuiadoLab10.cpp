#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string nombre;
    char opcion;

    ofstream archivo("estudiantes.txt", ios::app);

    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    do{
        cout << "Ingrese nombre del estudiante: ";
        getline(cin, nombre);
        archivo << nombre << endl;

        cout << "Desea ingresar otro? (s/n): ";
        cin >> opcion;
        cin.ignore();

    } while(opcion == 's' || opcion == 'S');

    archivo.close();

    cout << "\n--- Lista de estudiantes ---" << endl;

    ifstream leer("estudiantes.txt");
    string linea;
    while(getline(leer, linea)){
        cout << "- " << linea << endl;
    }
    leer.close();

    return 0;
}