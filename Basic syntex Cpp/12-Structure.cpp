// Structure And Tydef Function in Cpp Programme 
#include<bits/stdc++.h>
using namespace std;
typedef struct employes{
    int id;
    int age;
    float Salary;
}emp;
int main(){
    struct employes krishna;
    krishna.id=12;
    krishna.age=22;
    krishna.Salary=2500000;

    cout<<krishna.id<<endl;
    cout<<krishna.age<<endl;
    cout<<krishna.Salary<<endl;
   
    emp Krishan2;
    Krishan2.id=12;
    Krishan2.age=22;
    Krishan2.Salary=2500000;

    cout<<Krishan2.id<<endl;
    cout<<Krishan2.age<<endl;
    cout<<Krishan2.Salary<<endl;

return 0;
}