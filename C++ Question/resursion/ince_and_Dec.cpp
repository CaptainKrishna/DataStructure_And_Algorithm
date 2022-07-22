// Print the number Till N ,increasing order and Decreasing order
#include <iostream>
using namespace std;
// function
int fun(int n)
{
    // Base condition
    if (n == 0)
    {
        return 1;
    }
    // print number in increasing order
    // fun(n-1);
    // cout<<n<<endl;
    // print number in decreasing order
    cout << n << endl;
    fun(n-1);
}
// MainFunction
int main()
{
    fun(15);
    return 0;
}