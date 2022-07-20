// Writing our First Template class 
#include<bits/stdc++.h>
using namespace std;
// Creating Dynamic Array using Class Template
class Vector{
    public:
    int* arr;
    int size;
    // Vrctor Constructor
    Vector(int s){
        size=s;
        arr=new int[size];
    }
    // Function for Dot Product passing Object
    int dotProduct(Vector &v){
        int d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){
    Vector fruits(5);
    for(int i=0;i<5;i++){
        fruits.arr[i]=i;
    }
    Vector fruits2(5);
     for(int i=0;i<5;i++){
        fruits2.arr[i]=i;
    }
    int a=fruits.dotProduct(fruits2);
    cout<<a<<endl;
return 0;
}