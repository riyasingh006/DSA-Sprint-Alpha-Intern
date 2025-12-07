//WAP to print the sum of all the even digits of a given number.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout<<"enter the number ";
    cin >> n;

    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 0) sum += digit;
        n /= 10;
    }

    cout << sum;
}
