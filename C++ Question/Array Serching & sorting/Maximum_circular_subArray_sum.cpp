#include<bits/stdc++.h>
using namespace std;

int kan(int arr[],int n){
    int curr=0;
    int max1=INT_MIN;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        if(curr<0){
            curr=0;
        }
        max1=max(max1,curr);
    }
    return max1;
}

int main(){
    int n=7;
    int arr[n]={4,-4,6,-6,10,-11,12};
    
    int k=kan(arr,n);
    cout<<k<<endl;
    int wrap;
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrap=totalSum+kan(arr,n);
    cout<<totalSum<<"+"<<kan(arr,n)<<endl;

    cout<<max(wrap,k);
return 0;
}