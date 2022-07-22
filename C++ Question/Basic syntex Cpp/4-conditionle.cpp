#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"A is greater";
    }else if(b>a &&b>c){
        cout<<"B is greater";
    }else if(c>a && c>b){
        cout<<"C is greater";
    }else{
        cout<<"error";
    }
    return 0;
}