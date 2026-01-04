//Count how many elements are greater than 100
#include <iostream>
using namespace std;

int main() {
    int arr[] = {334,678,199,282,33,78,90,99,90,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (arr[i]>100) {
            cout << arr[i] << " ";
        }
    }
}
