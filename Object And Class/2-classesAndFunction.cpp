// Simple Object with Memorey Allocation in CPP
#include<bits/stdc++.h>
using namespace std;
// Making Class employees
class Employees{
    // Private Data Member
    int id[100];
    int age[100];
    int count;
    public:
    // Function Access the Private Data Memmber
        void counter(){count=0;}
        void setData(void);

        void getData(void);
        void CountData(){
            cout<<count;
        }
};

// Function For Enter the Data
void Employees ::setData(){
    cout<<"Enter the id : "<<endl;
    cin>>id[count];
    cout<<"Enter the Age: "<<endl;
    cin>>age[count];
    count++;
}

// Function For Show the Data
void Employees ::getData(){
    for(int i=0;i<count;i++){
    cout<<"id is  :"<<id[i]<<endl;
    cout<<"age is :"<<age[i]<<endl;
}}
// Start Main Function
int main(){
    // Declare The Class
    Employees em;
    // Call the Counter For count =0
    em.counter();
    //Set Data using Function 
    em.setData();
    em.setData();
    // Display The Data
    em.getData();
    // Count How Many Memeber Present in Data
    em.CountData();   
return 0;
}