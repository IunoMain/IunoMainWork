#include <iostream>
using namespace std;
int n=0;

int main () {

    cout << "Ingresar tu calificacion: ";
    cin >> n;

    switch (n) {
    case 90 ... 100: 
        cout << "A\n";
        break;

    case 85 ... 89: 
        cout << "B\n";
        break;
    
    case 80 ... 84: 
        cout << "C\n";
        break;
    
    case 70 ... 79: 
        cout << "D\n";
        break;
    
    case 60 ... 69: 
        cout << "E\n";
        break;
    
    case 0 ... 59: 
        cout << "F\n";
        break;

    default:
        cout << "ERROR";
    }

    return 0;
}