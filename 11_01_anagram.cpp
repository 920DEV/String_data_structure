// Two check wheather the two strings or array are anagram ( wheather both of them contain same no of elements) are not.
// using brute force , i.e the program takes(O^2) time;

#include<iostream>

using namespace std;


int checking_anagram(string st1, string str){
    
    if (st1.size()==str.size()){
    for (int i = 0; i < st1.size(); i++)
    {
               for (int j = 0; j < str.size(); j++)
        {
        if(st1[i-97]==str[j-97]){
            return true;
        }
        else{
            false;
        }
        }
        }

    }
    else{
        cout<<"Not an Anagram.";
    }
    
}

int main(){
    string word1, word2;

    word1="decimal";
    word2="medica";

    cout<<checking_anagram(word1,word2);


}