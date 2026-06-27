#include <iostream>
using namespace std;
int notas;

int main () {

    cout << "Ingrese su nota: " << endl;
    cin >> notas;

    if (notas >= 90) {
        cout << "Excelente, Aprobado";
    }
        else if (notas >= 60 && notas <= 89) {
        
            cout << "Buen trabajo, Aprobado";
        }
        
        else {
            cout << "Lo siento, eres un fracasado... Reprobado";
        } 
    
    return 0;
}