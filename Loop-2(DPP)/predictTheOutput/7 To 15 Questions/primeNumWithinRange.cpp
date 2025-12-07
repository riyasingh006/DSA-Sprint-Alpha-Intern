//Write a program in C++ to find a prime number within a range.

#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout<<"Input number for starting range:";
    cin >> start;
    cout<<"Input number for ending range:";
    cin >> end;

    int count = 0;

    for(int num = start; num <= end; num++) {
        if(num < 2) continue;

        bool isPrime = true;
        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << num << " ";
            count++;
        }
    }

    cout << endl << "Total prime numbers: " << count;
}
