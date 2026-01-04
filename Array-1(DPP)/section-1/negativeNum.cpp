#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, -5, 3, -2, 8, -7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
}
