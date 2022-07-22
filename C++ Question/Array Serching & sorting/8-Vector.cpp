#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    
    // Declaring The Vector
    vector <int> v;
    // Push the Vector Value
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    // print the Vector
    for(auto element:v){
        cout<<element<<endl;
    }
    // Deleting the element to the vector
    v.pop_back();
    v.pop_back();
    v.pop_back();
    // print the Vector
    for(auto element:v){
        cout<<element<<endl;
    }
    // Push the Vector Value
    v.push_back(5);
    v.push_back(2);
    v.push_back(7);
    vector <int> v2;
    // Swaping the vector Value
    swap(v,v2);
    for(auto element:v2){
        cout<<element<<endl;
    }
    // sorting the vector Value
    
    sort(v.begin(),v.end());
    for(auto element:v){
        cout<<element<<endl;
    }

    return 0;
}