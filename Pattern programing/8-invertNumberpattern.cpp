#include<iostream>
using namespace std;
int main(){
    int count =1;
for(int i=0;i<5;i++){
    for(int j=0;j<5-i;j++){
       if((i+j)%2==0){
        cout<<"1";
       }
       else{
        cout<<"0";
       }
    }
    cout<<endl;
}
return 0;
}