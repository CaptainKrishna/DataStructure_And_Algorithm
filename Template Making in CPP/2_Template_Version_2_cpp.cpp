// Writing our First Template 0.2 class 
#include<bits/stdc++.h>
using namespace std;
// using Template for user Define Data Type 
template <class T>
// Creating Dynamic Array using Class Template
class Vector{
    public:
    T* arr;
    T size;
    // Vrctor Constructor
    Vector(T s){
        size=s;
        arr=new T[size];
    }
    // Function for Dot Product passing Object
    int dotProduct(Vector &v){
        T d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){
    // creating arr Using template 
    Vector<int>fruits(5);
    for(int i=0;i<5;i++){
        fruits.arr[i]=i;
    }
    Vector<int>fruits2(5);
     for(int i=0;i<5;i++){
        fruits2.arr[i]=i;
    }
    int a=fruits.dotProduct(fruits2);
    cout<<a<<endl;
return 0;
}