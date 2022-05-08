#include<iostream>
using namespace std;

string move(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=move(s.substr(1));
    if(ch=='x'){
        return ch+ans;
    }
    return ans+ch;

}

int main(){
    cout<<move("xxxxxxggghfdffg");
    return 0;
}