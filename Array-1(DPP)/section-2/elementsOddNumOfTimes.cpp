//Find Element Occurring Odd Number of Times
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0) {
            cout << "Element occurring odd times: " << arr[i];
            break;
        }
    }

    return 0;
}
