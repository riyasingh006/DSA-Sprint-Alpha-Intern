//Write a program to input the total amount and percentage and find the final discounted value.

#include <iostream>
using namespace std;

int main() {
    double amount, discountPercent;
    cout << "Enter total amount: ";
    cin >> amount;
    cout << "Enter discount percentage: ";
    cin >> discountPercent;

    double discountedValue = amount - (amount * discountPercent / 100);

    cout << "Final discounted value = " << discountedValue << endl;
    return 0;
}
