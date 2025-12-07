//WAP to print the sum of a given number and its reverse.

#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cout<<"enter the number ";
    cin >> n;

    int temp = n;

    while(temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    cout << n + rev;
}
