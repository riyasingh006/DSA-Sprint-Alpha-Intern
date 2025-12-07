//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"enter the value of a:";
    cin >> a ;
    cout<<"enter the value of b2:";
    cin>> b;

    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }

    cout << "GCD = " << a;
}
