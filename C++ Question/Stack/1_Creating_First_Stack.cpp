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
        if(Top==-1){
            cout<<"Satck are Empty()"<<endl;
            return -1;
        }
        return arr[Top];
    }
    // function for Checking Array are Empty or not
    bool empty(){
        if(Top==-1){
            return true;
        }
        return false;
    }
    // Display Stack
    void Display(){
        if(Top==-1){
            cout<<"Your Stack Are Empty"<<endl;
        }
        for(int i=0;i<=Top;i++){
            cout<<arr[i]<<endl;
        }
    }
};
// Start the Main Function
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.Display();
    cout<<"Stack Are Present"<<st.empty();

    cout<<"Top Eelement :"<<st.Topp()<<endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    
    st.Display();
    cout<<st.empty();
return 0;
}