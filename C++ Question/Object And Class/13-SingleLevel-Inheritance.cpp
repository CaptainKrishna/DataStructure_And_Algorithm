// 1.Inheritance in class Concept ?

// #include<bits/stdc++.h>
// using namespace std;
// class A{
//     public:
//     int ID=123;
// };
// class B : public A{
//     public:
//     void show(){
//     cout<<ID<<endl;
//     }
// };
// int main(){
//     B a;
//     a.show();
// return 0;
// }

// 2.Single Level Inheritance in class ?

#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int id;
    int salary=2500000;
    void setData(int data){
        id=data;
        cout<<salary<<" "<<id<<endl;

    }
};
class B:public A{
    public:
    void NewSetData(int data){
        id=data;
        cout<<salary<<" "<<id<<endl;
    }
};
int main(){
    A c1;
    B c2;
    c1.setData(12);
    c2.NewSetData(24);
return 0;
}
