//Print the factorials of first ‘n’ numbers

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number ";
    cin >> n;

    long long fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
        cout << fact << endl;
    }
}
