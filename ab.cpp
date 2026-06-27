#include <iostream>
using namespace std;
int a, b =0;

int main () {

    cout << "Ingrese el primer valor: ";
    cin >> a;

    cout << "Ingrese el segundo valor: ";
    cin >> b;

    if (a==b) {
        cout << "A es igual que B" << endl;
    }

    else {
        cout << "A es diferente de B" << endl;
    }

    cout << "Fin del programa";
    
    return 0;
}