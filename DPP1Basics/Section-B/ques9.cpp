//Write a program to input any amount of money in rupees and print how many 100-rupee notes can be made and how much money remains.

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount in rupees: ";
    cin >> amount;

    int notes = amount / 100;
    int remainder = amount % 100;

    cout << "100-rupee notes = " << notes << ", Remaining money = " << remainder << endl;
    return 0;
}
