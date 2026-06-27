#include <iostream>
using namespace std;
int num;

int main () {

    cout << "Ingrese un numero del 1 al 7: ";
    cin >> num;

    if (num==1) {
       cout << "Lunes";
    }

    else if (num==2) {
        cout << "Martes";
    }
    
    else if (num==3) {
        cout << "Miercoles";
    }

    else if (num==4) {
        cout << "Jueves";
    }

    else if (num==5) {
        cout << "Viernes";
    }

    else if (num==6) {
        cout << "Sabado";
    }
    
    else if (num==7) {
        cout << "Domingo";
    }

    else {
        cout << "Dia no valido" << endl;
    }

    return 0;
}
    
    
    
    
    
    
