// Virtual Function Using Pointer
#include<bits/stdc++.h>
using namespace std;
// Making Class 
class Base{
    public:
    int val=1;
    // Virtual Function 
    virtual void Display(){
        cout<<"You are in Base Class"<<val<<endl;
    }
};
class Derived:public Base{
    public:
    int val1=1;
    void Display(){
        cout<<"You are in Derived Class"<<val1<<endl;
    }
};
int main(){
    // Base class Pointer Making
    Base* bpt;
    // Derived clas Object Making
    Derived obj;
    // Copy thr object
    bpt=&obj;
    // Acces base class pointer to Derived 
    // class pointer using virtual Function
    bpt->Display();

return 0;
}