// Given an array **arr**, the task is to find whether the **arr** is palindrome or not. If the **arr** is palindrome then return **true** else return **false.**
#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while(start < end) {
        if(arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if(isPalindrome(arr, n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
