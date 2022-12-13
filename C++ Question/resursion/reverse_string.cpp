// revers a  string using recursion
#include<bits/stdc++.h>
using namespace std;
// cusum function alling
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    cout<<ros<<endl;
    reverse(ros);
    cout << s[0];
}
//  Main Function calling
int main()
{
    reverse("Krishna");
    return 0;
}