// incomplete Algorithm
#include<iostream>
using namespace std;

int merge(int arr[],int l,int mid,int r){
    // Declaring Array size
    int n1=mid-l+1;
    int n2=r-mid;

    // Declaring Array 
    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[n1]=arr[l+i];
    }

    for(int i=0;i<n2;i++){
        b[n2]=arr[mid+1+i];
    }
    
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;k++;
        }
        else{
            arr[k]=b[j];
            j++;k++;
        }
        while(i<n1){
            arr[k]=a[i];
            i++;k++;
        }
        while(j<n2){
            arr[k]=b[j];
            j++;k++;
        }
    }

}

int mergesort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
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
    mergesort(arr,0,4);
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