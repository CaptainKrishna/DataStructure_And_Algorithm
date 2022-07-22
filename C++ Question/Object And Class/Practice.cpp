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

// 5.Dynamic Array in Cpp

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter the Size of Array:"<<endl;
//     cin>>size;
//     // Array Memory size Allocation Usong Pointer
//     int* arr=new int[size];
//     // Input Data
//     cout<<"Enter the Element of Array"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     // Print Data
//     cout<<"Your Data is"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     // Free Array Memory And Delete the Array
//     delete arr;
//     // Not working Code Find The Solution Of the Givin Concept
//     // Input Data
//     cout<<"Enter the Element of Array"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     // Print Data
//     cout<<"Your Data is"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
// return 0;
// }
// **************************************************

// 6.Virtual base class Example with Multiple Inheritance in Cpp

// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     int id;
//     int dataStudent(int i){
//         id=i;
//     }
// };
// class Test:virtual public Student{
//     public:
//     int mark;
//     int dataTest(int marks){
//         mark=marks;
//     }
// };
// class Sports:virtual public Student{
//     public:
//     int Result;
//     int dataSports(int mar){
//         Result=mar;
//     }
// };
// class Derived:public Test,public Sports{
//     public:
//     int resultdata(int a,int b,int c){
//         dataStudent(a);
//         dataTest(b);
//         dataSports(c);
//         cout<<"Student Id is :"<<a<<endl;
//         cout<<"Test result is:"<<b<<endl;
//         cout<<"Result is:"<<c<<endl;
//     }
// };
// int main(){
//     Derived s;
//     s.resultdata(40,100,99);
// return 0;
// }

// **************************************************************

// 7. Initializing List in Constructor

// #include<bits/stdc++.h>
// using namespace std;
// class List{
//     int a;
//     int b;
//     public:
//     List(int i,int j):a(i),b(j){
//         cout<<"the Value of a is :"<<a<<endl;
//         cout<<"the Value of b is :"<<b<<endl;
//     }
// };
// int main(){
//   List krishna(1,2);  
// return 0;
// }

// **********************************************

// 8.Creting Array Using Objects

// #include<bits/stdc++.h>
// using namespace std;
// class New{
//     int* arr;
//     int size;
//     public:
//     New(int n):size(n){
//         for(int i=0;i<size;i++){
//             arr[i]=i;
//         }
//     }
//     void showData(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<endl;
//         }
//     }
//     void de(){
//         delete[] arr;
//     }
//     void showData2(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<endl;
//         }
//     }
// };
// using namespace std;
// int main(){
//     New k(5);
//     k.showData();
//     k.de();
//     k.showData2();
// return 0;
// }

// ************************************************

// 9.pointer in Array dynamic Array Making Free memory

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int *arr=new int[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     delete[] arr;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
// return 0;
// }

// *****************************************

// 10.pointer to Objects

// #include<bits/stdc++.h>
// using namespace std;
// class New{
//     int a;
//     int b;
//     public:
//     void setNew(int q,int w){
//         a=q;
//         b=w;
//     }
//     void showData(){
//         cout<<"The Value of a is :"<<a<<endl;
//         cout<<"The Value of b is :"<<b<<endl;
//     }
// };
// int main(){
//     New n;
//     New* p=&n;
//     p->setNew(4,8);
//     p->showData();
// return 0;
// }

// 11.Array Object Using Pointer in Cpp
#include<bits/stdc++.h>
using namespace std;
class Arra{
    int a;
    int b;
    public:
    void setdata(int i,int j){
        a=i;
        b=j;
    }
    void getdata(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    Arra* arr=new Arra[5];
    Arra* arrTemp=arr; 
    cout<<"Enter the  data"<<endl;
    for(int i=0;i<5;i++){
        int a,b;
        cin>>a>>b;
        arr->setdata(a,b);
        arr++;
    }
    for(int i=0;i<5;i++){
        arrTemp->getdata();
        arrTemp++;
    }
return 0;
}


















