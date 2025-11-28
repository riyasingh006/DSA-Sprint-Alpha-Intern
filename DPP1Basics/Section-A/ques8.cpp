//Write a program to input a double value and print its integer part using type casting.

#include <iostream>
using namespace std;

int main() {
    double x;

    cout << "Enter a double value: ";
    cin >> x;

    int intPart = (int)x;  // Type casting double → int

    cout << "Integer part = " << intPart << endl;

    return 0;
}
