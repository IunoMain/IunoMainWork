#include <iostream>
using namespace std;
float mc, d, total=0;

int main () {

    cout << "Ingrese el monto de compra: ";
    cin >> mc;

    if (mc < 20) {
        total = mc;
    }
    else if (mc >=20 && mc<45) {
        d= mc * 0.1;
        total = mc - d;
    }
    else if (mc >=45 && mc<70) {
        d= mc * 0.2;
        total = mc - d;
    }
    else if (mc >=70 && mc<90) {
        d= mc * 0.25;
        total = mc - d;
    }
    else {
        d = mc * - d;
        total = mc - d;
    }
        cout << "Total a pagar: $ " << total;
        
    return 0;
    }