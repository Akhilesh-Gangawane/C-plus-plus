#include <iostream>
#include <string>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){} // it's actually a default constructor, defined privately.
    protected:
    Man(const string &name, const int &age): _name(name), _age(age){}
    void run(){
        puts("I an run");
    }
    int getAge(){
        return _age; // to access private vairable
    };
    public:
        void sayName() const;
};

void Man::sayName() const{
    cout<<"My name is "<<_name<<" and age is: "<<_age<<endl;
}

class Superman: public Man{
    bool flight;
 public:
    Superman(string name):Man(name, 26){};
    void run(){
        printf("I am speed and age is %d", getAge());
    }
};

class Spiderman : public Man {
    bool webbing;
 public:
    Spiderman(string name):Man(name, 18){};
    void run(){
        puts("I can glide");
    }
};

int main(){
    // object creation with constructor
    Superman clerk("Kent");
    clerk.sayName();
    clerk.run();
    return 0;
}