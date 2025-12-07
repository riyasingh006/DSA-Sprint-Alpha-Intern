//Print the sum of the series: 1 - 2 + 3 - 4 + 5 - 6 ... up to n

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout<<"enter the number ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) sum -= i;
        else sum += i;
    }

    cout << sum;
}
