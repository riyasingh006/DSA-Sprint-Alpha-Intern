//Write a program to input two numbers and print the remainder when the first number is divided by the second.

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int remainder = a % b;

    cout << "Remainder = " << remainder << endl;

    return 0;
}
