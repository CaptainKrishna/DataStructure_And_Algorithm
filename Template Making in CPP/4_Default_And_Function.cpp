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
};
int main(){
    // calling Vector constructor using template data type
    Vector <float,float> A(0.2,4.0);
    // Calling Default Template 
    Vector <>B(3,5);
    A.Display();
    B.Display();


return 0;
}