// ***********************************

// 1. Class And Function Making in Cpp ?

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

//2. Constructor Making in CPP ?

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
// 3.Friend Function using Class ?
// #include<bits/stdc++.h>
// using namespace std;
// class Complex{
//     int a;
//     int b;
//     public:
//     friend class Complex2;
//     void setData(int x,int y){
//         a=x;
//         b=y;
//     }
//     void getData(){
//         cout<<a<<" "<<b<<endl;
//     }
// };
// class Complex2{
//     public:
//     Complex Show(Complex o1,Complex o2){
//         cout<<(o1.a+o2.a)<<" "<<(o1.b+o2.b);
//     }
// };
// int main(){
//     Complex a,b;
//     a.setData(2,3);
//     b.setData(3,2);
//     Complex2 z2;
//     z2.Show(a,b);

// return 0;
// }

// *****************************






























