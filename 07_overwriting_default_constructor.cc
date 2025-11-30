#include <iostream>
using namespace std;

class Phone{
    string _name="";
    string _os="";
    int _price = 0;

    public:
        Phone();
        string getName(){
            return _os;
        }         
};

Phone::Phone(): _name(), _os("OneUI"), _price(){ //this overwrite default constructor
    puts("Default Ran");
}


int main(){
    Phone samsung;
    cout<<samsung.getName()<<endl;
    return 0;
}