// Dynamic Array Memory Allocation using Pointer
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // Simple pointer Initialization 
    int a=4;
    int* p=&a;
    cout<<*p<<endl;
    
    // New Keyword in Pointer
    // creating pointer with New Keyword
    int* ptr=new int(40);
    cout<<*ptr<<endl;
    
    // Allocating Memory in array Using Pointer
    // Dynamic Array Allocation 
    // Intializing Array size using Pointer
    int* arr=new int[3];
     arr[0]=1;
     arr[1]=2;
     arr[2]=3;
    //  Printing Array Element
     for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;;
     }

    //  Delete Array Memory Using Delete Key word in Pointer
    delete arr;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;;
     }
return 0;
}