//Write a program to input two numbers and print the result of:
//(a + b) * (a - b)

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = (a + b) * (a - b);

    cout << "Result = " << result << endl;

    return 0;
}
