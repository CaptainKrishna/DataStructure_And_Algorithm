// Array in Object 
#include<bits/stdc++.h>
using namespace std;
// Creating class
class Emp{
    int age[100];
    
    public:
    void getData(){
        for(int i=0;i<4;i++){
            cout<<"Enter Age :"<<endl;
            cin>>age[i];
        }
    }
    void showData(){
        cout<<"Employees Age is"<<endl;
        for(int i=0;i<4;i++){
            cout<<age[i]<<" "<<endl;
        }
    }
};
int main(){
    Emp m;
    m.getData();
    m.showData();
    cout<<"specific"<<endl;
    // cout<<m.age[3];
return 0;
}