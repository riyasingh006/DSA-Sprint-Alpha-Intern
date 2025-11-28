// Write a program to take two integers as input and print their sum, difference, product, and quotient (integer division only).

#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cin >> a >> b;

    int sum = a + b;
    int diff = a - b;
    int prod = a * b;

    if (b != 0) {
        int quot = a / b;
        cout << "Sum: " << sum << endl;
        cout << "Difference: " << diff << endl;
        cout << "Product: " << prod << endl;
        cout << "Quotient (integer division): " << quot << endl;
    } else {
        cout << "Sum: " << sum << endl;
        cout << "Difference: " << diff << endl;
        cout << "Product: " << prod << endl;
        cout << "Quotient: undefined (division by zero)" << endl;
    }

    return 0;
}

