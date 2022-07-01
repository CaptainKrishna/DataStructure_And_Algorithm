// Creating the class
#include <bits/stdc++.h>
using namespace std;
// Creating class
class Student
{
public:
    string Name;
    int age;
    bool gen;
    // set the Name using function
    void setname(string n, int a, bool g)
    {
        Name = n;
        age = a;
        gen = g;
    }
    // get the Name using function
    void getname()
    {
        cout << Name << endl;
        cout << age << endl;
        cout << gen << endl;
    }
};
// Starting AMin Function
int main()
{
    // Define the student as a
    Student a[6];
    // Taking input
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number" << i << endl;
        cin >> a[i].Name;
        cin >> a[i].age;
        cin >> a[i].gen;
    }
    // Showing Output
    for (int i = 0; i < 5; i++)
    {
        a[i].getname();
    }
    return 0;
}