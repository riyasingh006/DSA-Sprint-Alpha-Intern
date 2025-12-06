//Write a program to input an integer and print:
// value before post-increment (`x++`)
//value after post-increment
///value after pre-increment (`++x`)

#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    cout << "Value before post-increment (x++): " << x << endl;
    x++;   // post-increment

    cout << "Value after post-increment: " << x << endl;

    ++x;   // pre-increment
    cout << "Value after pre-increment (++x): " << x << endl;

    return 0;
}
