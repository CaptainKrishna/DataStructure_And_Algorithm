//Replace all Duplicate String From the Ging String
#include<iostream>
using namespace std;
// Remove Function for Removing the Duplicate Values
string Replace(string s){
// Based Function
    if(s.length()==0){
        return " ";
    }
  
    char ch=s[0];
    string ans = Replace(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}
// Main Function 
int main(){
    cout<<Replace("aaassssfffgghhhjjk");
    return 0;
} 