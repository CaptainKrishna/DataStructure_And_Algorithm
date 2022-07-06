#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int x,int y);
    void Print(){
        cout<<a<<" "<<b<<endl;
    }
};
// Outer Constructor 
Complex::Complex(int x,int y){
    a=x;
    b=y;
}
int main(){
    Complex a(1,2);
    a.Print();
return 0;
}