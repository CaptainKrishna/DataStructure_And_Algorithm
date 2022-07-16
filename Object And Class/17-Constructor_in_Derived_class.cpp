// Constrouctor Calling in Mulitple Inheritance
#include<bits/stdc++.h>
using namespace std;
// BAse class 1
class Base1{
    int i;
    public:
    Base1(int j){
        i=j;
    }
    void PrintData1(void){
        cout<<"The Value of i in a ="<<i<<endl;
    }
};
// BAse class 2
class Base2{
    int i;
    public:
    Base2(int j){
        i=j;
    }
    void PrintData2(void){
        cout<<"The Value of i in b ="<<i<<endl;
    }
};
// Derived class Contain the Base1 and Base2 classes 
class Derived:public Base1,public Base2{
    int derived1;
    int derived2;
    public:
    // constructor calling in same line
    Derived(int a,int b,int c,int d):Base1(a),Base2(b){
        derived1=c;
        derived2=d;
    }
    void PrintData(void){
        cout<<"The Value of i in c ="<<derived1<<endl;
        cout<<"The Value of i in d ="<<derived2<<endl;
    }
};
// Main Function
int main(){
    Derived t(1,2,3,4);
    t.PrintData1();
    t.PrintData2();
    t.PrintData();
return 0;
}