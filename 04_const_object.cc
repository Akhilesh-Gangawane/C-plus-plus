#include <iostream>
using namespace std;

class User{
    int secret=22; // constructor is rerequiresd for making const object
 public:
    string name="default"; 
    void classDeclaration();
    void settingSecret(const int &newsecret){ 
        secret=newsecret;
    }
    int gettingSecret()const { /* const has to added here as we don't want to disturb other objects and make one object const and we have keep in mind that non-const can access the const value but const can't accept the non-const value */
        return secret;
    }
};

void User :: classDeclaration(){ 
        cout<<"This is class of "<<name<<endl;
}

int main(){
    // object 1
    User akhilesh;
    akhilesh.name="Akhi";
    akhilesh.classDeclaration();
    akhilesh.settingSecret(85);
    cout<<akhilesh.gettingSecret()<<endl;

    const User rock;
    cout<<rock.gettingSecret()<<endl;

    

   
    return 0;
}