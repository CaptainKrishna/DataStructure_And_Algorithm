// ifstream in file operations 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    // using open() and close() function 
    // for doing this simple operation in 
    // file read and wright opertation
    string name;
    ofstream enter;
    // Open the file using open Function
    enter.open("sample.txt");
    cout<<"Enter your name :";
    cin>>name;
    enter<<"My name is :"+name;
    // closeing the file using close() Function
    enter.close();
    // Use for reading File operation
    ifstream hin("sample.txt");
    string name1;
    // string Inbuild Function
    getline(hin,name1);
    // Print the data
    cout<<name1;
 
    return 0;
}