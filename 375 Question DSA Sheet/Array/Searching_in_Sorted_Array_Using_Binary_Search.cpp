// Search an element in sorted and rotated
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int s,int e,int key){
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[s]<arr[mid]){
        if(arr[s]<=key&& arr[mid]>=key){
            return search(arr,s,mid-1,key);
        }
        return search(arr,mid+1,e,key);
    }
    if(key>=arr[mid]&& arr[e]>=key){
          return search(arr, mid + 1, e, key);
 
    return search(arr, s, mid - 1, key);
    }

}
int main(){
    int arr[]={ 4, 5, 6, 7, 8, 9, 1, 2, 3 };
    int size=sizeof(arr)/sizeof(arr[0]);
    int key =3;
    int i=search(arr,0,size-1,key);
    if(i!=-1){
        cout<<"Key found :"<<i<<endl;
    }    
    else{
        cout<<"Key not found"<<endl;
    }
return 0;
}