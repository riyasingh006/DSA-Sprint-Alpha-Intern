// Replace every element by its square and print the updated array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i];   // square the element
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
