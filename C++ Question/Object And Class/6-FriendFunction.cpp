// Practice the Object oriented Concept
#include<bits/stdc++.h>
using namespace std;
    // Making the Class 
    class Krishna{
        public:
        int id;
        string Name;
        bool gender;
    };
    // Staring MAin Function 
int main(){
    Krishna k;
    cout<<"Enter the Id of the student"<<endl;
    cin>>k.id;
    cout<<"Enter the Name of the student"<<endl;
    cin>>k.Name;
    cout<<"Enter the Grnder of the student"<<endl;
    cin>>k.gender;

    cout<<"Student id is:"<<k.id<<" And student Name Is :"<<k.Name<<" ,Genderis"<<k.gender<<endl;

return 0;
}