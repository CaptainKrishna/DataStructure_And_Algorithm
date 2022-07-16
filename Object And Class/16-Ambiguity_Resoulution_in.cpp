// Ambiguity Resolution in Inheritance 
#include<bits/stdc++.h>
using namespace std;
// Base class 1
class Base1{
    public:
    void greet(){
        cout<<"I am Base 1 Greet"<<endl;
    }
};
// Base class 2
class Base2{
    public:
    void greet(){
        cout<<"I am Base 2 Greet"<<endl;
    }
};
// Derived class Caontain Base1 and Base2 classes
class Derived:public Base1,public Base2{
    public:
    void greet(){
    Base2::greet();
    // Base1::greet();
    }
};
// Main fuinction
int main(){
    // class declaration
    Derived d;
    // Call class Function
    d.greet();
return 0;
}