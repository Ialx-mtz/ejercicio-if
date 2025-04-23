#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radio, areaCirculo, lado, areaCuadrado;

    cout << "Porfavor podria digitar un numero para el radio " << endl;
    cin >> radio;

    areaCirculo = 3.1416 * pow(radio, 2);

    cout <<"Area del circulo" << endl;
    cout << "Su area del circulo es la siguiente: " << areaCirculo << endl;

    cout << "Area del cuadrado"<< endl;
    cout << "Podria digitarme el valor numerico del lado "<< endl;
    cin>>lado;
    areaCuadrado= pow(lado,2);

    return 0;
}