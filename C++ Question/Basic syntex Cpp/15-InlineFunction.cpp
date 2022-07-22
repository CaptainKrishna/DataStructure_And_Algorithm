// Inline Function

#include<bits/stdc++.h>
using namespace std;

int add(int x,int y){
    static int c=0;    
    c++;
    return x+y+c;
}
int main(){
    int a=2;
    int b=3;
    cout<<add(a,b)<<endl;
    cout<<add(a,b)<<endl;
    cout<<add(a,b)<<endl;
    cout<<add(a,b)<<endl;
    cout<<add(a,b)<<endl;
return 0;
}