#include<iostream>

using namespace std;

int valid(string pass){
    for (int i = 0; i < pass.size(); i++)
    {
        if(!(pass[i]>=65 && pass[i]<=90) && !(pass[i]>=97 && pass[i]<=122) && !(pass[i]>=48 && pass[i]<=57))
        return true;
        else{
            false;
        }
    }
    
}

int main(){
    string pass;
    cout<<"Enter your password for checking validation:";
    getline(cin,pass);

    if(valid(pass)){                            // if the password is valid it will return the password, another wise it shows the password is in valid.
        
        cout<<"The password you had enter is not valid:";
    }
    else{
        cout<<pass;
    }
    return 0;
}