#include <iostream>
using namespace std;

class User{
    int secret=22; 
 public:
    string name="default"; 
    void classDeclaration();
    void settingSecret(const int &newsecret){ 
        secret=newsecret;
    }
    int gettingSecret()const { 
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
    akhilesh.settingSecret(85);
    cout<<akhilesh.gettingSecret()<<endl;

    User hero=akhilesh;
    cout<<hero.gettingSecret()<<endl;

    

   
    return 0;
}