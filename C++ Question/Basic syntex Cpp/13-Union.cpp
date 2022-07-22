// Union In Cpp 
#include<bits/stdc++.h>
using namespace std;
union e{
    int a;
    float b;
};
int main(){
  union e r;
  r.a=20;
  cout<<r.a; 

return 0;
}