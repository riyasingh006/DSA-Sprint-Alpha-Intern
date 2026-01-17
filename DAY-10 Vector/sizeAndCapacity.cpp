//size=no of element  currenty available in the vector 
//capacity= no . of element a vector can hold 

#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(2);
    cout<<v.size()<<endl;  //1
     cout<<v.capacity()<<endl;//1
     cout<<"-----";
     v.push_back(9);
     cout<<v.size()<<endl;  //2
     cout<<v.capacity()<<endl;//2

     v.push_back(6);
     cout<<v.size()<<endl;  //3
     cout<<v.capacity()<<endl;//4



}


