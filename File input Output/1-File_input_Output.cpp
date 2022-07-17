// ofstream in file operations 
#include<iostream>
#include<fstream>
using namespace std;

int main(){
 
    string name;
    cout<<"Enter your name:";
    cin>>name;
    ofstream out("sample.txt");
    out<<"your name is :" + name;
 
    return 0;
}