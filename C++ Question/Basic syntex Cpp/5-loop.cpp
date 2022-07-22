#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for loop
    for(int i=0;i<n;i++){
        cout<<i<<endl;
    }
    int i=0;
    // while loop
    while(n>i){
        cout<<i<<endl;
        i+=1;
    }
    return 0;
}