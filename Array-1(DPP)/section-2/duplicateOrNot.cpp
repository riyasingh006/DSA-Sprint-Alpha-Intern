//Given an array, predict if the array contains duplicates or not
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool duplicate = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }
    }

    if (duplicate)
        cout << "Duplicates present";
    else
        cout << "No duplicates";

    return 0;
}
