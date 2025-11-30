#include <iostream>
using namespace std;

class User{
    int secret;
 public:
    string name="default"; 
    void classDeclaration();
    void settingSecret(const int &newsecret){ 
        secret=newsecret;
    }
    int gettingSecret(){
        return secret;
    }
};

void User :: classDeclaration(){ //it defines that this is the part of the class
        cout<<"This is class of "<<name<<endl;
    }

int main(){
    // object 1
    User akhilesh;
    akhilesh.name="Akhi";
    akhilesh.classDeclaration();
    akhilesh.settingSecret(85);
    cout<<akhilesh.gettingSecret()<<endl;

   
    return 0;
}