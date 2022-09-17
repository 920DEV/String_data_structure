#include<iostream>
using namespace std;



int checking_anagram(string str1, string str2){
    int H[26];      // taking hash table size as 26, as i'm checking the anagram only for Lowercase letters, which contains value form 97 to 122;
int i;

        for ( i = 0; i < str1.size(); i++)
        {
            H[str1[i-97]]++;
            H[str2[i-97]]--;
        }
        for(i=0;i<26; i++){
            
            if (H[i]<0)
            {
                return false;
                break;
            }
        }
        if(str1[i]=='\0'){
            return true;
            cout<<"this is a anagram";
        }

        
    }

int main()
{
    string word1,word2;
    word1="decimal";
    word2="medical";
    
    cout<<checking_anagram(word1,word2);
    return 0;
}
