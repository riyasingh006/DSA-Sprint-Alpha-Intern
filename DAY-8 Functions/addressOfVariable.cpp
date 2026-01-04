#include <iostream>
using namespace std;
void function(int x, int y){
    cout<<"ads in x another  function"<<&x<<endl;
     cout<<"ads in y another  function"<<&y<<endl;
}


int main(){
    int x=5;
     int y=6;
     cout<<"ads in x main function"<<&x<<endl;
     cout<<"ads in y main function"<<&y<<endl;
     function(x,y);

}
