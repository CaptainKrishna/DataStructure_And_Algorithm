// Calculate the nraised to the power of p
#include <iostream>
using namespace std;
// Sum function
int power(int n, int p)
{
    // base condition check
    if (p == 0)
    {
        return 1;
    }
    // recursion start
    int presum = power(n, p - 1);
    // return the value
    return n * presum;
}
// main function
int main()
{
    int n, p;
    cin >> n >> p;
    cout << power(n, p);
    return 0;
}