// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.


// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={5,4,3,2};
    for(int i=0;i<4;i++){
        int product=1;
        for(int j=0;j<4;j++){
            int n=a[j];
            if(a[i]==a[j]){
            a[j]=1;
            }
            product=a[j]*product;        
            if(a[j]==1){
            a[j]=n;
            }        
        }
        cout<<product<<" ";
    }
return 0;
}