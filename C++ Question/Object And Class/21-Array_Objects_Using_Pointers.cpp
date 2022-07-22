// 11.Array Object Using Pointer in Cpp
#include<bits/stdc++.h>
using namespace std;
// Making New class for Data
class Arra{
    int a;
    int b;
    public:
    // Set Data
    void setdata(int i,int j){
        a=i;
        b=j;
    }
    // Print Data
    void getdata(){
        cout<<a<<" "<<b<<endl;
    }
};
// Starting Main function
int main(){
    // Creating New Array
    Arra* arr=new Arra[5];
    // Making New Pointer for Printing data
    // 1 2 3 4 5
    // ^      ^
    // ^      ^
    // ^      ^
    // ^      *arr
    // *arrTemp

    Arra* arrTemp=arr; 

    cout<<"Enter the  data"<<endl;

    for(int i=0;i<5;i++){
        int a,b;
        cin>>a>>b;
        arr->setdata(a,b);
        arr++;
    }

    for(int i=0;i<5;i++){
        arrTemp->getdata();
        arrTemp++;
    }
return 0;
}
// End of these Programm