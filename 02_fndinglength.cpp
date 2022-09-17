#include<iostream>
#include<string>

using namespace std;
int count=0;
int main(){
    char name[]="devkumarchoudhary";
    for (int i = 0;name[i]!=NULL; i++)
    {
        
        count++;
    }
    cout<<count;
    return 0;
}