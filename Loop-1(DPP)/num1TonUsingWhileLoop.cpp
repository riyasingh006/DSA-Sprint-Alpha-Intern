//Take input integer n and print numbers from 1 to n using a while loop. 
 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the no. of terms:";
    cin>> n;

    int i = 1;
    while(i <= n) {
        cout << i << " ";
        i++;
    }

    return 0;
}
