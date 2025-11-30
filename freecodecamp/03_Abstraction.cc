// Abstaraction is hiding of data

#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee
{
    virtual void AskforPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
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

int main()
{
    Employee e1 = Employee("Akhilesh", "Google", 21);
    Employee e2 = Employee("Sahil", "Funk", 63);
    e1.AskforPromotion();
    e2.AskforPromotion();
    return 0;
}