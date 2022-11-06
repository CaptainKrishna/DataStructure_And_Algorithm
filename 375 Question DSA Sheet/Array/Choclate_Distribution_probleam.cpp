#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={7,3,2,4,9,12,56};
    int m=3;
    sort(a,a+7);
    int mindiff=INT16_MAX;
    for(int i=0;i<7;i++){
        int sd=a[i+m-1]-a[i];
        mindiff=min( mindiff,sd);
        cout<<mindiff<<endl;
    }
return 0;
}