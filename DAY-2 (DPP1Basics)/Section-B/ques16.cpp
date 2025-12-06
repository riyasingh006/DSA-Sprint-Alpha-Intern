//Write a program to input the total number of seconds and convert it into minutes + seconds.

#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    cout << "Minutes = " << minutes << ", Seconds = " << seconds << endl;
    return 0;
}
