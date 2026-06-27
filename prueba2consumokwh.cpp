#include <iostream>
using namespace std;
float consumo, descuento, precioKWh=0.12, subtotal, total=0;

int main() {

    cout << "Ingrese el consumo en kWh: ";
    cin >> consumo;

    subtotal = consumo * precioKWh;

    if (consumo < 100) {
        descuento = 0;
    } 
    else if (consumo >= 100 && consumo < 300) {
        subtotal = consumo * precioKWh;
        descuento = subtotal * descuento
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