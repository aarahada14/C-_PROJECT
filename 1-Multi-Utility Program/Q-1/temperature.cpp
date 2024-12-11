#include<iostream>
using namespace std;

int main(){

    float a, b;

    cout << "enter temperature in celsius:";
    cin >> a;

    b = (9/5 * a)+ 32;

    cout << "The temperature in Clesius :" << a <<endl;
    cout << "The temperature in Fahrenheit :" << b <<endl;

    return 0;
}