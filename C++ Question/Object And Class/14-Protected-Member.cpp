// Protected Member in class ?
#include<bits/stdc++.h>
using namespace std;
class A{
    protected:
    int a;
    public:
    void showData(){
        a=10;
        cout<<a<<" I am in class A"<<endl;
    }
};
class B:protected A{
    public:
    void showData2(){
        a=10;
        cout<<a<<" I am in class B with The Help of Protected"<<endl;
    }
};
int main(){
    A v;
    B v2;
    v.showData();
    v2.showData2();
return 0;
}