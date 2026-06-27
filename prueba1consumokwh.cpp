#include <iostream>
using namespace std;
float consumo, descuento, subtotal, total=0;

int main () {

    cout << "Ingrese el consumo en kWh: ";
    cin >> consumo;

    if (consumo < 100) {
        descuento = 0;
        total = consumo * 0.12;
    } 
    else if (consumo >= 100 && consumo < 300) {
        subtotal = consumo * 0.12;
        descuento = consumo * 0.12 * 0.08;
        total = subtotal - descuento;
    } 
    else if (consumo >= 300 && consumo < 500) {
        subtotal = consumo * 0.12;
        descuento = consumo * 0.12 * 0.15;
        total = subtotal - descuento;
    } 
    else { 
        consumo >= 500, 0.25;
        subtotal = consumo * 0.12;
        descuento = consumo * 0.12 * 0.25;
        total = consumo * 0.12 - descuento;
    }
        cout << "Subtotal: $" << subtotal << endl;
        cout << "Descuento aplicado: $" << descuento << endl;
        cout << "Total a pagar: $" << total << endl;

    return 0;
}