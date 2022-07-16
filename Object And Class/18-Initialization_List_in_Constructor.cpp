// Initialization List in Constructor
#include<bits/stdc++.h>
using namespace std;
// Main Class 
class Test{
    int a;
    int b;
    public:
    // Initializing List Constructor
    Test(int i,int j):a(i),b(j){
        cout<<"The value of A is ="<<a<<endl;
        cout<<"The value of B is ="<<b<<endl;
    }
};
int main(){
    Test t(2,3);
return 0;
}