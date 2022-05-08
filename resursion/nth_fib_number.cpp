// print the nth fibonaci number ex 0,1,1,2,3,5,8....n-1
#include<iostream>
using namespace std;
int Fib(int n){
    // base condition check
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Fib(n-1)+Fib(n-2);
}
// main function
int main(){
    int n;
    cin>>n;
    cout<<Fib(n);
    return 0;
}