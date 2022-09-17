#include<iostream>

using namespace std;

int converter( string change){
for (int i = 0; i < change.size(); i++)
{
   if(change[i]>=65 && change[i]<=90){
    change[i]=change[i]+32;             // this condition will change upper to lower
   }
   else if(change[i]>=97 && change[i]<=122){
change[i]=change[i]-32;         // this condition will change lower to upper.
   }
}
cout<<change;
}

int main(){
    string words;
    cout<<"Enter kyour words:";
    getline(cin,words);
    
    converter(words);

}