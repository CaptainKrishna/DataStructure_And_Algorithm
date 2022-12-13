// Given an array Arr of size N, print second largest distinct element from an array.

// Example 1:

// Input: 
// N = 6
// Arr[] = {12, 35, 1, 10, 34, 1}
// Output: 34
// Explanation: The largest element of the 
// array is 35 and the second largest element
// is 34.

#include <bits/stdc++.h>

using namespace std;
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int a[], int n) {
	   sort(a, a + n);
   int second_largest = -1;
   for (int i = n - 2; i >= 0; i--)
   {
      if(a[i]==a[n-1]){
         
           continue;
      }
      if (a[i] != a[n - 1])
      {
         second_largest = a[i];
        break;
      }
   }

   return second_largest;
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

