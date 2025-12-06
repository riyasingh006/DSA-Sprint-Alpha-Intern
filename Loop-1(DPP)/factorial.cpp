//Take input integer n and print the factorial of n using a for loop.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the no.of terms:";
    cin >> n;

    long long fact = 1;

    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    cout << fact;

    return 0;
}
