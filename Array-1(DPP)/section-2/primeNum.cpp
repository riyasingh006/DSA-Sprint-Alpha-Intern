//Count how many elements#include <iostream>
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int arr[] = {2, 4, 5, 6, 7, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    cout << "Number of prime elements: " << count;
    return 0;
}
