//Write a program to input two characters and print the ASCII difference between them.

#include <iostream>
using namespace std;

int main() {
    char ch1, ch2;
    cout << "Enter two characters: ";
    cin >> ch1 >> ch2;

    int difference = ch2 - ch1;

    cout << "ASCII difference = " << difference << endl;
    return 0;
}
