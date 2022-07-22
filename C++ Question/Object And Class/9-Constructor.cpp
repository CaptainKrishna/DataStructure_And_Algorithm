#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int x,int y){
        a=x;
        b=y;
    }
    void Print(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    Complex a(1,2);
    a.Print();
return 0;
}