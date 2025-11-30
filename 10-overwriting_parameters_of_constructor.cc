#include <iostream>
#include <string>
using namespace std;

class Phone{
    string _name="";
    string _os="";
    int _price = 0;

    public:
         Phone(const string &name, const string &os, const int &price); //parameter constructor
        Phone(const Phone&); // copy constructor
        string getName(){
            return _os;
        }
};

Phone::Phone(const string &name, const string &os, const int &price):_name(name), _os(os), _price(price){
    puts("This parameter constructor");
}

Phone::Phone(const Phone & values){
    puts("OVERWRITE copy of parameters");
    _name=values._name;
    _os=values._os;
    _price=values._price;
}

int main(){
    Phone OnePlus13R("13R", "Oxygen", 1000);
    cout<<OnePlus13R.getName()<<endl;

    printf("this is second phone\n");
    Phone OnePlus13s = OnePlus13R;
    cout<<OnePlus13s.getName()<<endl;    
    return 0;
}