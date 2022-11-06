#include<bits/stdc++.h>
using namespace std;

// first method
void reverse(int a[],int size){
    for(int i=size-1;i>=0;i--){
        cout<<a[i]<<endl;
    }
}

// second method 
void reverse2(int a[],int size){
    int start=0;
    int end=size;
    while(start<end){
        int temp;
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int a[]={1,2,3,4,5,6};
    int size=sizeof(a)/sizeof(a[0]);
    reverse(a,size);
    reverse2(a,size);
    for(int i=0;i<size;i++){
        cout<<a[i]+" "<<endl;
    }
return 0;
}