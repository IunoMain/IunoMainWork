#include <iostream>
using namespace std;
float horas, pago, extra, horaextra, salario;

int main () {

    cout << "Ingresar horas: ";
    cin >> horas;
    
    cout << "Ingresar pago: $";
    cin >> pago;

    if (horas>44) {
        extra = pago * 1.5;
        horaextra = horas - 44;
        salario = (pago * 44) + (extra * horaextra);
    }
    
    else {
        salario = pago * horas;

    }

    cout << "Su salario es: $" << salario << endl;

    return 0;
}