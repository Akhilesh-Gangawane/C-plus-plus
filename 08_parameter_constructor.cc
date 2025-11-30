#include <iostream>
#include <string>
using namespace std;

class Phone{
    string _name="";
    string _os="";
    int _price = 0;

    public:
        Phone(const string &name, const string &os, const int &price); //parameter constructor
        string getName(){
            return _os;
        }
};

Phone::Phone(const string &name, const string &os, const int &price):_name(name), _os(os), _price(price){
    puts("This parameter constructor");
}

int main(){
    Phone OnePlus("13R", "Oxygen", 1000);
    cout<<OnePlus.getName()<<endl;
    return 0;
}