#include<iostream>
using namespace std;
// Binary serch Algorithm
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
    int arr[]={5,2,3,1,4};

    // Print array Before sorting
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    // Selection Sort Algorithm 
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    // Print array after sorting
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    int key;
    cout<<"Enter the number to be found: "<<endl;
    cin>>key;
    // call the Binary Serch Algorithm
    cout<<BinarySearch(arr,size,key)<<endl;
    return 0;
}