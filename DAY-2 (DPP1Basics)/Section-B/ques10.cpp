//Write a program to input three marks and print their average as a double value.

#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3;
    cout << "Enter three marks: ";
    cin >> m1 >> m2 >> m3;

    double average = (m1 + m2 + m3) / 3.0;  // Divide by 3.0 to get double

    cout << "Average = " << average << endl;
    return 0;
}
