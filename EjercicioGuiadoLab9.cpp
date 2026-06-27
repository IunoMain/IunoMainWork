#include <iostream>
using namespace std;

float calcularArea(float base, float altura) {
    return base * altura;
}

int main() {

    float area = calcularArea(5.0, 3.0);
    cout << "El area del rectangulo es: " << area << endl;
    
    return 0;
}