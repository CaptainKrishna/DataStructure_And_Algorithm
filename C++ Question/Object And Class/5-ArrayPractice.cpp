#include<bits/stdc++.h>
using namespace std;
class Emp{
    int age[100];
    static int count;
    public:
    void getData(){
        cout<<"Enter The Dat"<<endl;
        for(int i=0;i<5;i++){
            cin>>age[i];
            count++;
        }
    }
    void showData(){
        cout<<"Result"<<endl;
        for(int i=0;i<5;i++){
            cout<<age[i]<<endl;
        }
    }
    void showcount(){
        cout<<count;
    }
};
int Emp::count;
int main(){
    Emp a;
    a.getData();
    a.showData();
    cout<<"Total Number Of Entered Ages"<<endl;
    a.showcount();
return 0;
}