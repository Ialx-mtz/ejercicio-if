#include <iostream>

using namespace std;

int main() {
    float USD, EUR, GTQ, GBP, resultado;
    int opcion;

    cout << " Ingrese la cantidad de dolares que desea convertir: " << endl;
    cin >> USD;

    cout << "Seleccione la moneda a la que desea convertir: " << endl;
    cout << "1 Euros" << endl;
    cout << "2 Quetzales" << endl;
    cout << "3 Libras Esterlinas" << endl;
    cin >> opcion;

    switch(opcion){
        case 1: 
            resultado = USD * 0.85;
            cout << "La conversion de " << USD << " son en total: " << EUR << " euros" << endl; 
    }
    
    return 0;
    }


