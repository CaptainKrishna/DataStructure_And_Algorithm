// Program for Finding the Maximum Sum of Each Sub Array 
#include "bits/stdc++.h"
using namespace std;
// Function for Max Sum of Sub array
int MaxSum(int arr[], int size)
{
    int max1 = 0;
    for (int i = 0; i < size; i++)
    {
        int current = 0;
        for (int j = i; j < size; j++)
        {
            current += arr[j];
            cout << current << endl;
            max1 = max(max1, current);
        }
    }
    return max1;
}
int main()
{
    int arr[] = {1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = MaxSum(arr, n);
    cout << "finale RESULT=" << max_sum;
    return 0;
}