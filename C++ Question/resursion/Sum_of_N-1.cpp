// find the sum of n-1 using recursion 
#include<iostream>
using namespace std;
// Sum function 
int sum(int n){
    // base condition check
    if(n==0){
        return 0;
    }
    // recursion start
    int presum=sum(n-1);
    // return the value 
    return n+presum;
}
// main function
int main(){
    int n=5;
    cout<<sum(n);
    return 0;
}