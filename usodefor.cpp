#include <iostream>
using namespace std;

int main () {

    for (int i = 0; i <= 20; i++) {
        cout << i << endl;

        if (i%2==0) {
        cout << "El numero ingresado es par";
        }
    
        else {
        cout << "El numero ingresado es impar";
        }
    }   
    
    return 0;
}