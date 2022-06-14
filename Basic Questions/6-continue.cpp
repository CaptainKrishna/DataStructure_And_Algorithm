#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<20;i++){
        if(i%3==0){
            cout<<"divided by 3:="<<i<<endl;
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}