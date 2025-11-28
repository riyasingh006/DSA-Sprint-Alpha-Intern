//Write a program to input a character and print the previous character using decrement operator.

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    --ch;   // Decrement to get previous character

    cout << "Previous character = " << ch << endl;

    return 0;
}
