#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "Por favor ingresa un numero " << endl;
    cin >> number;

    if (number%2==0){
        cout << "El numero " << number << " es par " << endl;

    }else{
        cout << "El numero " << number << " es impar " << endl;
    }


    return 0;
}