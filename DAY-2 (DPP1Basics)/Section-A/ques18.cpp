//Write a program to input an integer and print its ASCII equivalent character if converted using char(x).

#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Enter an integer (0-127): ";
    cin >> x;

    char ch = char(x);  // Convert integer to ASCII character

    cout << "ASCII character = " << ch << endl;

    return 0;
}
