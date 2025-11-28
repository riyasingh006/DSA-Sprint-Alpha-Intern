// Write a program to input your age in years and print your age in days.(Assume 1 year = 365 days)

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age in years: ";
    cin >> age;

    int ageInDays = age * 365;

    cout << "Your age in days = " << ageInDays << endl;
    return 0;
}
