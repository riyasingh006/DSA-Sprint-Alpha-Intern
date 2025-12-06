#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"enter the character";
    cin>>ch;
    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z')) {
        cout<<"it is a alphabet";
    }
    else {
        cout<<"it is not a aplhabet";
    }
}

