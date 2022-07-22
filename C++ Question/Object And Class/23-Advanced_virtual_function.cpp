// Advanced Virtual Function Using Pointer
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
class Data:public Base{
    public:
    int val2=1;
    void Display(){
        cout<<"You are in Base2 Class"<<val2<<endl;
    }
};
class Ata:public Base{
    public:
    int val3=1;
    void Display(){
        cout<<"You are in Base3 Class"<<val3<<endl;
    }
};
int main(){
    // Base class Pointer Making
    Base* bpt[2];
    Data n;
    Ata p;
    bpt[0]=&n;
    bpt[0]->Display();
    bpt[1]=&p;
    bpt[1]->Display();

return 0;
}