//Find the sum of the first n natural numbers. Take n input from the user?

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter th number";
    cin >> n;

    int sum = n * (n + 1) / 2;
    cout << sum;
}
