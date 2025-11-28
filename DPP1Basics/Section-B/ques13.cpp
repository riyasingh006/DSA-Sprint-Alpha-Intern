//Write a program to input a floating number and print only the fractional part.

#include <iostream>
using namespace std;

int main() {
    double num;
    cout << "Enter a floating number: ";
    cin >> num;

    double fractionalPart = num - (int)num;

    cout << "Fractional part = " << fractionalPart << endl;
    return 0;
}
