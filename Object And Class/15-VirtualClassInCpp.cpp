#include<bits/stdc++.h>
using namespace std;
class A{
    protected:
    int age=2;
    int ID;
};
class B:virtual protected A{
   public:
    void setdata(int i){
        ID=i;
        cout<<"Id is Entered"<<ID<<endl;
    }
}; 
class C:virtual protected A{
    public:
    void show(void){
        cout<<age<<endl;
    }
};
int main(){
    B c;
    C b;
    b.show();
    c.setdata(24);

return 0;
}