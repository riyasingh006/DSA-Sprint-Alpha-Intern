//Write a program to input a character digit (‘5’) and convert it into its integer value using ASCII subtraction (c - '0').

#include <iostream>
using namespace std;

int main() {
    char c;

    cout << "Enter a character digit: ";
    cin >> c;

    int value = c - '0';   // Convert char digit to integer

    cout << "Integer value = " << value << endl;

    return 0;
}
