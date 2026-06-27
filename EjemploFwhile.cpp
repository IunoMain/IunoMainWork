#include <iostream>
#include <windows.h>
using namespace std;
int n1=0;

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

        while (n1  < 5) {

        cout << "ingrese un número mayor que 5: ";
        cin >> n1;

    }

    return 0;
}