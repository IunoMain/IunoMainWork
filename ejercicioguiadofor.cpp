#include <iostream>
using namespace std;
int n;

int main () {

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= 12; i++) {
        
        cout << n << " X " << i << " = " << n * i << "\t" << endl;
    }

    return 0;
}