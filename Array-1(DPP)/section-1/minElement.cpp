//Find the minimum element in the array.
#include <iostream>
using namespace std;

int main() {

    int arr[]={3,7,6,5,4,9,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int minValue=arr[0];

    // traverse
    for(int i=0; i<n; i++){
        if(arr[i]<minValue){
            minValue=arr[i];

        }
    }
    cout<<minValue;
}
    