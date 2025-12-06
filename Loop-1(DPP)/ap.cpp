//Take input integers a, d, n, and print the first n terms of AP starting from a.

#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    cout<<"a:";
    cin>>a;
    cout<<"d:";
    cin>>d;
    cout<<"n:";
    cin>>n;
    

    int term = a;        

    for(int i = 1; i <= n; i++) {
        cout << term << " ";
        term = term + d;   
    }

    
}
