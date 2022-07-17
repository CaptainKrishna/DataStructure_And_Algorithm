// ifstream in file operations 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
 
    string name;
    // Use for reading File operation
    ifstream in("sample.txt");
    // string Inbuild Function
    getline(in,name);
    // Print the data
    cout<<name;
 
    return 0;
}