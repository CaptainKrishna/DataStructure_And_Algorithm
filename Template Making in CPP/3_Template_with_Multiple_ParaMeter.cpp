// Multiple Parameter in Our Template String
// Using Template Function
#include<bits/stdc++.h>
using namespace std;
// Using Template Method
template<class T1,class T2>
// Making Vector Class 
class Vector{
    public:
    T1 a=2;
    T2 b=3;
    void Display(){
        cout<<"First value is :"<<a<<endl;
        cout<<"Second value is:"<<b<<endl;
    }
};
int main(){
 
    Vector <float,float> A;
    A.Display();

return 0;
}