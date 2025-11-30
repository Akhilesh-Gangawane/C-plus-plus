// The idea of encapsulation is bundling or grouping data and methods that operate on that data within a single unit, typically a class.
#include <bits/stdc++.h>
using namespace std;

class Employee
{
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void set_name(string name){
        Name=name;
    }
    string get_name(){
        return Name;
    }
    void set_company(string company){
        Company=company;
    }
    string get_comapny(){
        return Company;
    }
    void set_age(int age){
        Age=age;
    }
    int get_age(){
        return Age;
    }

    
    void Introduction()
    {
        cout << "Hello my name is " << Name << ", I work in " << Company << " and my age is " << Age;
    }
};

int main()
{   
    Employee emp1=Employee("Akhilesh", "Google", 21);
    emp1.set_age(6);
    emp1.Introduction();
    return 0;
}