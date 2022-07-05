// Creating Object With Friend Function in C++
#include<bits/stdc++.h>
using namespace std;
// Class Declaration
class Complex{
    int a,b;
    public:
    // Making Friend Function
    friend Complex SumComplexNumber(Complex o1 ,Complex o2);
    // Set Number to Function
    void setFunction(int n1 ,int n2){
        a=n1;
        b=n2;
    }
    // Ptint Function
    void PrintFunction(){
        cout<<"Your Enter Number is :"<<a<<" "<<b<<"i"<<endl;
    }
};
// Externle Function For Adding complex Number 
Complex SumComplexNumber(Complex o1,Complex o2){
    Complex o3;
    o3.setFunction((o1.a+o2.a),(o1.b+o2.b)); 
    return o3;

}
// Start Main Function
int main(){
    Complex c1,c2,sum;
    // Add value to the C1
    c1.setFunction(1,4);
    c1.PrintFunction();

    // Add value to the C2
    c2.setFunction(3,5);
    c2.PrintFunction();

    // Add to Complex Number 
    sum=SumComplexNumber(c1,c2);
    sum.PrintFunction();

return 0;
}