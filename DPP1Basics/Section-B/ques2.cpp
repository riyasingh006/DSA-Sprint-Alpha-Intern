// Write a program to input a 2-digit number and print the reversed number.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 2-digit number: ";
    cin >> num;

    int tens = num / 10;
    int units = num % 10;

    int reversed = units * 10 + tens;

    cout << "Reversed number = " << reversed << endl;
    return 0;
}
