//Write a program to input two integers a and b, convert them into double using type casting, and print the floating division result.

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers a and b: ";
    cin >> a >> b;

    // Convert to double for floating-point division
    double result = (double)a / (double)b;

    cout << "Floating division result = " << result << endl;

    return 0;
}

