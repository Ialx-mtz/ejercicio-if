#include <iostream>

using namespace std;

int main(){
    int age;

    cout << "Por favor ingresa tu edad " << endl;
    cin >> age;

    if (age>=0 and age<18){

        cout << "Eres menor de edad " << endl;

    }else{

        cout << "Eres mayor de edad " << endl;
    }

    return 0;
}