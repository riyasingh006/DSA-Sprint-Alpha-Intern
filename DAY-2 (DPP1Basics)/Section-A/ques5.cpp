//Write a program to input an ASCII value (integer) and print the corresponding character.
#include <iostream>
using namespace std;

int main() {
    int asciiValue;

    cout << "Enter an ASCII value (0-127): ";
    cin >> asciiValue;

    char ch = char(asciiValue);  // Convert integer to character

    cout << "The corresponding character is: " << ch << endl;

    return 0;
}
