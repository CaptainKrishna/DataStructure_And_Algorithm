#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        int current=arr[0];
        int maximum=arr[0];
        for(int j=i;j<size-i;j++){
            current+=arr[j];
            maximum=max(maximum,current);
        }
        return maximum;
    }
}
int main(){
    int a[]={-1,2,3,-4,5,-6};
    int size=sizeof(a)/sizeof(a[0]);
    int ans=maxsum(a,size);
    cout<<ans<<endl;
    return 0;
}