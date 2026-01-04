//Find Element Occurring Odd Number of Times
#include <iostream>
using namespace std;

int findOddOccurring(int arr[], int n) {
    int result = 0;
    for(int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Element occurring odd number of times: "
         << findOddOccurring(arr, n);
    return 0;
}
