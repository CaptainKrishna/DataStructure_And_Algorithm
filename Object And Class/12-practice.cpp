// ***********************************

// 1. Class And Function Making in Cpp 

// #include<bits/stdc++.h>
// using namespace std;
// class Complex{
//     int a;
//     int b;
//     public:
//     void setData(int ,int);
//     void getData(void);
//     void SumofNumber(Complex o1,Complex o2);
// };
// void Complex::setData(int z,int y){
//     a=z;
//     b=y;
// }
// void Complex::getData(){
//     cout<<"Your value of A is :"<<a<<endl;
//     cout<<"Your value of B is :"<<b<<endl;
// }
// void Complex::SumofNumber(Complex o1,Complex o2){
//     a=o1.a+o2.a;
//     b=o1.b+o2.b;
// }
// int main(){
//   Complex w,y;
//   w.setData(1,2);  
//   y.setData(1,2);
//   Complex New;
//   New.SumofNumber(w,y);
//   New.getData();  
// return 0;
// }

// ***************************************

//2. Constructor Making in CPP 

// #include<bits/stdc++.h>
// using namespace std;
// class Complex{
//     int a=12;
//     int b=10;
//     public:
//     Complex();
// };
// Complex::Complex(){
//     cout<<a<<" "<<b<<endl;
// }
// int main(){
//     Complex a;

// return 0;
// }

// *********************************
// 3.Friend Function in Object Oriented

#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a;
    int b;
    public:
    friend void setData(int ,int);
    void getData(void);
    void SumofNumber(Complex o1,Complex o2);
};
void Complex::setData(int z,int y){
    a=z;
    b=y;
}
void Complex::getData(){
    cout<<"Your value of A is :"<<a<<endl;
    cout<<"Your value of B is :"<<b<<endl;
}
void Complex::SumofNumber(Complex o1,Complex o2){
    a=o1.a+o2.a;
    b=o1.b+o2.b;
}
int main(){
  Complex w,y;
  w.setData(1,2);  
  y.setData(1,2);
  Complex New;
  New.SumofNumber(w,y);
  New.getData();  
return 0;
}






























