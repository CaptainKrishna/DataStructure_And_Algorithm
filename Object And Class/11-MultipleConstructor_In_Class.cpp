#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex();
    Complex(int x,int y);
    void PrintComplex(){
        cout<<a<<" And "<<b<<endl;
    }
};
Complex::Complex(){
    cout<<"You Did not Enter the Right Function"<<endl;
}
Complex::Complex(int x,int y){
    a=x;
    b=y;
    PrintComplex();
}

int main(){
    Complex a(), b(5), c(2,3);
return 0;
}