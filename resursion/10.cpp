// Solve the problem of Tower of Hanoi
#include<iostream>
using namespace std;
// Tower of Hanoi Function
void Tower(int n,char src ,char des,char help){
    if(n==0){
        return ;
    }
    // Sourse TO Help
    Tower(n-1,src,help,des);
    cout<<"move from"<<" "<<src<<"-to-"<<" "<<des<<endl;
    // Help  To Source
    Tower(n-1,help,des,src);
}
// Main Function 
int main(){
    Tower(3,'A','c','b');
    return 0;
}