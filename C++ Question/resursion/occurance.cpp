// find the index of first and Last occurance in the Given array ?
#include <iostream>
using namespace std;
// Function for first Occurance
int firstocc(int arr[], int n, int i, int key)
{
    // base condition
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    // otherwise
    return firstocc(arr, n, i + 1, key);
}
// Function for Last Occurance
int lastocc(int arr[], int n, int i, int key)
{
    // base condition
    if (i == n)
    {
        return -1;
    }
    // decreasing order function coallling
    int restarry = lastocc(arr, n, i + 1, key);
    if (restarry != -1)
    {
        return restarry;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
// Main Function
int main()
{
    int arr[] = {4,2,1,2,5,2,7};
    //  Calling the function
    cout << firstocc(arr, 7, 0, 2) << endl;
    cout <<  lastocc(arr, 7, 0, 2) << endl;
    return 0;
}