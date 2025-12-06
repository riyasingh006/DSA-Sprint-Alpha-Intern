//Write a program to input two times (hours and minutes separately) and calculate total minutes.

#include <iostream>
using namespace std;

int main() {
    int hours1, minutes1, hours2, minutes2;
    cout << "Enter first time (hours minutes): ";
    cin >> hours1 >> minutes1;
    cout << "Enter second time (hours minutes): ";
    cin >> hours2 >> minutes2;

    int totalMinutes = (hours1 + hours2) * 60 + (minutes1 + minutes2);

    cout << "Total minutes = " << totalMinutes << endl;
    return 0;
}
