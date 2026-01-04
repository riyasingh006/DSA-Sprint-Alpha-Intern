#include <iostream>
using namespace std;

int main() {

    int arr[]={1,6,7,9,6,7,0,5,8};
    cout<<sizeof(arr)<<endl; //36
    cout<<sizeof(arr[0])<<endl; //4
    cout<<sizeof(arr)/sizeof(arr[9]); //9



}