#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,2,3,5,7,8,8};
    for(int i=0;i<=8;i++){
    // first way
        // for(int j=i+1;j<=8;j++){
        //     if(a[i]==a[j]){
        //         cout<<a[i];
        //     }
        // }
    // second way
        int j=i+1;
        int range=8;
        while(j<=range){
            if(a[i]==a[j]){
                cout<<a[i];
            }
            j++;
        }
    }
return 0;
}