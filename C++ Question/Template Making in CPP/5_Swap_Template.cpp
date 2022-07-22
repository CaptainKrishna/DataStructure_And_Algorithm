// Multiple Parameter in Our Template String
#include<bits/stdc++.h>
using namespace std;
// Using Template Method
template<class T1=int,class T2=int>
// Making Vector Class 
class Vector{
    public:
    T1 a;
    T2 b;
    // Template using In Function
    Vector(T1 a,T2 b){
        this->a=a;
        this->b=b;
    }
    // Display Function
    void Display(){
        cout<<"First value is :"<<a<<endl;
        cout<<"Second value is:"<<b<<endl;
    }
    // Swaping using Template Data type 
    int swap(){
        T1 temp=this->a;
        this->a=this->b;
        this->b=temp;
        return a,b;
    }
};
int main(){
    // calling Vector constructor using template data type
    Vector <float,float> A(0.2,4.0);
    // Calling Swap Function
    A.swap();
    // Calling Display Function
    A.Display();
return 0;
}