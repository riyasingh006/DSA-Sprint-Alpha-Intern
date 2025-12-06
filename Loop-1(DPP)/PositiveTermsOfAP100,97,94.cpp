//Take input integer n, and print the AP 100, 97, 94… but only show the positive terms.

#include <iostream>
using namespace std;

int main() {
int n;
cout<<"enter the no. of terms:";
cin>>n;
int a=100;
for(int i=1; i<=n; i++){
    if (a>0)
    cout<<a<<endl;
    a-=3;
}
}   


