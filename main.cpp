#include <iostream>
using namespace std;

void CelToFah(double num1) {
    double Cel;
    cout<<"Enter the Celsius number: ";
    cin>>Cel;
    double Result=(Cel*9/5)+32;
    cout<<Result;
}

void FahtoCel(double num1) {
    double Fah;
    cout<<"enter the Fahrenheit: ";
    cin>>Fah;

    cout<<(Fah-32)*5/9;
}

int main() {

    char Operator;
    double a;
    cout<<"Select the operator you want to use (F for Fahrenheit to Celsius, C for Celsius to Fahrenheit): ";
    cin>>Operator;

    switch (Operator) {
        case 'F':
            FahtoCel(a);
            break;
        case 'C':
            CelToFah(a);
            break;
        default:
            cout<<"nonvalid operator";
}
    return 0;
}
