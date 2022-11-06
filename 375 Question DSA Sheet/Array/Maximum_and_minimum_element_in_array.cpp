 #include<bits/stdc++.h>
 using namespace std;
 int max(int a[],int size){
    int maxnumber=-100;
    for(int i=0;i<=size;i++){
        if(a[i]>maxnumber){
            int temp=a[i];
            a[i]=maxnumber;
            maxnumber=temp;
        }
    }
    
    return maxnumber;
 }
 int min(int a[],int size){
    int minnumber=100;
    for(int i=0;i<=size;i++){
        if(a[i]<minnumber){
            int temp=a[i];
            a[i]=minnumber;
            minnumber=temp;
        }
    }
    return minnumber;
 }
 int main(){
    int a[]={5,4,3,6,2,7};
    // find maximum number in array
    int maxnum=max(a,5);
    int minnum=min(a,5);
    cout<<"Maximum number:"<<maxnum<<endl;    
    cout<<"Minimum number:"<<minnum<<endl;    
 return 0;
 }