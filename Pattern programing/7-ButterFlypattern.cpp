#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        int space =n*2-i*2;
        for(int j=0;j<space;j++){
            cout<<" ";}
            for(int k=0;k<i;k++){
                cout<<"*";
            }cout<<endl;
    } 
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        int space =n*2-i*2;
        for(int j=space;j>0;j--){
            cout<<" ";}
            for(int k=i;k>0;k--){
                cout<<"*";
            }cout<<endl;
    }
        
    return 0;
}
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *