#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    friend class Complex2;
    public:
    void setNumber(int n1, int n2=0){
        a=n1;
        b=n2; 
    }
    void PrintClass(){
        cout<<"Your Number is :"<<a<<" "<<b<<"|"<<endl;
    }
};
class Complex2{
    public:
    int SumNumber(Complex a1,Complex b2){
       cout<<(a1.a+b2.a)<<" "<<(a1.b+b2.b)<<endl; 
     }
};

int main(){
    Complex a1,b2;
    a1.setNumber(1,2);
    a1.PrintClass();

    b2.setNumber(3);
    b2.PrintClass();

    Complex2 z1;
    z1.SumNumber(a1,b2);
return 0;
}