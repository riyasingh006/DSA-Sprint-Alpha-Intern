#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"enter the number ";
    cin>>n;

    bool flag=true;     //assume that n is prime 
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
        flag=false;
        break;
    }
}
if(n==1)cout<<"neither prime nor composite";
else if(flag==true )cout<<"its a prime number ";
else cout<<"its a composite number";
}