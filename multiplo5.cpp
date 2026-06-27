#include <iostream>
using namespace std;
int n1, n2;

int main() {

    cout << "Ingrese el numero inicial: "; 
    cin >> n1;

    cout << "Ingrese el numero final: "; 
    cin >> n2;

    cout << "\nMultiplos de 5 en el rango [" << n1 << ", " << n2 << "]:" << endl;

    for (int i = n1; i <= n2; i++) {
        
        if (i % 5 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}