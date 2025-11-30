#include <iostream>
using namespace std;

class One{
    public:
        virtual void intro(){ /* so as below object is a pointer and the reference value was not change unless virtual keyword    was used */
            puts("I am one\n");
        }
};

class Two: public One{
    public:
        void intro(){
            puts("I an Two\n");
        }
};

class Three: public One{
    public:
        void intro(){
            puts("I am Three\n");
        }
};

int main(){
    One *a;
    Two b;
    Three c;

    a=&b;
    a->intro();

    a=&c;
    a->intro(); // -> this is used as a is pointer and when pointer is present we have to use it
    return 0;
}