#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee
{
    virtual void AskforPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void set_name(string name)
    {
        Name = name;
    }
    string get_name()
    {
        return Name;
    }
    void set_company(string company)
    {
        Company = company;
    }
    string get_comapny()
    {
        return Company;
    }
    void set_age(int age)
    {
        Age = age;
    }
    int get_age()
    {
        return Age;
    }

    void Introduction()
    {
        cout << "Hello my name is " << Name << ", I work in " << Company << " and my age is " << Age;
    }
    void AskforPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " Got promoted" << endl;
        }
        else
        {
            cout << "Sorry no promotion" << endl;
        }
    }
};

class Developer : public Employee
{ // writing so it can access all the method of baase class even the abstraction
public:
    string favProgrammgingLanguage;
    Developer(string name, string company, int age, string favvProgrammingLanguage) : Employee(name, company, age)
    {
        favProgrammgingLanguage = favvProgrammingLanguage;
    }
    void FixBug()
    {
        cout << get_name() << " loves " << favProgrammgingLanguage << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject=subject;
    }
    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << endl;
    }
};

int main()
{
    Developer d = Developer("Akhilesh", "google", 21, "Python");
    Teacher t = Teacher("Fgh", "school", 45, "Mathematics");
    t.PrepareLesson();
    t.AskforPromotion();
    return 0;
}