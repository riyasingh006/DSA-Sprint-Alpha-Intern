//Write a program to input three integers a, b, c and print the value of the expression:
//a + b * c - (++b)

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three integers a, b, c: ";
    cin >> a >> b >> c;

    int result = a + b * c - (++b);  // Pre-increment b in expression

    cout << "Result = " << result << endl;

    return 0;
}
