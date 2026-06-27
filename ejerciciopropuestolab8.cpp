#include <iostream>
using namespace std;
int n;

int main () {

    do {

        cout << "Ingrese un numero: ";
        cin >> n;

    } while (n < 0);

    return 0;
}