// Write a program to input a character and print the next character using pre-increment (++).

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    ++ch;   // Pre-increment to get next character

    cout << "Next character = " << ch << endl;

    return 0;
}
