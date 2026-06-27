#include <iostream>
using namespace std;
float a, b, c;

int main () {

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        cout << "El numero central es: " << a << endl;
    }

    else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        cout << "El numero central es: " << b << endl;
    }

    else {
        cout << "El numero central es: " << c << endl;
    }

    return 0;
}