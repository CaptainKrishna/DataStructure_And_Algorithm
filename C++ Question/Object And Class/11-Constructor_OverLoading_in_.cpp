#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(void);
    Complex(int,int);
    void PrintComplex(){
        cout<<a<<" And "<<b<<endl;
    }
};
Complex::Complex(){
    cout<<"You Did not Enter the Right Function"<<endl;
}
Complex::Complex(int x=0,int y=0){
    a=x;
    b=y;
}

int main(){
    Complex v(), b(5), c(2,3);
    b.PrintComplex();
    c.PrintComplex();
return 0;
}