#include <bits/stdc++.h>
using namespace std;
int mindiff(int arr[], int size, int m)
{
    if (m == 0 || size == 0)
    {
        return 0;
    }
    sort(arr, arr + size);

    if (size < m)
    {
        return -1;
    }
    int mind = INT_MAX;
    for (int i = 0; i + m - 1 < size; i++)
    {
        int d = arr[i + m - 1] - arr[i];
        if (d < mind)
        {
            mind = d;
        }
    }
    return mind;
}
int main()
{
    int arr[] = {7, 3, 4, 2, 9, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mindiff(arr, n, 3);
    return 0;
}