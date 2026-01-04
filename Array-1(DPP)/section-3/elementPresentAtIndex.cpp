//Given an array arr of n integers and an index key(0-based index). Your task is to return the element present at the index key in the array
#include <iostream>
using namespace std;

int elementAtIndex(int arr[], int n, int key) {
    if(key >= 0 && key < n)
        return arr[key];
    else
        return -1;   // invalid index
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    cout << elementAtIndex(arr, n, key);
    return 0;
}
