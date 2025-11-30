#include <iostream>
#include <string>
using namespace std;

class Money{
    public:
    void getMoney(){
        puts("\nGot money\n");
    };
};

class Man{
    string _name;
    int _age;
    Man(){} 

    friend class Superman; //this allows friend defined class to access private variable
    friend class Spiderman; // it can access all data member which are private
    
    protected:
    Man(const string &name, const int &age): _name(name), _age(age){}
    void run(){
        puts("I an run");
    }
    int getAge(){
        return _age; // this is much more protected way
    };
    public:
        void sayName() const;
};

void Man::sayName() const{
    cout<<"My name is "<<_name<<" and age is: "<<_age<<endl;
}

class Superman: public Man, public Money{ //this has to be done when giving properties of one class to other class you can either assign it to one class or various class
    bool flight;
 public:
    Superman(string name):Man(name, 26){};
    void run(){
        printf("I am speed and age is %d", _age);
    }
};

class Spiderman : public Man, public Money {
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
    clerk.getMoney();
    return 0;
}