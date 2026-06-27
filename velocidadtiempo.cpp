#include <iostream>
using namespace std;
float velocidad, tiempo, total=0;

int main () {

    cout << "Ingresar velocidad: ";
    cin >> velocidad;

    cout >> "Ingresar tiempo: ";
    cin >> tiempo;

    total = velocidad * tiempo;

    cout << "Total distancia recorrida: " << total;
    
    return 0;
}