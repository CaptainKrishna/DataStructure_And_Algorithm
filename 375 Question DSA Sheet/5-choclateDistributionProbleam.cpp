#include<bits/stdc++.h>
using namespace std;
int finding(int arr[],int n,int m){
    if(n==0||m==0){
        return 0;
    }
    sort(arr,arr+n);
    
    if(n<m){
        return -1;
    }
    int max1=INT_MAX;
    for(int i=0;i+m-1<n;i++){
        int diff=arr[i+m-1]-arr[i];
        if(diff<max1){
            max1=diff;
        }
    }return max1;
}
int main(){
    int arr[]={7,3,2,4,9,12,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=3;
    cout<<finding(arr,n,m);
    return 0;
}