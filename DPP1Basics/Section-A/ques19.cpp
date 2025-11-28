//Write a program to input a floating number and print it rounded down using type casting (convert to int).

#include <iostream>
using namespace std;

int main() {
    float num;

    cout << "Enter a floating-point number: ";
    cin >> num;

    int roundedDown = (int)num;  // Type casting to int truncates decimal part

    cout << "Rounded down value = " << roundedDown << endl;

    return 0;
}
