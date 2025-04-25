#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a, b, c, x, firstSolution, secondSolution, d;

    cout << "This program finds the solutions to a second-order equation on the form ax^2+bx+c" << endl;
    cout << "Please enter the value of a: ";
    cin >> a;
    cout << "Please enter the value of b: ";
    cin >> b;
    cout << "Please enter the value of c: ";
    cin >> c;

    x=(-1*c/b); //This the formula for the linear equation
    d=(pow(b,2))-4*a*c;
    firstSolution=((-1)*b+(pow(d,0.5)))/(2*a); 
    secondSolution=((-1)*b-(pow(d,0.5)))/(2*a);

    if (a==0){
        cout << "This is not a second-order equation, this is a linear equation " << endl;
        cout << x << endl;
    }

    else if (d<0){
        cout << "This equation does not have a real solution" << endl;
    }

    else if (d>0){
        cout << "This equation has two solutions: " << endl;
        cout << "x1 is " << firstSolution << endl;
        cout << "x2 is " << secondSolution << endl;
    }

    else if (d==0){
        cout << "This equation has one solution: " << endl;
        cout << "x is " << firstSolution << endl;
    }

    else{
        cout << "Data entered are not valid " << endl;
    }

    cout << "Thank you for using this program" << endl;
    cout << "Have a nice day" << endl;

    return 0;   
}