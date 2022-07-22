// Find the factorial of a number
#include<iostream>
using namespace std;
int Factorial(int n ){
    // base condition check
    if(n==0){
        return 1;
    }
    int presum=Factorial(n-1);
    return n*presum;
}
// main function
int main(){
    int n;
    cin>>n;
    cout<<Factorial(n);
    return 0;
}