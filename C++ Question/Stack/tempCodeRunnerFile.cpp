#include<bits/stdc++.h>
using namespace std;
#define n 10
// Creating A Stack
class Stack{
    int* arr;
    int Top;
    public:
    Stack(){
        arr=new int [n];
        Top=-1;
    }
    // Add Data to the Stack
    void push(int x){
        if(Top==n-1){
            cout<<"Stack OverFlow"<<endl;
            return;
        }
        Top++;
        arr[Top]=x;
    }
    // Remove the Last Element 
    void pop(){
        if(Top==-1){
            cout<<"Stack are Empty"<<endl;
            return;
        }
        Top--;
    }
    // Find the Top Element
    int Topp(){