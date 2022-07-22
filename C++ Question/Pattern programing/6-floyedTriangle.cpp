#include<iostream>
using namespace std;
int main(){
    int n=6;
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<n-j){
                cout<<"";
            }else{
            cout<<count;
            count++;}
    }cout<<endl;
        }
    return 0;
}