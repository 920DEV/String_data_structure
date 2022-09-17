//  Finding the duplicates in a string , if all the character in the string is lowecase letter.
#include<iostream>


using namespace std;

void duplicate_find(string word){

    int H[26]={0};                      // create a hash table/ or / bit wise table / or / 

    for (int i = 0; i<word.size(); i++)
    {
        H[word[i]-97]+=1;
    }


 // since According to the ascii code the lowecase is between 97 and 122 , so there are 26 letters between them. so the size of the hash table for checking duplicates will be 26.
    for (int i = 0; i < 26; i++)
    {
        if (H[i]>1)
        {
            cout<<char(i+97)<<endl;
            cout<<"Repeated "<<H[i]<<" no of times"<<endl;
        }
        
    }
    
}

  int main(){
    string wrd;
    cout<<"Enter words:";
    getline(cin,wrd);

    duplicate_find(wrd);

}

