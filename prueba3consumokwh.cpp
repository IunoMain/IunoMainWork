#include <iostream>
using namespace std;
float consumo, descuento, subtotal, precioKWh=0.12, total=0;

int main() {

    cout << "Ingrese el consumo en kWh: ";
    cin >> consumo;

    subtotal = consumo * precioKWh;

    if (consumo < 100) {
        descuento = 0;
    } 
    else if (consumo >= 100 && consumo < 300) {
        descuento = subtotal * 0.08;
    } 
    else if (consumo > 300 && consumo < 500) {
        descuento = subtotal * 0.15;
    } 
    else {
        descuento = subtotal * 0.25;
    }

    total = subtotal - descuento;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}