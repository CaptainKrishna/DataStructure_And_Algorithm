// Replace pi with 3.14 in string pippipipip to 
#include<iostream>
using namespace std;
int replace(string s){
    // base Condition
    if(s.length()==0){
        return 0;
    }
    // matching the First and the last char
    if(s[0]=='p' && s[1]=='i'){
        cout<<"00";
        replace(s.substr(2));
    }
    // other wise print 
    else{
        cout<<s[0];
        replace(s.substr(1));
    }
// Main Function
}
int main(){
    // Calling the function
    replace("pippipippxpi");
    return 0;
}