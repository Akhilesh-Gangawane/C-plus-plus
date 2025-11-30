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
    void settingSecret(const int &newsecret){  /* const addition reason -> "You're saying: "I'm borrowing this value, but I       promise not to change it." And the reference is used to avoid copying the value while ensuring it can be passed safely—even if it's a temporary.*/

        secret=newsecret;
    }
    int gettingSecret(){
        return secret;
    }
};

int main(){
    // object 1
    User akhilesh;
    akhilesh.name="Akhi";
    akhilesh.classDeclaration();
    akhilesh.settingSecret(85);
    cout<<akhilesh.gettingSecret()<<endl;

   
    return 0;
}