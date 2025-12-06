//Write a program to input a 3-digit number and print the sum of its digits.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    int sum = hundreds + tens + units;

    cout << "Sum of digits = " << sum << endl;
    return 0;
}
