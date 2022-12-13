// Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms) 

// Example 1:

// Input:
// N = 1
// Output: 1
// Explanation: For n = 1, sum will be 1.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long seriesSum(long long n)
    {
        if (n == 1)
        {
            return 1;
        }

        return (n * (n + 1)) / 2;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.seriesSum(n);
        cout << ans << "\n";
    }
    return 0;
}