//Given an array arr. Your task is to find the elements whose value is equal to that of its index value
#include <iostream>
using namespace std;

void findElements(int arr[], int n) {
    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == i) {
            cout << i << " ";
            found = true;
        }
    }

    if(!found) {
        cout << "-1";
    }
}

int main() {
    int arr[] = {0, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    findElements(arr, n);
    return 0;
}
