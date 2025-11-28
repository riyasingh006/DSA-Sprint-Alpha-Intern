//Write a program to input a character and print its ASCII value.

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "ASCII value of '" << ch << "' is: " << int(ch) << endl;

    return 0;
}
