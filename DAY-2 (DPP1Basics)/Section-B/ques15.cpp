//Write a program to input any number and print whether its last digit is even or odd using modulus.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int lastDigit = num % 10;

    cout << "Last digit = " << lastDigit << endl;
    cout << "Remainder when divided by 2 = " << lastDigit % 2 << endl;  // 0 → even, 1 → odd

    return 0;
}
