// Static Function And Static Variable in Cpp
#include <bits/stdc++.h>
using namespace std;

class Employees
{
    int id;
    // By Default count is Equal to 0 So Don't Need to Declare
    static int count;

public:
    void setData()
    {
        cout << "Enter the Data :" << endl;
        cin >> id;
        count++;
    }
    void showData()
    {
        cout << "Your Data " << count << "is:" << id<<endl;
    }
    static void getCount(){
        cout<<count<<endl;
    }
};
// Declare the Static Value
int Employees ::count;

int main()
{
    Employees em, pl, yee;
    em.setData();
    em.showData();

    pl.setData();
    pl.showData();

    yee.setData();
    yee.showData();
    // Static Function call only Static Value
    // Static Function
    Employees::getCount();
    return 0;
}