// Dynamic Array Making Using Pointer
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the Size of Array:"<<endl;
    cin>>size;
    // Array Memory size Allocation Usong Pointer
    int* arr=new int[size];
    // Input Data
    cout<<"Enter the Element of Array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // Print Data
    cout<<"Your Data is"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    // Free Array Memory And Delete the Array
    delete arr;
    
return 0;
}