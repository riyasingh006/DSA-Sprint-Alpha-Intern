//Write a program to input total minutes and convert it into hours and minutes.

#include <iostream>
using namespace std;

int main() {
    int totalMinutes;
    cout << "Enter total minutes: ";
    cin >> totalMinutes;

    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;

    cout << hours << " hours " << minutes << " minutes" << endl;
    return 0;
}
