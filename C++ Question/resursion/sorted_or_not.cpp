// check if given array sorted or not 
// check if an array are sorted or not 
#include<iostream>
using namespace std;
bool sort(int arr[],int s){
    // base condition check
    if(s==1){
        return true;
    }
    bool restarray=sort(arr+1,s-1);
    return (arr[0]<arr[1] && restarray);
}
// main function
int main(){
    int arr[]={1,5,3,4,5,6};
    int z=sort(arr,5);
    if(z==1){
        cout<<"Array are sorted";
    }
    else{
        cout<<"array are not Sorted";
    }
    return 0;
}