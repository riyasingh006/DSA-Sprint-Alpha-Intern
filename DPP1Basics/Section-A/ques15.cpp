//### **15. Write a program to input two float numbers and print:**
//sum
//difference
//product
//division

#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Enter two float numbers: ";
    cin >> a >> b;

    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;
    cout << "Division = " << a / b << endl;

    return 0;
}
