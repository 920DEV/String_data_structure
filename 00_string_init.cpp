// changing upper case letter to lower case.

#include<iostream>
#include<string> 


using namespace std;

int upper_to_lower(string change){
cout<<change;

}
int main(){

    string name;
    cout<<"Enter your name:";
    getline(cin,name);          // to read the character including spacesl.
    upper_to_lower(name);
return 0;
}