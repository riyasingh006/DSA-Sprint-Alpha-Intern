//### **Write a program to input a double number, cast it to int, then print:**
//integer part
//decimal part
//integer part + decimal part (as double)

#include <iostream>
using namespace std;

int main() {
    double num;
    cout << "Enter a double number: ";
    cin >> num;

    int intPart = (int)num;           // Integer part
    double decimalPart = num - intPart;  // Decimal part

    cout << "Integer part = " << intPart << endl;
    cout << "Decimal part = " << decimalPart << endl;
    cout << "Sum as double = " << intPart + decimalPart << endl;

    return 0;
}
