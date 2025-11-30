#include <iostream>
#include <string>
using namespace std;

class User{
    int secret;
 public:
    string name="default"; //this default value
    void classDeclaration(){ //this is called method as it is inside class
        cout<<"This is class of "<<name<<endl;
    }
};

int main(){
    // object 1
    User akhilesh;
    akhilesh.name="Akhi";
    akhilesh.classDeclaration();

    // object 2
    User loveYou;
    loveYou.classDeclaration();
    return 0;
}