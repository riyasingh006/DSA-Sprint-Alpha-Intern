//Given an array, print elements present at even indexes
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {   // even index
            cout << arr[i] << " ";
        }
    }

    return 0;
}
