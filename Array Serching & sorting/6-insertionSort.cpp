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
    // Insertion Sort Algorithm 
    for(int i=1;i<=size;i++){
        int current=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
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