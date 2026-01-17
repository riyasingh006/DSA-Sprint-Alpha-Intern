#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
     v.push_back(70);   //insert element into the vector 
    v.push_back(60);
     v.push_back(30);
     sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
     }
    

}