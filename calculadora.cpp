#include <iostream>

using namespace std;

int main(){
    // Declaracion de variablkes para almacenar los numero y el resultado
    float num1, num2, resultado;
    char opcion;

    // Solicitar al usuario que ingrese dos numeros
    cout << "Ingrese el primer numer: " << endl;
    cin >> num1; 
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    // Mostrar el menu de opciones para elegir la operacion matematica
    cout << "Seleccione una operacion: " << endl;
    cout << "a Suma" << endl;
    cout << "b Resta" << endl;
    cout << "c Multiplicacion" << endl;
    cout << "d Division" << endl;
    cout << "Opcion: " << endl;
    cin >> opcion;

    //Usar un switch para realizar la operacion matematica segun la eleccion del usuario
    switch(opcion){
        case 'a': //suma
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;
        
        case 'b': //resta
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;

        case 'c': //multiplicacion
            resultado = num1 * num2;
            cout << " El resultado de la multiplicacion es: " << resultado << endl;
            break;

        case 'd': //division
            //Verificar si el segundo numero es cero antes de realizar la division
            if (num2 != 0){
                resultado = num1 / num2;
                cout << "El resultado de la division es: " << resultado << endl;
            } else {
                cout << "Error: Division por cero no es permitida." << endl;
            }
            break;
        default: 
            cout << "Opcion no valida. Por favor elija una opcion del 1 al 4. " << endl;
            return 1; // Salida temprana del programa si la opcion no es valida
    }

    // Usar if-else para verificar si el resultado es positivo, negativo o cero
    if (resultado > 0){
        cout << "El resultado es positivo." << endl;
    } else if (resultado < 0) {
        cout << "El resultado es negativo." << endl;
    } else {
        cout << "El resultado es cero." << endl;
    }

    return 0; // Fin del programa 
}