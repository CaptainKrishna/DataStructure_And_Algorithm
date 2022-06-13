#include<iostream>
using namespace std;
int main(){
    int size=5;
    int arr[]={1,2,3,4,5};
    int key;
    cout<<"which element to be found";
    cin>>key;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"element is found";
        }
    }    
    return 0;
}