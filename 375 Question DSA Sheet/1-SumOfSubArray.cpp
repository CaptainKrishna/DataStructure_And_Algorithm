// Program for Finding the Maximum Sum of Sub Array
#include "bits/stdc++.h"
using namespace std;
// Function for Max Sum of Sub array
int MaxSum(int arr[],int size){
        int max1=0;
        int current=0;
    for(int i=0;i<size;i++){
      {
            current=max(arr[i],current+arr[i]);
            cout<<"current arr"<<arr[i]<<" "<<"current arri "<<current<<endl;
            max1=max(current,max1);
        }
    }
    return max1;
}
int main(){
    int arr[]={1,2,3,4,5,-4,-6,2,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_sum=MaxSum(arr,n);
    cout<<"finale RESULT="<<max_sum;
    return 0;
}