#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<++a<<endl;
    for(int i=0;i<5;i++){
        cout<<a<<endl;
        ++a;
    }
    return 0;
}