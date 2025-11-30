#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;
    Employee(string name, string company,int age){
        Name=name;
        Company=company;
        Age=age;
    };
    void Introduction(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl;
    }
};

int main()
{
    Employee emp1=Employee("Akhilesh","Google",21);
    emp1.Introduction();
    return 0;
}