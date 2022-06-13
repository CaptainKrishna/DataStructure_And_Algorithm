#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int s=0;
    int e=size;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            e=mid+1;
        }else{
            s=mid-1;
        }
    }
    return -1;
}
int main(){
    int size=5;
    int arr[]={1,2,3,4,5};
    int key;
    cout<<"Enter the number to be found: "<<endl;
    cin>>key;
    cout<<BinarySearch(arr,size,key)<<endl;
    return 0;
}