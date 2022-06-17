// Program for Finding Maximum Sum of the Sum of Each Sub Array
#include "bits/stdc++.h"
using namespace std;

int show(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int reverse(int arr[], int size)
{
    int start=0;
    int end=size-1;
    while(start<end){

    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    
    start++;
    end--;
    }
    show(arr,size);
}
int main()
{
    int arr[] = {1, 2, 3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr,n);
    return 0;
}